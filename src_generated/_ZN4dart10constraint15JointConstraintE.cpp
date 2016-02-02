#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint15JointConstraintE()
{
::boost::python::class_<dart::constraint::JointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("JointConstraint", boost::python::no_init)
.def("setErrorAllowance", static_cast<void (*)(double)>(&dart::constraint::JointConstraint::setErrorAllowance), (::boost::python::arg("_allowance")))
.def("getErrorAllowance", static_cast<double (*)()>(&dart::constraint::JointConstraint::getErrorAllowance))
.def("setErrorReductionParameter", static_cast<void (*)(double)>(&dart::constraint::JointConstraint::setErrorReductionParameter), (::boost::python::arg("_erp")))
.def("getErrorReductionParameter", static_cast<double (*)()>(&dart::constraint::JointConstraint::getErrorReductionParameter))
.def("setMaxErrorReductionVelocity", static_cast<void (*)(double)>(&dart::constraint::JointConstraint::setMaxErrorReductionVelocity), (::boost::python::arg("_erv")))
.def("getMaxErrorReductionVelocity", static_cast<double (*)()>(&dart::constraint::JointConstraint::getMaxErrorReductionVelocity))
.def("setConstraintForceMixing", static_cast<void (*)(double)>(&dart::constraint::JointConstraint::setConstraintForceMixing), (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", static_cast<double (*)()>(&dart::constraint::JointConstraint::getConstraintForceMixing))
.def("getBodyNode1", static_cast<dart::dynamics::BodyNode *(dart::constraint::JointConstraint::*)() const>(&dart::constraint::JointConstraint::getBodyNode1), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getBodyNode2", static_cast<dart::dynamics::BodyNode *(dart::constraint::JointConstraint::*)() const>(&dart::constraint::JointConstraint::getBodyNode2), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
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
