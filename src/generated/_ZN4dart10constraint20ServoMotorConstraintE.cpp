#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint20ServoMotorConstraintE_docstring[] = R"CHIMERA_STRING( Servo motor constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20ServoMotorConstraint24setConstraintForceMixingEd_docstring[] = R"CHIMERA_STRING( Set global constraint force mixing parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint20ServoMotorConstraint24getConstraintForceMixingEv_docstring[] = R"CHIMERA_STRING( Get global constraint force mixing parameter
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint20ServoMotorConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ServoMotorConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("ServoMotorConstraint", _ZN4dart10constraint20ServoMotorConstraintE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Joint * joint) -> dart::constraint::ServoMotorConstraint * { return new dart::constraint::ServoMotorConstraint(joint); }, ::boost::python::default_call_policies(), (::boost::python::arg("joint"))))
.def("setConstraintForceMixing", [](double cfm) -> void { return dart::constraint::ServoMotorConstraint::setConstraintForceMixing(cfm); }, (::boost::python::arg("cfm")))
.def("getConstraintForceMixing", []() -> double { return dart::constraint::ServoMotorConstraint::getConstraintForceMixing(); })
.staticmethod("getConstraintForceMixing")
.staticmethod("setConstraintForceMixing")
;
}

/* footer */
