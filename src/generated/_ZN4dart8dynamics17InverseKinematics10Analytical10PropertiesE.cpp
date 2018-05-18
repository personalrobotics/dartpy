#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::Properties, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod::Properties, dart::dynamics::InverseKinematics::Analytical::UniqueProperties > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::Analytical::Properties * { return new dart::dynamics::InverseKinematics::Analytical::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::GradientMethod::Properties & gradientProperties) -> dart::dynamics::InverseKinematics::Analytical::Properties * { return new dart::dynamics::InverseKinematics::Analytical::Properties(gradientProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("gradientProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::GradientMethod::Properties & gradientProperties, const dart::dynamics::InverseKinematics::Analytical::UniqueProperties & analyticalProperties) -> dart::dynamics::InverseKinematics::Analytical::Properties * { return new dart::dynamics::InverseKinematics::Analytical::Properties(gradientProperties, analyticalProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("gradientProperties"), ::boost::python::arg("analyticalProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::Analytical::UniqueProperties & analyticalProperties) -> dart::dynamics::InverseKinematics::Analytical::Properties * { return new dart::dynamics::InverseKinematics::Analytical::Properties(analyticalProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("analyticalProperties"))))
;
}

/* footer */
