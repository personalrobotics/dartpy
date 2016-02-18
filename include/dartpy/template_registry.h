#ifndef DARTPY_TEMPLATE_REGISTRY_H_
#define DARTPY_TEMPLATE_REGISTRY_H_
#include <boost/python.hpp>
#include "detail/JointTemplateMultiplexer.h"

namespace dart {
namespace python {

/// Gets the PyTypeObject object associated with a C++ class.
template <class T>
boost::python::object get_pytype()
{
  const boost::python::converter::registration* registration
    = boost::python::converter::registry::query(typeid(T));
  if (!registration)
  {
    throw std::runtime_error("Type is not known to Boost.Python.");
  }

  PyTypeObject* const class_object = registration->get_class_object();
  return boost::python::object(boost::python::handle<>(
    boost::python::borrowed(class_object)));
}


/// Registry that maps Python type objects to a factory function.
template <class Function>
using TemplateRegistry = std::map<
  boost::python::object, std::function<Function>>;


struct JointTemplateRegistry
{
  using NominalType = dart::dynamics::WeldJoint;

  template <template <class> class Factory>
  using RegistryType = TemplateRegistry<
    decltype(Factory<NominalType>::execute)>;

  template <class JointType>
  static void register_type()
  {
    const boost::python::object class_object = get_pytype<JointType>();
    mBodyNode_moveTo2_registry[class_object]
      = &detail::BodyNode_moveTo2_factory<JointType>::execute;
    mBodyNode_moveTo3_registry[class_object]
      = &detail::BodyNode_moveTo3_factory<JointType>::execute;
    mBodyNode_copyTo3_registry[class_object]
      = &detail::BodyNode_copyTo3_factory<JointType>::execute;
  }

  static RegistryType<
    detail::BodyNode_moveTo2_factory> mBodyNode_moveTo2_registry;
  static RegistryType<
    detail::BodyNode_moveTo3_factory> mBodyNode_moveTo3_registry;
  static RegistryType<
    detail::BodyNode_copyTo3_factory> mBodyNode_copyTo3_registry;
};

} // namespace python
} // namespace dart

#endif // ifndef DARTPY_TEMPLATE_REGISTRY_H_
