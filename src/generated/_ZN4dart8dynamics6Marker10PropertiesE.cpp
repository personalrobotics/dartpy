#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6Marker10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Marker"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Marker::Properties >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Marker::Properties * { return new dart::dynamics::Marker::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & name) -> dart::dynamics::Marker::Properties * { return new dart::dynamics::Marker::Properties(name); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const Eigen::Vector3d & offset) -> dart::dynamics::Marker::Properties * { return new dart::dynamics::Marker::Properties(name, offset); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("offset"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const Eigen::Vector3d & offset, const Eigen::Vector4d & color) -> dart::dynamics::Marker::Properties * { return new dart::dynamics::Marker::Properties(name, offset, color); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("offset"), ::boost::python::arg("color"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const Eigen::Vector3d & offset, const Eigen::Vector4d & color, dart::dynamics::Marker::ConstraintType type) -> dart::dynamics::Marker::Properties * { return new dart::dynamics::Marker::Properties(name, offset, color, type); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("offset"), ::boost::python::arg("color"), ::boost::python::arg("type"))))
.def_readwrite("mName", &dart::dynamics::Marker::Properties::mName)
.def_readwrite("mOffset", &dart::dynamics::Marker::Properties::mOffset)
.def_readwrite("mColor", &dart::dynamics::Marker::Properties::mColor)
.def_readwrite("mType", &dart::dynamics::Marker::Properties::mType)
;
}

/* footer */
