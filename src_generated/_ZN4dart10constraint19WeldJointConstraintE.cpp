#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint19WeldJointConstraintE()
{
::boost::python::class_<dart::constraint::WeldJointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::JointConstraint > >("WeldJointConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *>((::boost::python::arg("_body"))))
.def(::boost::python::init<dart::dynamics::BodyNode *, dart::dynamics::BodyNode *>((::boost::python::arg("_body1"), ::boost::python::arg("_body2"))))
;
}

/* footer */
