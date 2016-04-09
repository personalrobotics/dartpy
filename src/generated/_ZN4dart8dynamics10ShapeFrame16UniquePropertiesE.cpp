#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics10ShapeFrame16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("ShapeFrame"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeFrame::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::ShapeFrame::UniqueProperties * { return new dart::dynamics::ShapeFrame::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::ShapePtr & shape) -> dart::dynamics::ShapeFrame::UniqueProperties * { return new dart::dynamics::ShapeFrame::UniqueProperties(shape); }, ::boost::python::default_call_policies(), (::boost::python::arg("shape"))))
.def_readwrite("mShape", &dart::dynamics::ShapeFrame::UniqueProperties::mShape)
.def_readwrite("mVersion", &dart::dynamics::ShapeFrame::UniqueProperties::mVersion)
;
}

/* footer */
