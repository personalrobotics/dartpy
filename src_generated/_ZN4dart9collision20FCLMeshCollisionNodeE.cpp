#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision20FCLMeshCollisionNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLMeshCollisionNode, ::boost::python::bases<dart::collision::CollisionNode > >("FCLMeshCollisionNode", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *>((::boost::python::arg("_bodyNode"))))
.def("detectCollision", static_cast<bool (dart::collision::FCLMeshCollisionNode::*)(dart::collision::FCLMeshCollisionNode *, std::vector<dart::collision::Contact> *, int)>(&dart::collision::FCLMeshCollisionNode::detectCollision), (::boost::python::arg("_otherNode"), ::boost::python::arg("_contactPoints"), ::boost::python::arg("_max_num_contact")))
.def("updateShape", static_cast<void (dart::collision::FCLMeshCollisionNode::*)()>(&dart::collision::FCLMeshCollisionNode::updateShape))
.def("evalRT", static_cast<void (dart::collision::FCLMeshCollisionNode::*)()>(&dart::collision::FCLMeshCollisionNode::evalRT))
.def("getFclTransform", static_cast<fcl::Transform3f (*)(const Eigen::Isometry3d &)>(&dart::collision::FCLMeshCollisionNode::getFclTransform), (::boost::python::arg("_m")))
.def("evalContactPosition", static_cast<int (*)(const fcl::Contact &, fcl::BVHModel<fcl::OBBRSS> *, fcl::BVHModel<fcl::OBBRSS> *, const fcl::Transform3f &, const fcl::Transform3f &, Eigen::Vector3d *, Eigen::Vector3d *)>(&dart::collision::FCLMeshCollisionNode::evalContactPosition), (::boost::python::arg("_fclContact"), ::boost::python::arg("_mesh1"), ::boost::python::arg("_mesh2"), ::boost::python::arg("_transform1"), ::boost::python::arg("_transform2"), ::boost::python::arg("_contactPosition1"), ::boost::python::arg("_contactPosition2")))
.def("drawCollisionSkeletonNode", static_cast<void (dart::collision::FCLMeshCollisionNode::*)(bool)>(&dart::collision::FCLMeshCollisionNode::drawCollisionSkeletonNode), (::boost::python::arg("_bTrans")))
.staticmethod("evalContactPosition")
.staticmethod("getFclTransform")
.def_readwrite("mMeshes", &dart::collision::FCLMeshCollisionNode::mMeshes)
.def_readwrite("mFclWorldTrans", &dart::collision::FCLMeshCollisionNode::mFclWorldTrans)
.def_readwrite("mWorldTrans", &dart::collision::FCLMeshCollisionNode::mWorldTrans)
;
}

/* footer */
