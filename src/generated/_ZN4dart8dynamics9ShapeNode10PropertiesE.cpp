#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics9ShapeNode10PropertiesE_docstring[] = R"CHIMERA_STRING( Composition of Entity and ShapeFrame properties
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics9ShapeNode10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("ShapeNode"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeNode::Properties, ::boost::python::bases<dart::dynamics::ShapeFrame::Properties, dart::dynamics::ShapeNode::UniqueProperties > >("Properties", _ZN4dart8dynamics9ShapeNode10PropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::ShapeNode::Properties * { return new dart::dynamics::ShapeNode::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::ShapeFrame::Properties & shapeFrameProperties) -> dart::dynamics::ShapeNode::Properties * { return new dart::dynamics::ShapeNode::Properties(shapeFrameProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("shapeFrameProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::ShapeFrame::Properties & shapeFrameProperties, const dart::dynamics::ShapeNode::UniqueProperties & shapeNodeProperties) -> dart::dynamics::ShapeNode::Properties * { return new dart::dynamics::ShapeNode::Properties(shapeFrameProperties, shapeNodeProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("shapeFrameProperties"), ::boost::python::arg("shapeNodeProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::ShapeFrame::Properties & shapeFrameProperties, const dart::dynamics::ShapeNode::UniqueProperties & shapeNodeProperties, const dart::dynamics::ShapeNode::AddonProperties & addonProperties) -> dart::dynamics::ShapeNode::Properties * { return new dart::dynamics::ShapeNode::Properties(shapeFrameProperties, shapeNodeProperties, addonProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("shapeFrameProperties"), ::boost::python::arg("shapeNodeProperties"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mAddonProperties", &dart::dynamics::ShapeNode::Properties::mAddonProperties)
;
}

/* footer */
