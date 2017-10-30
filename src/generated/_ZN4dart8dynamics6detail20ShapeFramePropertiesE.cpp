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

void _ZN4dart8dynamics6detail20ShapeFramePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::ShapeFrameProperties >("ShapeFrameProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::ShapeFrameProperties * { return new dart::dynamics::detail::ShapeFrameProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::ShapePtr & shape) -> dart::dynamics::detail::ShapeFrameProperties * { return new dart::dynamics::detail::ShapeFrameProperties(shape); }, ::boost::python::default_call_policies(), (::boost::python::arg("shape"))))
.def_readwrite("mShape", &dart::dynamics::detail::ShapeFrameProperties::mShape)
;
}

/* footer */
