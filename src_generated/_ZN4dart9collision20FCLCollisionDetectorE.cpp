#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision20FCLCollisionDetectorE()
{
::boost::python::class_<dart::collision::FCLCollisionDetector, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionDetector > >("FCLCollisionDetector", boost::python::no_init)
.def(::boost::python::init<>())
.def("detectCollision", static_cast<bool (dart::collision::FCLCollisionDetector::*)(bool, bool)>(&dart::collision::FCLCollisionDetector::detectCollision), (::boost::python::arg("_checkAllCollisions"), ::boost::python::arg("_calculateContactPoints")))
.def("createCollisionNode", static_cast<dart::collision::CollisionNode *(dart::collision::FCLCollisionDetector::*)(dart::dynamics::BodyNode *)>(&dart::collision::FCLCollisionDetector::createCollisionNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_bodyNode")))
.def("findCollisionNode", static_cast<dart::collision::CollisionNode *(dart::collision::FCLCollisionDetector::*)(const fcl::CollisionGeometry *) const>(&dart::collision::FCLCollisionDetector::findCollisionNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_fclCollGeom")))
.def("findCollisionNode", static_cast<dart::collision::FCLCollisionNode *(dart::collision::FCLCollisionDetector::*)(const fcl::CollisionObject *) const>(&dart::collision::FCLCollisionDetector::findCollisionNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_fclCollObj")))
;
}

/* footer */