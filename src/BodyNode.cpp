#include <iostream>
#include <dartpy/BodyNode.h>

// moveTo (BodyNode *_newParent, const typename JointType::Properties &_joint=typename JointType::Properties())

namespace {

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

template <template <class> class FactoryTemplate, class ReturnType>
struct Multiplexer
{
  template <class... Args>
  static ReturnType execute(
    boost::python::object _jointType, Args... _args)
  {
    const std::string jointTypeName = boost::python::extract<std::string>(
      _jointType.attr("__name__"));

    if (jointTypeName == "FreeJoint")
      return FactoryTemplate<dart::dynamics::FreeJoint>::execute(_args...);

    std::cerr << "Unknown type of joint '" << jointTypeName << "'." << std::endl;
    return nullptr;
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
