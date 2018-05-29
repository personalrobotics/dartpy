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

void _ZN4dart4math11BoundingBoxE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::math::BoundingBox >("BoundingBox", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::math::BoundingBox * { return new dart::math::BoundingBox(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & min, const Eigen::Vector3d & max) -> dart::math::BoundingBox * { return new dart::math::BoundingBox(min, max); }, ::boost::python::default_call_policies(), (::boost::python::arg("min"), ::boost::python::arg("max"))))
.def("getMin", [](const dart::math::BoundingBox *self) -> const Eigen::Vector3d & { return self->getMin(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getMax", [](const dart::math::BoundingBox *self) -> const Eigen::Vector3d & { return self->getMax(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setMin", [](dart::math::BoundingBox *self, const Eigen::Vector3d & min) -> void { return self->setMin(min); }, (::boost::python::arg("min")))
.def("setMax", [](dart::math::BoundingBox *self, const Eigen::Vector3d & max) -> void { return self->setMax(max); }, (::boost::python::arg("max")))
.def("computeCenter", [](const dart::math::BoundingBox *self) -> Eigen::Vector3d { return self->computeCenter(); })
.def("computeHalfExtents", [](const dart::math::BoundingBox *self) -> Eigen::Vector3d { return self->computeHalfExtents(); })
.def("computeFullExtents", [](const dart::math::BoundingBox *self) -> Eigen::Vector3d { return self->computeFullExtents(); })
;
}

/* footer */
