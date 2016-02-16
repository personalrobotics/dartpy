#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision21DARTCollisionDetectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::DARTCollisionDetector, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionDetector > >("DARTCollisionDetector", boost::python::no_init)
.def(::boost::python::init<>())
.def("createCollisionNode", static_cast<dart::collision::CollisionNode *(dart::collision::DARTCollisionDetector::*)(dart::dynamics::BodyNode *)>(&dart::collision::DARTCollisionDetector::createCollisionNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_bodyNode")))
.def("detectCollision", static_cast<bool (dart::collision::DARTCollisionDetector::*)(bool, bool)>(&dart::collision::DARTCollisionDetector::detectCollision), (::boost::python::arg("_checkAllCollisions"), ::boost::python::arg("_calculateContactPoints")))
;
}

/* footer */
