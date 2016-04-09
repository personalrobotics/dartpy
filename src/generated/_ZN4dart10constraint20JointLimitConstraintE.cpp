#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint20JointLimitConstraintE_docstring[] = R"CHIMERA_STRING( JointLimitConstraint handles joint position or velocity limits
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint17setErrorAllowanceEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint17getErrorAllowanceEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint26setErrorReductionParameterEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint26getErrorReductionParameterEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint28setMaxErrorReductionVelocityEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint28getMaxErrorReductionVelocityEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint24setConstraintForceMixingEd_docstring[] = R"CHIMERA_STRING( Set global constraint force mixing parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20JointLimitConstraint24getConstraintForceMixingEv_docstring[] = R"CHIMERA_STRING( Get global constraint force mixing parameter
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint20JointLimitConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::JointLimitConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("JointLimitConstraint", _ZN4dart10constraint20JointLimitConstraintE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Joint * _joint) -> dart::constraint::JointLimitConstraint * { return new dart::constraint::JointLimitConstraint(_joint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_joint"))))
.def("setErrorAllowance", [](double _allowance) -> void { return dart::constraint::JointLimitConstraint::setErrorAllowance(_allowance); }, (::boost::python::arg("_allowance")))
.def("getErrorAllowance", []() -> double { return dart::constraint::JointLimitConstraint::getErrorAllowance(); })
.def("setErrorReductionParameter", [](double _erp) -> void { return dart::constraint::JointLimitConstraint::setErrorReductionParameter(_erp); }, (::boost::python::arg("_erp")))
.def("getErrorReductionParameter", []() -> double { return dart::constraint::JointLimitConstraint::getErrorReductionParameter(); })
.def("setMaxErrorReductionVelocity", [](double _erv) -> void { return dart::constraint::JointLimitConstraint::setMaxErrorReductionVelocity(_erv); }, (::boost::python::arg("_erv")))
.def("getMaxErrorReductionVelocity", []() -> double { return dart::constraint::JointLimitConstraint::getMaxErrorReductionVelocity(); })
.def("setConstraintForceMixing", [](double _cfm) -> void { return dart::constraint::JointLimitConstraint::setConstraintForceMixing(_cfm); }, (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", []() -> double { return dart::constraint::JointLimitConstraint::getConstraintForceMixing(); })
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
