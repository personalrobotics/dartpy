#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision16FCLCollisionNodeE()
{
::boost::python::class_<dart::collision::FCLCollisionNode, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionNode > >("FCLCollisionNode", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *>((::boost::python::arg("_bodyNode"))))
.def("getNumCollisionObjects", static_cast<std::size_t (dart::collision::FCLCollisionNode::*)() const>(&dart::collision::FCLCollisionNode::getNumCollisionObjects))
.def("getCollisionObject", static_cast<fcl::CollisionObject *(dart::collision::FCLCollisionNode::*)(std::size_t) const>(&dart::collision::FCLCollisionNode::getCollisionObject), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_idx")))
.def("getFCLTransform", static_cast<fcl::Transform3f (dart::collision::FCLCollisionNode::*)(std::size_t) const>(&dart::collision::FCLCollisionNode::getFCLTransform), (::boost::python::arg("_idx")))
.def("updateFCLCollisionObjects", static_cast<void (dart::collision::FCLCollisionNode::*)()>(&dart::collision::FCLCollisionNode::updateFCLCollisionObjects))
;
}

/* footer */
