#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart8dynamics17InverseKinematics10Analytical16UniqueProperties30resetQualityComparisonFunctionEv_docstring[] = R"CHIMERA_STRING( Reset the quality comparison function to its default behavior.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::Analytical::UniqueProperties * { return new dart::dynamics::InverseKinematics::Analytical::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t extraDofUtilization) -> dart::dynamics::InverseKinematics::Analytical::UniqueProperties * { return new dart::dynamics::InverseKinematics::Analytical::UniqueProperties(extraDofUtilization); }, ::boost::python::default_call_policies(), (::boost::python::arg("extraDofUtilization"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t extraDofUtilization, double extraErrorLengthClamp) -> dart::dynamics::InverseKinematics::Analytical::UniqueProperties * { return new dart::dynamics::InverseKinematics::Analytical::UniqueProperties(extraDofUtilization, extraErrorLengthClamp); }, ::boost::python::default_call_policies(), (::boost::python::arg("extraDofUtilization"), ::boost::python::arg("extraErrorLengthClamp"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t extraDofUtilization, double extraErrorLengthClamp, dart::dynamics::InverseKinematics::Analytical::QualityComparison qualityComparator) -> dart::dynamics::InverseKinematics::Analytical::UniqueProperties * { return new dart::dynamics::InverseKinematics::Analytical::UniqueProperties(extraDofUtilization, extraErrorLengthClamp, qualityComparator); }, ::boost::python::default_call_policies(), (::boost::python::arg("extraDofUtilization"), ::boost::python::arg("extraErrorLengthClamp"), ::boost::python::arg("qualityComparator"))))
.def("resetQualityComparisonFunction", [](dart::dynamics::InverseKinematics::Analytical::UniqueProperties *self) -> void { return self->resetQualityComparisonFunction(); }, _ZN4dart8dynamics17InverseKinematics10Analytical16UniqueProperties30resetQualityComparisonFunctionEv_docstring)
.def_readwrite("mExtraDofUtilization", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mExtraDofUtilization)
.def_readwrite("mExtraErrorLengthClamp", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mExtraErrorLengthClamp)
.def_readwrite("mQualityComparator", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mQualityComparator)
;
}

/* footer */
