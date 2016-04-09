#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail21VisualAddonPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::VisualAddonProperties >("VisualAddonProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::VisualAddonProperties * { return new dart::dynamics::detail::VisualAddonProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector4d & color) -> dart::dynamics::detail::VisualAddonProperties * { return new dart::dynamics::detail::VisualAddonProperties(color); }, ::boost::python::default_call_policies(), (::boost::python::arg("color"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector4d & color, const bool hidden) -> dart::dynamics::detail::VisualAddonProperties * { return new dart::dynamics::detail::VisualAddonProperties(color, hidden); }, ::boost::python::default_call_policies(), (::boost::python::arg("color"), ::boost::python::arg("hidden"))))
.def_readwrite("mRGBA", &dart::dynamics::detail::VisualAddonProperties::mRGBA)
.def_readwrite("mUseDefaultColor", &dart::dynamics::detail::VisualAddonProperties::mUseDefaultColor)
.def_readwrite("mHidden", &dart::dynamics::detail::VisualAddonProperties::mHidden)
;
}

/* footer */
