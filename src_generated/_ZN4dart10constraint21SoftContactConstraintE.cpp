#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint21SoftContactConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::SoftContactConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("SoftContactConstraint", boost::python::no_init)
.def(::boost::python::init<dart::collision::Contact &, double>((::boost::python::arg("_contact"), ::boost::python::arg("_timeStep"))))
.def("setErrorAllowance", static_cast<void (*)(double)>(&dart::constraint::SoftContactConstraint::setErrorAllowance), (::boost::python::arg("_allowance")))
.def("getErrorAllowance", static_cast<double (*)()>(&dart::constraint::SoftContactConstraint::getErrorAllowance))
.def("setErrorReductionParameter", static_cast<void (*)(double)>(&dart::constraint::SoftContactConstraint::setErrorReductionParameter), (::boost::python::arg("_erp")))
.def("getErrorReductionParameter", static_cast<double (*)()>(&dart::constraint::SoftContactConstraint::getErrorReductionParameter))
.def("setMaxErrorReductionVelocity", static_cast<void (*)(double)>(&dart::constraint::SoftContactConstraint::setMaxErrorReductionVelocity), (::boost::python::arg("_erv")))
.def("getMaxErrorReductionVelocity", static_cast<double (*)()>(&dart::constraint::SoftContactConstraint::getMaxErrorReductionVelocity))
.def("setConstraintForceMixing", static_cast<void (*)(double)>(&dart::constraint::SoftContactConstraint::setConstraintForceMixing), (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", static_cast<double (*)()>(&dart::constraint::SoftContactConstraint::getConstraintForceMixing))
.def("setFrictionDirection", static_cast<void (dart::constraint::SoftContactConstraint::*)(const Eigen::Vector3d &)>(&dart::constraint::SoftContactConstraint::setFrictionDirection), (::boost::python::arg("_dir")))
.def("getFrictionDirection1", static_cast<const Eigen::Vector3d &(dart::constraint::SoftContactConstraint::*)() const>(&dart::constraint::SoftContactConstraint::getFrictionDirection1), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
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
