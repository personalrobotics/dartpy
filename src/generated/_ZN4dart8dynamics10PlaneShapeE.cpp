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

void _ZN4dart8dynamics10PlaneShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PlaneShape, std::shared_ptr<dart::dynamics::PlaneShape>, ::boost::python::bases<dart::dynamics::Shape > >("PlaneShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _normal, double _offset) -> dart::dynamics::PlaneShape * { return new dart::dynamics::PlaneShape(_normal, _offset); }, ::boost::python::default_call_policies(), (::boost::python::arg("_normal"), ::boost::python::arg("_offset"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _normal, const Eigen::Vector3d & _point) -> dart::dynamics::PlaneShape * { return new dart::dynamics::PlaneShape(_normal, _point); }, ::boost::python::default_call_policies(), (::boost::python::arg("_normal"), ::boost::python::arg("_point"))))
.def("getType", [](const dart::dynamics::PlaneShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("computeInertia", [](const dart::dynamics::PlaneShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("setNormal", [](dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _normal) -> void { return self->setNormal(_normal); }, (::boost::python::arg("_normal")))
.def("getNormal", [](const dart::dynamics::PlaneShape *self) -> const Eigen::Vector3d & { return self->getNormal(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setOffset", [](dart::dynamics::PlaneShape *self, double _offset) -> void { return self->setOffset(_offset); }, (::boost::python::arg("_offset")))
.def("getOffset", [](const dart::dynamics::PlaneShape *self) -> double { return self->getOffset(); })
.def("setNormalAndOffset", [](dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _normal, double _offset) -> void { return self->setNormalAndOffset(_normal, _offset); }, (::boost::python::arg("_normal"), ::boost::python::arg("_offset")))
.def("setNormalAndPoint", [](dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _normal, const Eigen::Vector3d & _point) -> void { return self->setNormalAndPoint(_normal, _point); }, (::boost::python::arg("_normal"), ::boost::python::arg("_point")))
.def("computeDistance", [](const dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _point) -> double { return self->computeDistance(_point); }, (::boost::python::arg("_point")))
.def("computeSignedDistance", [](const dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _point) -> double { return self->computeSignedDistance(_point); }, (::boost::python::arg("_point")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::PlaneShape::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
