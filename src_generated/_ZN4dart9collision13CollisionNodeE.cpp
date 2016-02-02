#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision13CollisionNodeE()
{
::boost::python::class_<dart::collision::CollisionNode >("CollisionNode", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *>((::boost::python::arg("_bodyNode"))))
.def("getBodyNode", static_cast<dart::dynamics::BodyNode *(dart::collision::CollisionNode::*)() const>(&dart::collision::CollisionNode::getBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("setIndex", static_cast<void (dart::collision::CollisionNode::*)(std::size_t)>(&dart::collision::CollisionNode::setIndex), (::boost::python::arg("_idx")))
.def("getIndex", static_cast<std::size_t (dart::collision::CollisionNode::*)() const>(&dart::collision::CollisionNode::getIndex))
;
}

/* footer */
