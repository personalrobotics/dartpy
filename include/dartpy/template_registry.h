#ifndef DARTPY_TEMPLATE_REGISTRY_H_
#define DARTPY_TEMPLATE_REGISTRY_H_
#include <boost/python.hpp>
#include "metaprogramming.h"
#include "detail/JointTemplateMultiplexer.h"
#include "detail/JointAndNodeRegistry.h"

namespace dart {
namespace python {

// Helpers for template metaprogramming.

using AllJointTypes = typelist<
  dart::dynamics::FreeJoint,
  dart::dynamics::PrismaticJoint,
  dart::dynamics::RevoluteJoint,
  dart::dynamics::ScrewJoint,
  dart::dynamics::WeldJoint,
  dart::dynamics::UniversalJoint,
  dart::dynamics::BallJoint,
  dart::dynamics::EulerJoint,
  dart::dynamics::PlanarJoint,
  dart::dynamics::TranslationalJoint>;
using AllBodyNodeTypes = typelist<
  dart::dynamics::BodyNode,
  dart::dynamics::SoftBodyNode>;


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
template <size_t NumParameters>
using TemplateRegistryKey
  = std::array<boost::python::object, NumParameters>;

template <class Function, size_t NumParameters>
using TemplateRegistry
  = std::map<TemplateRegistryKey<NumParameters>, std::function<Function>>;


/// Helper class for registering all types.
template <class Registry, class TypeTuple>
struct register_all_types {};

// Base case.
template <class Registry>
struct register_all_types<Registry, typelist<>>
{
  static void register_type()
  {
    // Do nothing.
  }
};

// Specialization for a manually constructed typelist.
template <class Registry, class Type, class... Types>
struct register_all_types<Registry, typelist<Type, Types...>>
{
  static void register_type()
  {
    Registry::template register_type<Type>();
    register_all_types<Registry, typelist<Types...>>::register_type();
  }
};

// Specialization for the output of typelist_product.
template <class Registry, class... Type, class... Types>
struct register_all_types<Registry, typelist<typelist<Type...>, Types...>>
{
  static void register_type()
  {
    Registry::template register_type<Type...>();
    register_all_types<Registry, typelist<Types...>>::register_type();
  }
};


struct JointTemplateRegistry
{
  using NominalType = dart::dynamics::WeldJoint;

  template <template <class> class Factory>
  using RegistryType = TemplateRegistry<
    decltype(Factory<NominalType>::execute), 1>;

  template <class JointType>
  static void register_type()
  {
    const boost::python::object joint_type = get_pytype<JointType>();
    TemplateRegistryKey<1> key {{ joint_type }};

    mBodyNode_moveTo2_registry[key]
      = &detail::BodyNode_moveTo2_factory<JointType>::execute;
    mBodyNode_moveTo3_registry[key]
      = &detail::BodyNode_moveTo3_factory<JointType>::execute;
    mBodyNode_copyTo3_registry[key]
      = &detail::BodyNode_copyTo3_factory<JointType>::execute;
  }

  static void register_default_types()
  {
    register_all_types<JointTemplateRegistry, AllJointTypes>::register_type();
  }

  static RegistryType<detail::BodyNode_moveTo2_factory>
    mBodyNode_moveTo2_registry;
  static RegistryType<detail::BodyNode_moveTo3_factory>
    mBodyNode_moveTo3_registry;
  static RegistryType<detail::BodyNode_copyTo3_factory>
    mBodyNode_copyTo3_registry;
};


struct JointAndNodeTemplateRegistry
{
  using NominalJointType = dart::dynamics::WeldJoint;
  using NominalNodeType = dart::dynamics::BodyNode;

  template <template <class, class> class Factory>
  using RegistryType = TemplateRegistry<
    decltype(Factory<NominalJointType, NominalNodeType>::execute), 2>;

  template <class JointType, class NodeType>
  static void register_type()
  {
    const boost::python::object joint_type = get_pytype<JointType>();
    const boost::python::object node_type = get_pytype<NodeType>();
    TemplateRegistryKey<2> key {{ joint_type, node_type }};

    // TODO: This should be indexed by [joint_type, node_type].
    mSkeleton_createJointAndBodyNodePair_registry[key]
      = &detail::Skeleton_createJointAndBodyNodePair<
          JointType, NodeType>::execute;
  }

  static void register_default_types()
  {
    register_all_types<JointAndNodeTemplateRegistry, 
      typelist_product<AllJointTypes, AllBodyNodeTypes>::type>
        ::register_type();
  }

  static RegistryType<detail::Skeleton_createJointAndBodyNodePair>
    mSkeleton_createJointAndBodyNodePair_registry;
};


} // namespace python
} // namespace dart

#endif // ifndef DARTPY_TEMPLATE_REGISTRY_H_
