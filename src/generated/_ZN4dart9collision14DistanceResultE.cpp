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

void _ZN4dart9collision14DistanceResultE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::DistanceResult, ::boost::noncopyable >("DistanceResult", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::collision::DistanceResult * { return new dart::collision::DistanceResult(); }, ::boost::python::default_call_policies()))
.def("clear", [](dart::collision::DistanceResult *self) -> void { return self->clear(); })
.def("found", [](const dart::collision::DistanceResult *self) -> bool { return self->found(); })
.def("isMinDistanceClamped", [](const dart::collision::DistanceResult *self) -> bool { return self->isMinDistanceClamped(); })
.def_readwrite("minDistance", &dart::collision::DistanceResult::minDistance)
.def_readwrite("unclampedMinDistance", &dart::collision::DistanceResult::unclampedMinDistance)
.def_readwrite("shapeFrame1", &dart::collision::DistanceResult::shapeFrame1)
.def_readwrite("shapeFrame2", &dart::collision::DistanceResult::shapeFrame2)
.def_readwrite("nearestPoint1", &dart::collision::DistanceResult::nearestPoint1)
.def_readwrite("nearestPoint2", &dart::collision::DistanceResult::nearestPoint2)
;
}

/* footer */
