#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint20ServoMotorConstraintE()
{
::boost::python::class_<dart::constraint::ServoMotorConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("ServoMotorConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Joint *>((::boost::python::arg("joint"))))
.def("setConstraintForceMixing", static_cast<void (*)(double)>(&dart::constraint::ServoMotorConstraint::setConstraintForceMixing), (::boost::python::arg("cfm")))
.def("getConstraintForceMixing", static_cast<double (*)()>(&dart::constraint::ServoMotorConstraint::getConstraintForceMixing))
.staticmethod("getConstraintForceMixing")
.staticmethod("setConstraintForceMixing")
;
}

/* footer */
