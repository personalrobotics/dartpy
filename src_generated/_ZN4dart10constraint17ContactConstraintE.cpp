#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint17ContactConstraintE()
{
::boost::python::class_<dart::constraint::ContactConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("ContactConstraint", boost::python::no_init)
.def(::boost::python::init<dart::collision::Contact &, double>((::boost::python::arg("_contact"), ::boost::python::arg("_timeStep"))))
.def("setErrorAllowance", static_cast<void (*)(double)>(&dart::constraint::ContactConstraint::setErrorAllowance), (::boost::python::arg("_allowance")))
.def("getErrorAllowance", static_cast<double (*)()>(&dart::constraint::ContactConstraint::getErrorAllowance))
.def("setErrorReductionParameter", static_cast<void (*)(double)>(&dart::constraint::ContactConstraint::setErrorReductionParameter), (::boost::python::arg("_erp")))
.def("getErrorReductionParameter", static_cast<double (*)()>(&dart::constraint::ContactConstraint::getErrorReductionParameter))
.def("setMaxErrorReductionVelocity", static_cast<void (*)(double)>(&dart::constraint::ContactConstraint::setMaxErrorReductionVelocity), (::boost::python::arg("_erv")))
.def("getMaxErrorReductionVelocity", static_cast<double (*)()>(&dart::constraint::ContactConstraint::getMaxErrorReductionVelocity))
.def("setConstraintForceMixing", static_cast<void (*)(double)>(&dart::constraint::ContactConstraint::setConstraintForceMixing), (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", static_cast<double (*)()>(&dart::constraint::ContactConstraint::getConstraintForceMixing))
.def("setFrictionDirection", static_cast<void (dart::constraint::ContactConstraint::*)(const Eigen::Vector3d &)>(&dart::constraint::ContactConstraint::setFrictionDirection), (::boost::python::arg("_dir")))
.def("getFrictionDirection1", static_cast<const Eigen::Vector3d &(dart::constraint::ContactConstraint::*)() const>(&dart::constraint::ContactConstraint::getFrictionDirection1), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
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
