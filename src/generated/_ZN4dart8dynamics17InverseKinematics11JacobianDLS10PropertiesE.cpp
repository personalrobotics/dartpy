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

void _ZN4dart8dynamics17InverseKinematics11JacobianDLS10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("JacobianDLS"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS::Properties, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod::Properties, dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::JacobianDLS::Properties * { return new dart::dynamics::InverseKinematics::JacobianDLS::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::GradientMethod::Properties & gradientProperties) -> dart::dynamics::InverseKinematics::JacobianDLS::Properties * { return new dart::dynamics::InverseKinematics::JacobianDLS::Properties(gradientProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("gradientProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::GradientMethod::Properties & gradientProperties, const dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties & dlsProperties) -> dart::dynamics::InverseKinematics::JacobianDLS::Properties * { return new dart::dynamics::InverseKinematics::JacobianDLS::Properties(gradientProperties, dlsProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("gradientProperties"), ::boost::python::arg("dlsProperties"))))
;
}

/* footer */
