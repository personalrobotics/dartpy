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

void _ZN4dart8dynamics6detail16MarkerPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::MarkerProperties >("MarkerProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::MarkerProperties * { return new dart::dynamics::detail::MarkerProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector4d & color) -> dart::dynamics::detail::MarkerProperties * { return new dart::dynamics::detail::MarkerProperties(color); }, ::boost::python::default_call_policies(), (::boost::python::arg("color"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector4d & color, dart::dynamics::detail::MarkerProperties::ConstraintType type) -> dart::dynamics::detail::MarkerProperties * { return new dart::dynamics::detail::MarkerProperties(color, type); }, ::boost::python::default_call_policies(), (::boost::python::arg("color"), ::boost::python::arg("type"))))
.def_readwrite("mColor", &dart::dynamics::detail::MarkerProperties::mColor)
.def_readwrite("mType", &dart::dynamics::detail::MarkerProperties::mType)
;
}

/* footer */
