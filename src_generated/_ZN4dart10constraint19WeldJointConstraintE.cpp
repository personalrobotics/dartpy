#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint19WeldJointConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::WeldJointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::JointConstraint > >("WeldJointConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *>((::boost::python::arg("_body"))))
.def(::boost::python::init<dart::dynamics::BodyNode *, dart::dynamics::BodyNode *>((::boost::python::arg("_body1"), ::boost::python::arg("_body2"))))
;
}

/* footer */
