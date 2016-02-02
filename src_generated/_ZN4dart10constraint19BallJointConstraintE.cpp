#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint19BallJointConstraintE()
{
::boost::python::class_<dart::constraint::BallJointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::JointConstraint > >("BallJointConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *, const Eigen::Vector3d &>((::boost::python::arg("_body"), ::boost::python::arg("_jointPos"))))
.def(::boost::python::init<dart::dynamics::BodyNode *, dart::dynamics::BodyNode *, const Eigen::Vector3d &>((::boost::python::arg("_body1"), ::boost::python::arg("_body2"), ::boost::python::arg("_jointPos"))))
;
}

/* footer */
