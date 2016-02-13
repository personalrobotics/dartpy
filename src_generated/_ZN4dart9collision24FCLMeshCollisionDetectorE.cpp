#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision24FCLMeshCollisionDetectorE()
{
::boost::python::class_<dart::collision::FCLMeshCollisionDetector, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionDetector > >("FCLMeshCollisionDetector", boost::python::no_init)
.def(::boost::python::init<>())
.def("createCollisionNode", static_cast<dart::collision::CollisionNode *(dart::collision::FCLMeshCollisionDetector::*)(dart::dynamics::BodyNode *)>(&dart::collision::FCLMeshCollisionDetector::createCollisionNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_bodyNode")))
.def("detectCollision", static_cast<bool (dart::collision::FCLMeshCollisionDetector::*)(bool, bool)>(&dart::collision::FCLMeshCollisionDetector::detectCollision), (::boost::python::arg("_checkAllCollisions"), ::boost::python::arg("_calculateContactPoints")))
.def("detectCollision", static_cast<bool (dart::collision::FCLMeshCollisionDetector::*)(dart::collision::CollisionNode *, dart::collision::CollisionNode *, bool)>(&dart::collision::FCLMeshCollisionDetector::detectCollision), (::boost::python::arg("_node1"), ::boost::python::arg("_node2"), ::boost::python::arg("_calculateContactPoints")))
.def("draw", static_cast<void (dart::collision::FCLMeshCollisionDetector::*)()>(&dart::collision::FCLMeshCollisionDetector::draw))
;
}

/* footer */
