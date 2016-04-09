#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint30JointCoulombFrictionConstraintE_docstring[] = R"CHIMERA_STRING( Joint Coulomb friction constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint30JointCoulombFrictionConstraint24setConstraintForceMixingEd_docstring[] = R"CHIMERA_STRING( Set global constraint force mixing parameter
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint30JointCoulombFrictionConstraint24getConstraintForceMixingEv_docstring[] = R"CHIMERA_STRING( Get global constraint force mixing parameter
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint30JointCoulombFrictionConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::JointCoulombFrictionConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("JointCoulombFrictionConstraint", _ZN4dart10constraint30JointCoulombFrictionConstraintE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Joint * _joint) -> dart::constraint::JointCoulombFrictionConstraint * { return new dart::constraint::JointCoulombFrictionConstraint(_joint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_joint"))))
.def("setConstraintForceMixing", [](double _cfm) -> void { return dart::constraint::JointCoulombFrictionConstraint::setConstraintForceMixing(_cfm); }, (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", []() -> double { return dart::constraint::JointCoulombFrictionConstraint::getConstraintForceMixing(); })
.staticmethod("getConstraintForceMixing")
.staticmethod("setConstraintForceMixing")
;
}

/* footer */
