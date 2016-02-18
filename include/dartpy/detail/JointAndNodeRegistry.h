#ifndef DARTPY_DETAIL_JOINTANDNODEREGISTRY_H_
#define DARTPY_DETAIL_JOINTANDNODEREGISTRY_H_
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {
namespace detail {

//==============================================================================
template <class JointType, class NodeType>
struct Skeleton_createJointAndBodyNodePair
{
  static boost::python::object execute(
    dart::dynamics::Skeleton* _skeleton,
    dart::dynamics::BodyNode* _parent,
    boost::python::object _jointPropertiesPython,
    boost::python::object _bodyPropertiesPython)
  {
    typename JointType::Properties jointProperties;
    if (!_jointPropertiesPython.is_none())
    {
      jointProperties = boost::python::extract<typename JointType::Properties>(
        _jointPropertiesPython);
    }

    typename NodeType::Properties bodyProperties;
    if (!_bodyPropertiesPython.is_none())
    {
      bodyProperties = boost::python::extract<typename NodeType::Properties>(
        _bodyPropertiesPython);
    }

    auto ret = _skeleton->createJointAndBodyNodePair<JointType, NodeType>(
      _parent, jointProperties, bodyProperties);

    return boost::python::make_tuple(ret.first, ret.second);
  }
};

} // namespace detail
} // namespace python
} // namespace dart

#endif // ifndef DARTPY_DETAIL_JOINTANDNODEREGISTRY_H_
