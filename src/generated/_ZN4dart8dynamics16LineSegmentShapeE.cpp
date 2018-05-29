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

void _ZN4dart8dynamics16LineSegmentShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::LineSegmentShape, std::shared_ptr<dart::dynamics::LineSegmentShape>, ::boost::python::bases<dart::dynamics::Shape > >("LineSegmentShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](float _thickness) -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(_thickness); }, ::boost::python::default_call_policies(), (::boost::python::arg("_thickness"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _v1, const Eigen::Vector3d & _v2) -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(_v1, _v2); }, ::boost::python::default_call_policies(), (::boost::python::arg("_v1"), ::boost::python::arg("_v2"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _v1, const Eigen::Vector3d & _v2, float _thickness) -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(_v1, _v2, _thickness); }, ::boost::python::default_call_policies(), (::boost::python::arg("_v1"), ::boost::python::arg("_v2"), ::boost::python::arg("_thickness"))))
.def("getType", [](const dart::dynamics::LineSegmentShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setThickness", [](dart::dynamics::LineSegmentShape *self, float _thickness) -> void { return self->setThickness(_thickness); }, (::boost::python::arg("_thickness")))
.def("getThickness", [](const dart::dynamics::LineSegmentShape *self) -> float { return self->getThickness(); })
.def("addVertex", [](dart::dynamics::LineSegmentShape *self, const Eigen::Vector3d & _v) -> std::size_t { return self->addVertex(_v); }, (::boost::python::arg("_v")))
.def("addVertex", [](dart::dynamics::LineSegmentShape *self, const Eigen::Vector3d & _v, std::size_t _parent) -> std::size_t { return self->addVertex(_v, _parent); }, (::boost::python::arg("_v"), ::boost::python::arg("_parent")))
.def("removeVertex", [](dart::dynamics::LineSegmentShape *self, std::size_t _idx) -> void { return self->removeVertex(_idx); }, (::boost::python::arg("_idx")))
.def("setVertex", [](dart::dynamics::LineSegmentShape *self, std::size_t _idx, const Eigen::Vector3d & _v) -> void { return self->setVertex(_idx, _v); }, (::boost::python::arg("_idx"), ::boost::python::arg("_v")))
.def("getVertex", [](const dart::dynamics::LineSegmentShape *self, std::size_t _idx) -> const Eigen::Vector3d & { return self->getVertex(_idx); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("_idx")))
.def("getVertices", [](const dart::dynamics::LineSegmentShape *self) -> const std::vector<Eigen::Vector3d> & { return self->getVertices(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("addConnection", [](dart::dynamics::LineSegmentShape *self, std::size_t _idx1, std::size_t _idx2) -> void { return self->addConnection(_idx1, _idx2); }, (::boost::python::arg("_idx1"), ::boost::python::arg("_idx2")))
.def("removeConnection", [](dart::dynamics::LineSegmentShape *self, std::size_t _vertexIdx1, std::size_t _vertexIdx2) -> void { return self->removeConnection(_vertexIdx1, _vertexIdx2); }, (::boost::python::arg("_vertexIdx1"), ::boost::python::arg("_vertexIdx2")))
.def("removeConnection", [](dart::dynamics::LineSegmentShape *self, std::size_t _connectionIdx) -> void { return self->removeConnection(_connectionIdx); }, (::boost::python::arg("_connectionIdx")))
.def("getConnections", [](const dart::dynamics::LineSegmentShape *self) -> const dart::common::aligned_vector<Eigen::Vector2i> & { return self->getConnections(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("computeInertia", [](const dart::dynamics::LineSegmentShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::LineSegmentShape::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
