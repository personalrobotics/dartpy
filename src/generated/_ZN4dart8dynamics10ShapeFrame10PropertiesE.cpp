#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10ShapeFrame10PropertiesE_docstring[] = R"CHIMERA_STRING( Composition of Entity and ShapeFrame properties
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10ShapeFrame10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("ShapeFrame"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeFrame::Properties, ::boost::python::bases<dart::dynamics::Entity::Properties, dart::dynamics::ShapeFrame::UniqueProperties > >("Properties", _ZN4dart8dynamics10ShapeFrame10PropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::ShapeFrame::Properties * { return new dart::dynamics::ShapeFrame::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & entityProperties) -> dart::dynamics::ShapeFrame::Properties * { return new dart::dynamics::ShapeFrame::Properties(entityProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("entityProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & entityProperties, const dart::dynamics::ShapeFrame::UniqueProperties & shapeFrameProperties) -> dart::dynamics::ShapeFrame::Properties * { return new dart::dynamics::ShapeFrame::Properties(entityProperties, shapeFrameProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("entityProperties"), ::boost::python::arg("shapeFrameProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & entityProperties, const dart::dynamics::ShapeFrame::UniqueProperties & shapeFrameProperties, const dart::dynamics::ShapeFrame::AddonProperties & addonProperties) -> dart::dynamics::ShapeFrame::Properties * { return new dart::dynamics::ShapeFrame::Properties(entityProperties, shapeFrameProperties, addonProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("entityProperties"), ::boost::python::arg("shapeFrameProperties"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mAddonProperties", &dart::dynamics::ShapeFrame::Properties::mAddonProperties)
;
}

/* footer */
