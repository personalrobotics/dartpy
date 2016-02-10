#include <iostream>
#include <dartpy/BodyNode.h>

// moveTo (BodyNode *_newParent, const typename JointType::Properties &_joint=typename JointType::Properties())

namespace {

template <class T>
boost::python::object get_pytype()
{
  const boost::python::converter::registration* registration
    = boost::python::converter::registry::query(typeid(T));
  if (!registration)
  {
    throw std::runtime_error(
      "Type is not known to Boost.Python.");
  }

  PyTypeObject* class_object = registration->get_class_object();
  return boost::python::object(
    boost::python::handle<>(
      boost::python::borrowed(class_object)));
}

template <class Function>
using Registry = std::map<boost::python::object, std::function<Function>>;

template <template <class> class Factory, class Function, class... Args>
struct create_registry;

template <template <class> class Factory, class Function>
struct create_registry<Factory, Function>
{
  static void execute(Registry<Function>& registry)
  {
    // do nothing
  }
};

template <template <class> class Factory, class Function, class Arg, class... Args>
struct create_registry<Factory, Function, Arg, Args...>
{
  static void execute(Registry<Function>& registry)
  {
    // TODO: Add a mechanism for injecting a function here.
    registry[get_pytype<Arg>()] = &Factory<Arg>::execute;
    create_registry<Factory, Function, Args...>::execute(registry);
  }
};

template <class JointType>
struct BodyNode_moveTo2_factory
{
  static dart::dynamics::Joint* execute(
    dart::dynamics::BodyNode* _bodyNode,
    dart::dynamics::BodyNode* _newParent,
    boost::python::object _jointPropertiesPython)
  {
    typename JointType::Properties jointProperties;

    if (!_jointPropertiesPython.is_none())
    {
      jointProperties = boost::python::extract<typename JointType::Properties>(
        _jointPropertiesPython);
    }

    return _bodyNode->moveTo<JointType>(_newParent);
  }
};

template <template <class> class Factory, class ReturnType>
struct Multiplexer
{
  template <class... Args>
  static ReturnType execute(boost::python::object _jointType, Args... _args)
  {
    using namespace dart::dynamics;
    using Function = ReturnType (Args...);

    Registry<Function> registry;
    create_registry<Factory, Function,
        FreeJoint, PrismaticJoint, RevoluteJoint, ScrewJoint, WeldJoint,
        UniversalJoint, BallJoint, EulerJoint, PlanarJoint, TranslationalJoint
      >::execute(registry);

    const auto it = registry.find(_jointType);
    if (it == std::end(registry))
    {
      std::cerr << "Unsupported type for template argument." << std::endl;
      return ReturnType();
    }

    return it->second(_args...);
  }
};

} // namespace

namespace dart {
namespace python {

dart::dynamics::Joint* BodyNode_moveTo2(
  dart::dynamics::BodyNode* _bodyNode,
  boost::python::object _jointType,
  dart::dynamics::BodyNode* _newParent,
  boost::python::object _jointProperties)
{
  return Multiplexer<BodyNode_moveTo2_factory, dart::dynamics::Joint*>::execute(
    _jointType, _bodyNode, _newParent, _jointProperties);
}

} // namespace python {
} // namespace dart {
