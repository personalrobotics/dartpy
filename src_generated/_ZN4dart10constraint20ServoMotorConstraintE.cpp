#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint20ServoMotorConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ServoMotorConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("ServoMotorConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Joint *>((::boost::python::arg("joint"))))
.def("setConstraintForceMixing", static_cast<void (*)(double)>(&dart::constraint::ServoMotorConstraint::setConstraintForceMixing), (::boost::python::arg("cfm")))
.def("getConstraintForceMixing", static_cast<double (*)()>(&dart::constraint::ServoMotorConstraint::getConstraintForceMixing))
.staticmethod("getConstraintForceMixing")
.staticmethod("setConstraintForceMixing")
;
}

/* footer */
