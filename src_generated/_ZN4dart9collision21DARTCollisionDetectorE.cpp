#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision21DARTCollisionDetectorE()
{
::boost::python::class_<dart::collision::DARTCollisionDetector, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionDetector > >("DARTCollisionDetector", boost::python::no_init)
.def(::boost::python::init<>())
.def("createCollisionNode", static_cast<dart::collision::CollisionNode *(dart::collision::DARTCollisionDetector::*)(dart::dynamics::BodyNode *)>(&dart::collision::DARTCollisionDetector::createCollisionNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_bodyNode")))
.def("detectCollision", static_cast<bool (dart::collision::DARTCollisionDetector::*)(bool, bool)>(&dart::collision::DARTCollisionDetector::detectCollision), (::boost::python::arg("_checkAllCollisions"), ::boost::python::arg("_calculateContactPoints")))
;
}

/* footer */
