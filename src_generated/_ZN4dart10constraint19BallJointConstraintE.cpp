#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint19BallJointConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::BallJointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::JointConstraint > >("BallJointConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *, const Eigen::Vector3d &>((::boost::python::arg("_body"), ::boost::python::arg("_jointPos"))))
.def(::boost::python::init<dart::dynamics::BodyNode *, dart::dynamics::BodyNode *, const Eigen::Vector3d &>((::boost::python::arg("_body1"), ::boost::python::arg("_body2"), ::boost::python::arg("_jointPos"))))
;
}

/* footer */
