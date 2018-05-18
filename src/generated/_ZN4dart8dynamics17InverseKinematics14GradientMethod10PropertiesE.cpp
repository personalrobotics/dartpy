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

void _ZN4dart8dynamics17InverseKinematics14GradientMethod10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("GradientMethod"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::GradientMethod::Properties >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::GradientMethod::Properties * { return new dart::dynamics::InverseKinematics::GradientMethod::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](double clamp) -> dart::dynamics::InverseKinematics::GradientMethod::Properties * { return new dart::dynamics::InverseKinematics::GradientMethod::Properties(clamp); }, ::boost::python::default_call_policies(), (::boost::python::arg("clamp"))))
.def("__init__", ::boost::python::make_constructor([](double clamp, const Eigen::VectorXd & weights) -> dart::dynamics::InverseKinematics::GradientMethod::Properties * { return new dart::dynamics::InverseKinematics::GradientMethod::Properties(clamp, weights); }, ::boost::python::default_call_policies(), (::boost::python::arg("clamp"), ::boost::python::arg("weights"))))
.def_readwrite("mComponentWiseClamp", &dart::dynamics::InverseKinematics::GradientMethod::Properties::mComponentWiseClamp)
.def_readwrite("mComponentWeights", &dart::dynamics::InverseKinematics::GradientMethod::Properties::mComponentWeights)
;
}

/* footer */
