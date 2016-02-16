#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint20JointLimitConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::JointLimitConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("JointLimitConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Joint *>((::boost::python::arg("_joint"))))
.def("setErrorAllowance", static_cast<void (*)(double)>(&dart::constraint::JointLimitConstraint::setErrorAllowance), (::boost::python::arg("_allowance")))
.def("getErrorAllowance", static_cast<double (*)()>(&dart::constraint::JointLimitConstraint::getErrorAllowance))
.def("setErrorReductionParameter", static_cast<void (*)(double)>(&dart::constraint::JointLimitConstraint::setErrorReductionParameter), (::boost::python::arg("_erp")))
.def("getErrorReductionParameter", static_cast<double (*)()>(&dart::constraint::JointLimitConstraint::getErrorReductionParameter))
.def("setMaxErrorReductionVelocity", static_cast<void (*)(double)>(&dart::constraint::JointLimitConstraint::setMaxErrorReductionVelocity), (::boost::python::arg("_erv")))
.def("getMaxErrorReductionVelocity", static_cast<double (*)()>(&dart::constraint::JointLimitConstraint::getMaxErrorReductionVelocity))
.def("setConstraintForceMixing", static_cast<void (*)(double)>(&dart::constraint::JointLimitConstraint::setConstraintForceMixing), (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", static_cast<double (*)()>(&dart::constraint::JointLimitConstraint::getConstraintForceMixing))
.staticmethod("getConstraintForceMixing")
.staticmethod("getErrorAllowance")
.staticmethod("getErrorReductionParameter")
.staticmethod("getMaxErrorReductionVelocity")
.staticmethod("setConstraintForceMixing")
.staticmethod("setErrorAllowance")
.staticmethod("setErrorReductionParameter")
.staticmethod("setMaxErrorReductionVelocity")
;
}

/* footer */
