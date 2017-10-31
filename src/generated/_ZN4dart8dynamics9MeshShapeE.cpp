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

void _ZN4dart8dynamics9MeshShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::MeshShape, std::shared_ptr<dart::dynamics::MeshShape>, ::boost::python::bases<dart::dynamics::Shape > >("MeshShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _scale, const aiScene * _mesh) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(_scale, _mesh); }, ::boost::python::default_call_policies(), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _scale, const aiScene * _mesh, const std::string & _path) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(_scale, _mesh, _path); }, ::boost::python::default_call_policies(), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh"), ::boost::python::arg("_path"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _scale, const aiScene * _mesh, const std::string & _path, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(_scale, _mesh, _path, _resourceRetriever); }, ::boost::python::default_call_policies(), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh"), ::boost::python::arg("_path"), ::boost::python::arg("_resourceRetriever"))))
.def("getType", [](const dart::dynamics::MeshShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("update", [](dart::dynamics::MeshShape *self) -> void { return self->update(); })
.def("notifyAlphaUpdated", [](dart::dynamics::MeshShape *self, double alpha) -> void { return self->notifyAlphaUpdated(alpha); }, (::boost::python::arg("alpha")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * _mesh) -> void { return self->setMesh(_mesh); }, (::boost::python::arg("_mesh")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * _mesh, const std::string & path) -> void { return self->setMesh(_mesh, path); }, (::boost::python::arg("_mesh"), ::boost::python::arg("path")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * _mesh, const std::string & path, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> void { return self->setMesh(_mesh, path, _resourceRetriever); }, (::boost::python::arg("_mesh"), ::boost::python::arg("path"), ::boost::python::arg("_resourceRetriever")))
.def("getMeshUri", [](const dart::dynamics::MeshShape *self) -> const std::string & { return self->getMeshUri(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getMeshPath", [](const dart::dynamics::MeshShape *self) -> const std::string & { return self->getMeshPath(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setScale", [](dart::dynamics::MeshShape *self, const Eigen::Vector3d & _scale) -> void { return self->setScale(_scale); }, (::boost::python::arg("_scale")))
.def("getScale", [](const dart::dynamics::MeshShape *self) -> const Eigen::Vector3d & { return self->getScale(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setColorMode", [](dart::dynamics::MeshShape *self, dart::dynamics::MeshShape::ColorMode _mode) -> void { return self->setColorMode(_mode); }, (::boost::python::arg("_mode")))
.def("getColorMode", [](const dart::dynamics::MeshShape *self) -> dart::dynamics::MeshShape::ColorMode { return self->getColorMode(); })
.def("setColorIndex", [](dart::dynamics::MeshShape *self, int _index) -> void { return self->setColorIndex(_index); }, (::boost::python::arg("_index")))
.def("getColorIndex", [](const dart::dynamics::MeshShape *self) -> int { return self->getColorIndex(); })
.def("getDisplayList", [](const dart::dynamics::MeshShape *self) -> int { return self->getDisplayList(); })
.def("setDisplayList", [](dart::dynamics::MeshShape *self, int _index) -> void { return self->setDisplayList(_index); }, (::boost::python::arg("_index")))
.def("computeInertia", [](const dart::dynamics::MeshShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::MeshShape::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
