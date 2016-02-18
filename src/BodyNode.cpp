#include <dartpy/BodyNode.h>
#include <dartpy/template_registry.h>

namespace dart {
namespace python {

//==============================================================================
dart::dynamics::Joint* BodyNode_moveTo2(
  dart::dynamics::BodyNode* _bodyNode,
  boost::python::object _jointType,
  dart::dynamics::BodyNode* _newParent,
  boost::python::object _jointProperties)
{
  TemplateRegistryKey<1> key {{ _jointType }};
  return JointTemplateRegistry::mBodyNode_moveTo2_registry[key](
    _bodyNode, _newParent, _jointProperties);
}

//==============================================================================
dart::dynamics::Joint* BodyNode_moveTo3(
  dart::dynamics::BodyNode* _bodyNode,
  boost::python::object _jointType,
  const dart::dynamics::SkeletonPtr& _newSkeleton,
  dart::dynamics::BodyNode* _newParent,
  boost::python::object _jointProperties)
{
  TemplateRegistryKey<1> key {{ _jointType }};
  return JointTemplateRegistry::mBodyNode_moveTo3_registry[key](
    _bodyNode, _newSkeleton, _newParent, _jointProperties);
}


//==============================================================================
boost::python::object BodyNode_copyTo3(
  boost::python::object _jointType,
  dart::dynamics::BodyNode* _bodyNode, 
  dart::dynamics::BodyNode* _newParent,
  boost::python::object _jointProperties,
  bool _recursive)
{
  TemplateRegistryKey<1> key {{ _jointType }};
  return JointTemplateRegistry::mBodyNode_copyTo3_registry[key](
    _bodyNode, _newParent, _jointProperties, _recursive);
}

} // namespace python
} // namespace dart
