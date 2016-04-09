#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint17ContactConstraintE_docstring[] = R"CHIMERA_STRING( ContactConstraint represents a contact constraint between two bodies
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint17setErrorAllowanceEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint17getErrorAllowanceEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint26setErrorReductionParameterEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint26getErrorReductionParameterEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint28setMaxErrorReductionVelocityEd_docstring[] = R"CHIMERA_STRING( Set global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint28getMaxErrorReductionVelocityEv_docstring[] = R"CHIMERA_STRING( Get global error reduction parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint24setConstraintForceMixingEd_docstring[] = R"CHIMERA_STRING( Set global constraint force mixing parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint24getConstraintForceMixingEv_docstring[] = R"CHIMERA_STRING( Get global constraint force mixing parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17ContactConstraint20setFrictionDirectionERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set first frictional direction
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint17ContactConstraint21getFrictionDirection1Ev_docstring[] = R"CHIMERA_STRING( Get first frictional direction
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint17ContactConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ContactConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("ContactConstraint", _ZN4dart10constraint17ContactConstraintE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::collision::Contact & _contact, double _timeStep) -> dart::constraint::ContactConstraint * { return new dart::constraint::ContactConstraint(_contact, _timeStep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_contact"), ::boost::python::arg("_timeStep"))))
.def("setFrictionDirection", [](dart::constraint::ContactConstraint *self, const Eigen::Vector3d & _dir) -> void { return self->setFrictionDirection(_dir); }, _ZN4dart10constraint17ContactConstraint20setFrictionDirectionERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_dir")))
.def("getFrictionDirection1", [](const dart::constraint::ContactConstraint *self) -> const Eigen::Vector3d & { return self->getFrictionDirection1(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart10constraint17ContactConstraint21getFrictionDirection1Ev_docstring)
.def("setErrorAllowance", [](double _allowance) -> void { return dart::constraint::ContactConstraint::setErrorAllowance(_allowance); }, (::boost::python::arg("_allowance")))
.def("getErrorAllowance", []() -> double { return dart::constraint::ContactConstraint::getErrorAllowance(); })
.def("setErrorReductionParameter", [](double _erp) -> void { return dart::constraint::ContactConstraint::setErrorReductionParameter(_erp); }, (::boost::python::arg("_erp")))
.def("getErrorReductionParameter", []() -> double { return dart::constraint::ContactConstraint::getErrorReductionParameter(); })
.def("setMaxErrorReductionVelocity", [](double _erv) -> void { return dart::constraint::ContactConstraint::setMaxErrorReductionVelocity(_erv); }, (::boost::python::arg("_erv")))
.def("getMaxErrorReductionVelocity", []() -> double { return dart::constraint::ContactConstraint::getMaxErrorReductionVelocity(); })
.def("setConstraintForceMixing", [](double _cfm) -> void { return dart::constraint::ContactConstraint::setConstraintForceMixing(_cfm); }, (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", []() -> double { return dart::constraint::ContactConstraint::getConstraintForceMixing(); })
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
