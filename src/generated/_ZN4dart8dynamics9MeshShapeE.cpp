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
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & scale, const aiScene * mesh) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(scale, mesh); }, ::boost::python::default_call_policies(), (::boost::python::arg("scale"), ::boost::python::arg("mesh"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & scale, const aiScene * mesh, const dart::common::Uri & uri) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(scale, mesh, uri); }, ::boost::python::default_call_policies(), (::boost::python::arg("scale"), ::boost::python::arg("mesh"), ::boost::python::arg("uri"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & scale, const aiScene * mesh, const dart::common::Uri & uri, dart::common::ResourceRetrieverPtr resourceRetriever) -> dart::dynamics::MeshShape * { return new dart::dynamics::MeshShape(scale, mesh, uri, resourceRetriever); }, ::boost::python::default_call_policies(), (::boost::python::arg("scale"), ::boost::python::arg("mesh"), ::boost::python::arg("uri"), ::boost::python::arg("resourceRetriever"))))
.def("getType", [](const dart::dynamics::MeshShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("update", [](dart::dynamics::MeshShape *self) -> void { return self->update(); })
.def("notifyAlphaUpdated", [](dart::dynamics::MeshShape *self, double alpha) -> void { return self->notifyAlphaUpdated(alpha); }, (::boost::python::arg("alpha")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * mesh) -> void { return self->setMesh(mesh); }, (::boost::python::arg("mesh")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * mesh, const std::string & path) -> void { return self->setMesh(mesh, path); }, (::boost::python::arg("mesh"), ::boost::python::arg("path")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * mesh, const std::string & path, dart::common::ResourceRetrieverPtr resourceRetriever) -> void { return self->setMesh(mesh, path, resourceRetriever); }, (::boost::python::arg("mesh"), ::boost::python::arg("path"), ::boost::python::arg("resourceRetriever")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * mesh, const dart::common::Uri & path) -> void { return self->setMesh(mesh, path); }, (::boost::python::arg("mesh"), ::boost::python::arg("path")))
.def("setMesh", [](dart::dynamics::MeshShape *self, const aiScene * mesh, const dart::common::Uri & path, dart::common::ResourceRetrieverPtr resourceRetriever) -> void { return self->setMesh(mesh, path, resourceRetriever); }, (::boost::python::arg("mesh"), ::boost::python::arg("path"), ::boost::python::arg("resourceRetriever")))
.def("getMeshUri", [](const dart::dynamics::MeshShape *self) -> std::string { return self->getMeshUri(); })
.def("getMeshPath", [](const dart::dynamics::MeshShape *self) -> const std::string & { return self->getMeshPath(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getResourceRetriever", [](dart::dynamics::MeshShape *self) -> dart::common::ResourceRetrieverPtr { return self->getResourceRetriever(); })
.def("setScale", [](dart::dynamics::MeshShape *self, const Eigen::Vector3d & scale) -> void { return self->setScale(scale); }, (::boost::python::arg("scale")))
.def("getScale", [](const dart::dynamics::MeshShape *self) -> const Eigen::Vector3d & { return self->getScale(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setColorMode", [](dart::dynamics::MeshShape *self, dart::dynamics::MeshShape::ColorMode mode) -> void { return self->setColorMode(mode); }, (::boost::python::arg("mode")))
.def("getColorMode", [](const dart::dynamics::MeshShape *self) -> dart::dynamics::MeshShape::ColorMode { return self->getColorMode(); })
.def("setColorIndex", [](dart::dynamics::MeshShape *self, int index) -> void { return self->setColorIndex(index); }, (::boost::python::arg("index")))
.def("getColorIndex", [](const dart::dynamics::MeshShape *self) -> int { return self->getColorIndex(); })
.def("getDisplayList", [](const dart::dynamics::MeshShape *self) -> int { return self->getDisplayList(); })
.def("setDisplayList", [](dart::dynamics::MeshShape *self, int index) -> void { return self->setDisplayList(index); }, (::boost::python::arg("index")))
.def("computeInertia", [](const dart::dynamics::MeshShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::MeshShape::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
