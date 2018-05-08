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

void _ZN4dart8dynamics6detail22VisualAspectPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::VisualAspectProperties >("VisualAspectProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::VisualAspectProperties * { return new dart::dynamics::detail::VisualAspectProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector4d & color) -> dart::dynamics::detail::VisualAspectProperties * { return new dart::dynamics::detail::VisualAspectProperties(color); }, ::boost::python::default_call_policies(), (::boost::python::arg("color"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector4d & color, const bool hidden) -> dart::dynamics::detail::VisualAspectProperties * { return new dart::dynamics::detail::VisualAspectProperties(color, hidden); }, ::boost::python::default_call_policies(), (::boost::python::arg("color"), ::boost::python::arg("hidden"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector4d & color, const bool hidden, const bool shadowed) -> dart::dynamics::detail::VisualAspectProperties * { return new dart::dynamics::detail::VisualAspectProperties(color, hidden, shadowed); }, ::boost::python::default_call_policies(), (::boost::python::arg("color"), ::boost::python::arg("hidden"), ::boost::python::arg("shadowed"))))
.def_readwrite("mRGBA", &dart::dynamics::detail::VisualAspectProperties::mRGBA)
.def_readwrite("mUseDefaultColor", &dart::dynamics::detail::VisualAspectProperties::mUseDefaultColor)
.def_readwrite("mHidden", &dart::dynamics::detail::VisualAspectProperties::mHidden)
.def_readwrite("mShadowed", &dart::dynamics::detail::VisualAspectProperties::mShadowed)
;
}

/* footer */
