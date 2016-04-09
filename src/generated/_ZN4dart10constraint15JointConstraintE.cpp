#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint15JointConstraintE_docstring[] = R"CHIMERA_STRING( class JointConstraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint17setErrorAllowanceEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint17getErrorAllowanceEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint26setErrorReductionParameterEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint26getErrorReductionParameterEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint28setMaxErrorReductionVelocityEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint28getMaxErrorReductionVelocityEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint24setConstraintForceMixingEd_docstring[] = R"CHIMERA_STRING( Set global constraint force mixing parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint15JointConstraint24getConstraintForceMixingEv_docstring[] = R"CHIMERA_STRING( Get global constraint force mixing parameter
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint15JointConstraint12getBodyNode1Ev_docstring[] = R"CHIMERA_STRING( Get the first BodyNode that this constraint is associated with
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint15JointConstraint12getBodyNode2Ev_docstring[] = R"CHIMERA_STRING( Get the second BodyNode that this constraint is associated with
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint15JointConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::JointConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("JointConstraint", _ZN4dart10constraint15JointConstraintE_docstring, boost::python::no_init)
.def("getBodyNode1", [](const dart::constraint::JointConstraint *self) -> dart::dynamics::BodyNode * { return self->getBodyNode1(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZNK4dart10constraint15JointConstraint12getBodyNode1Ev_docstring)
.def("getBodyNode2", [](const dart::constraint::JointConstraint *self) -> dart::dynamics::BodyNode * { return self->getBodyNode2(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZNK4dart10constraint15JointConstraint12getBodyNode2Ev_docstring)
.def("setErrorAllowance", [](double _allowance) -> void { return dart::constraint::JointConstraint::setErrorAllowance(_allowance); }, (::boost::python::arg("_allowance")))
.def("getErrorAllowance", []() -> double { return dart::constraint::JointConstraint::getErrorAllowance(); })
.def("setErrorReductionParameter", [](double _erp) -> void { return dart::constraint::JointConstraint::setErrorReductionParameter(_erp); }, (::boost::python::arg("_erp")))
.def("getErrorReductionParameter", []() -> double { return dart::constraint::JointConstraint::getErrorReductionParameter(); })
.def("setMaxErrorReductionVelocity", [](double _erv) -> void { return dart::constraint::JointConstraint::setMaxErrorReductionVelocity(_erv); }, (::boost::python::arg("_erv")))
.def("getMaxErrorReductionVelocity", []() -> double { return dart::constraint::JointConstraint::getMaxErrorReductionVelocity(); })
.def("setConstraintForceMixing", [](double _cfm) -> void { return dart::constraint::JointConstraint::setConstraintForceMixing(_cfm); }, (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", []() -> double { return dart::constraint::JointConstraint::getConstraintForceMixing(); })
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
