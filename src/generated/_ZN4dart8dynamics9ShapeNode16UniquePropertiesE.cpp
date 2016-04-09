#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics9ShapeNode16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("ShapeNode"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeNode::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::ShapeNode::UniqueProperties * { return new dart::dynamics::ShapeNode::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Isometry3d & relativeTransform) -> dart::dynamics::ShapeNode::UniqueProperties * { return new dart::dynamics::ShapeNode::UniqueProperties(relativeTransform); }, ::boost::python::default_call_policies(), (::boost::python::arg("relativeTransform"))))
.def_readwrite("mRelativeTransform", &dart::dynamics::ShapeNode::UniqueProperties::mRelativeTransform)
;
}

/* footer */
