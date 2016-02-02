#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision17CollisionDetectorE()
{
::boost::python::class_<dart::collision::CollisionDetector, ::boost::noncopyable >("CollisionDetector", boost::python::no_init)
.def("addSkeleton", static_cast<void (dart::collision::CollisionDetector::*)(const dart::dynamics::SkeletonPtr &)>(&dart::collision::CollisionDetector::addSkeleton), (::boost::python::arg("_skeleton")))
.def("removeSkeleton", static_cast<void (dart::collision::CollisionDetector::*)(const dart::dynamics::SkeletonPtr &)>(&dart::collision::CollisionDetector::removeSkeleton), (::boost::python::arg("_skeleton")))
.def("removeAllSkeletons", static_cast<void (dart::collision::CollisionDetector::*)()>(&dart::collision::CollisionDetector::removeAllSkeletons))
.def("addCollisionSkeletonNode", static_cast<void (dart::collision::CollisionDetector::*)(dart::dynamics::BodyNode *, bool)>(&dart::collision::CollisionDetector::addCollisionSkeletonNode), (::boost::python::arg("_bodyNode"), ::boost::python::arg("_isRecursive") = false))
.def("removeCollisionSkeletonNode", static_cast<void (dart::collision::CollisionDetector::*)(dart::dynamics::BodyNode *, bool)>(&dart::collision::CollisionDetector::removeCollisionSkeletonNode), (::boost::python::arg("_bodyNode"), ::boost::python::arg("_isRecursive") = false))
.def("createCollisionNode", static_cast<dart::collision::CollisionNode *(dart::collision::CollisionDetector::*)(dart::dynamics::BodyNode *)>(&dart::collision::CollisionDetector::createCollisionNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_bodyNode")))
.def("enablePair", static_cast<void (dart::collision::CollisionDetector::*)(dart::dynamics::BodyNode *, dart::dynamics::BodyNode *)>(&dart::collision::CollisionDetector::enablePair), (::boost::python::arg("_node1"), ::boost::python::arg("_node2")))
.def("disablePair", static_cast<void (dart::collision::CollisionDetector::*)(dart::dynamics::BodyNode *, dart::dynamics::BodyNode *)>(&dart::collision::CollisionDetector::disablePair), (::boost::python::arg("_node1"), ::boost::python::arg("_node2")))
.def("detectCollision", static_cast<bool (dart::collision::CollisionDetector::*)(bool, bool)>(&dart::collision::CollisionDetector::detectCollision), (::boost::python::arg("_checkAllCollisions"), ::boost::python::arg("_calculateContactPoints")))
.def("detectCollision", static_cast<bool (dart::collision::CollisionDetector::*)(dart::dynamics::BodyNode *, dart::dynamics::BodyNode *, bool)>(&dart::collision::CollisionDetector::detectCollision), (::boost::python::arg("_node1"), ::boost::python::arg("_node2"), ::boost::python::arg("_calculateContactPoints")))
.def("getNumContacts", static_cast<std::size_t (dart::collision::CollisionDetector::*)()>(&dart::collision::CollisionDetector::getNumContacts))
.def("getContact", static_cast<dart::collision::Contact &(dart::collision::CollisionDetector::*)(int)>(&dart::collision::CollisionDetector::getContact), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_idx")))
.def("clearAllContacts", static_cast<void (dart::collision::CollisionDetector::*)()>(&dart::collision::CollisionDetector::clearAllContacts))
.def("getNumMaxContacts", static_cast<int (dart::collision::CollisionDetector::*)() const>(&dart::collision::CollisionDetector::getNumMaxContacts))
.def("setNumMaxContacs", static_cast<void (dart::collision::CollisionDetector::*)(int)>(&dart::collision::CollisionDetector::setNumMaxContacs), (::boost::python::arg("_num")))
.def("isCollidable", static_cast<bool (dart::collision::CollisionDetector::*)(const dart::collision::CollisionNode *, const dart::collision::CollisionNode *)>(&dart::collision::CollisionDetector::isCollidable), (::boost::python::arg("_node1"), ::boost::python::arg("_node2")))
;
}

/* footer */
