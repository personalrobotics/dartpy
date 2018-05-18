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

void _ZN4dart3gui21OpenGLRenderInterfaceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::OpenGLRenderInterface, ::boost::noncopyable, ::boost::python::bases<dart::gui::RenderInterface > >("OpenGLRenderInterface", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::OpenGLRenderInterface * { return new dart::gui::OpenGLRenderInterface(); }, ::boost::python::default_call_policies()))
.def("initialize", [](dart::gui::OpenGLRenderInterface *self) -> void { return self->initialize(); })
.def("destroy", [](dart::gui::OpenGLRenderInterface *self) -> void { return self->destroy(); })
.def("setViewport", [](dart::gui::OpenGLRenderInterface *self, int _x, int _y, int _width, int _height) -> void { return self->setViewport(_x, _y, _width, _height); }, (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("getViewport", [](const dart::gui::OpenGLRenderInterface *self, int & _x, int & _y, int & _width, int & _height) -> void { return self->getViewport(_x, _y, _width, _height); }, (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("clear", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _color) -> void { return self->clear(_color); }, (::boost::python::arg("_color")))
.def("setMaterial", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _diffuse, const Eigen::Vector3d & _specular, double _cosinePow) -> void { return self->setMaterial(_diffuse, _specular, _cosinePow); }, (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("getMaterial", [](const dart::gui::OpenGLRenderInterface *self, Eigen::Vector3d & _diffuse, Eigen::Vector3d & _specular, double & _cosinePow) -> void { return self->getMaterial(_diffuse, _specular, _cosinePow); }, (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("setDefaultMaterial", [](dart::gui::OpenGLRenderInterface *self) -> void { return self->setDefaultMaterial(); })
.def("pushMatrix", [](dart::gui::OpenGLRenderInterface *self) -> void { return self->pushMatrix(); })
.def("popMatrix", [](dart::gui::OpenGLRenderInterface *self) -> void { return self->popMatrix(); })
.def("pushName", [](dart::gui::OpenGLRenderInterface *self, int _id) -> void { return self->pushName(_id); }, (::boost::python::arg("_id")))
.def("popName", [](dart::gui::OpenGLRenderInterface *self) -> void { return self->popName(); })
.def("translate", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _offset) -> void { return self->translate(_offset); }, (::boost::python::arg("_offset")))
.def("rotate", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _axis, double _rad) -> void { return self->rotate(_axis, _rad); }, (::boost::python::arg("_axis"), ::boost::python::arg("_rad")))
.def("transform", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Isometry3d & _transform) -> void { return self->transform(_transform); }, (::boost::python::arg("_transform")))
.def("scale", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _scale) -> void { return self->scale(_scale); }, (::boost::python::arg("_scale")))
.def("compileList", [](dart::gui::OpenGLRenderInterface *self, dart::dynamics::Skeleton * _skel) -> void { return self->compileList(_skel); }, (::boost::python::arg("_skel")))
.def("compileList", [](dart::gui::OpenGLRenderInterface *self, dart::dynamics::BodyNode * _node) -> void { return self->compileList(_node); }, (::boost::python::arg("_node")))
.def("compileList", [](dart::gui::OpenGLRenderInterface *self, dart::dynamics::Shape * _shape) -> void { return self->compileList(_shape); }, (::boost::python::arg("_shape")))
.def("compileList", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _scale, const aiScene * _mesh) -> GLuint { return self->compileList(_scale, _mesh); }, (::boost::python::arg("_scale"), ::boost::python::arg("_mesh")))
.def("drawSphere", [](dart::gui::OpenGLRenderInterface *self, double radius) -> void { return self->drawSphere(radius); }, (::boost::python::arg("radius")))
.def("drawSphere", [](dart::gui::OpenGLRenderInterface *self, double radius, int slices) -> void { return self->drawSphere(radius, slices); }, (::boost::python::arg("radius"), ::boost::python::arg("slices")))
.def("drawSphere", [](dart::gui::OpenGLRenderInterface *self, double radius, int slices, int stacks) -> void { return self->drawSphere(radius, slices, stacks); }, (::boost::python::arg("radius"), ::boost::python::arg("slices"), ::boost::python::arg("stacks")))
.def("drawMultiSphere", [](dart::gui::OpenGLRenderInterface *self, const std::vector<std::pair<double, Eigen::Vector3d> > & spheres) -> void { return self->drawMultiSphere(spheres); }, (::boost::python::arg("spheres")))
.def("drawMultiSphere", [](dart::gui::OpenGLRenderInterface *self, const std::vector<std::pair<double, Eigen::Vector3d> > & spheres, int slices) -> void { return self->drawMultiSphere(spheres, slices); }, (::boost::python::arg("spheres"), ::boost::python::arg("slices")))
.def("drawMultiSphere", [](dart::gui::OpenGLRenderInterface *self, const std::vector<std::pair<double, Eigen::Vector3d> > & spheres, int slices, int stacks) -> void { return self->drawMultiSphere(spheres, slices, stacks); }, (::boost::python::arg("spheres"), ::boost::python::arg("slices"), ::boost::python::arg("stacks")))
.def("drawEllipsoid", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _diameters) -> void { return self->drawEllipsoid(_diameters); }, (::boost::python::arg("_diameters")))
.def("drawCube", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _size) -> void { return self->drawCube(_size); }, (::boost::python::arg("_size")))
.def("drawOpenCylinder", [](dart::gui::OpenGLRenderInterface *self, double baseRadius, double topRadius, double height) -> void { return self->drawOpenCylinder(baseRadius, topRadius, height); }, (::boost::python::arg("baseRadius"), ::boost::python::arg("topRadius"), ::boost::python::arg("height")))
.def("drawOpenCylinder", [](dart::gui::OpenGLRenderInterface *self, double baseRadius, double topRadius, double height, int slices) -> void { return self->drawOpenCylinder(baseRadius, topRadius, height, slices); }, (::boost::python::arg("baseRadius"), ::boost::python::arg("topRadius"), ::boost::python::arg("height"), ::boost::python::arg("slices")))
.def("drawOpenCylinder", [](dart::gui::OpenGLRenderInterface *self, double baseRadius, double topRadius, double height, int slices, int stacks) -> void { return self->drawOpenCylinder(baseRadius, topRadius, height, slices, stacks); }, (::boost::python::arg("baseRadius"), ::boost::python::arg("topRadius"), ::boost::python::arg("height"), ::boost::python::arg("slices"), ::boost::python::arg("stacks")))
.def("drawCylinder", [](dart::gui::OpenGLRenderInterface *self, double _radius, double _height) -> void { return self->drawCylinder(_radius, _height); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height")))
.def("drawCylinder", [](dart::gui::OpenGLRenderInterface *self, double _radius, double _height, int slices) -> void { return self->drawCylinder(_radius, _height, slices); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("slices")))
.def("drawCylinder", [](dart::gui::OpenGLRenderInterface *self, double _radius, double _height, int slices, int stacks) -> void { return self->drawCylinder(_radius, _height, slices, stacks); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("slices"), ::boost::python::arg("stacks")))
.def("drawCapsule", [](dart::gui::OpenGLRenderInterface *self, double radius, double height) -> void { return self->drawCapsule(radius, height); }, (::boost::python::arg("radius"), ::boost::python::arg("height")))
.def("drawCone", [](dart::gui::OpenGLRenderInterface *self, double radius, double height) -> void { return self->drawCone(radius, height); }, (::boost::python::arg("radius"), ::boost::python::arg("height")))
.def("drawMesh", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _scale, const aiScene * _mesh) -> void { return self->drawMesh(_scale, _mesh); }, (::boost::python::arg("_scale"), ::boost::python::arg("_mesh")))
.def("drawSoftMesh", [](dart::gui::OpenGLRenderInterface *self, const aiMesh * mesh) -> void { return self->drawSoftMesh(mesh); }, (::boost::python::arg("mesh")))
.def("drawList", [](dart::gui::OpenGLRenderInterface *self, GLuint index) -> void { return self->drawList(index); }, (::boost::python::arg("index")))
.def("drawLineSegments", [](dart::gui::OpenGLRenderInterface *self, const std::vector<Eigen::Vector3d> & _vertices, const dart::common::aligned_vector<Eigen::Vector2i> & _connections) -> void { return self->drawLineSegments(_vertices, _connections); }, (::boost::python::arg("_vertices"), ::boost::python::arg("_connections")))
.def("setPenColor", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector4d & _col) -> void { return self->setPenColor(_col); }, (::boost::python::arg("_col")))
.def("setPenColor", [](dart::gui::OpenGLRenderInterface *self, const Eigen::Vector3d & _col) -> void { return self->setPenColor(_col); }, (::boost::python::arg("_col")))
.def("setLineWidth", [](dart::gui::OpenGLRenderInterface *self, float _width) -> void { return self->setLineWidth(_width); }, (::boost::python::arg("_width")))
.def("saveToImage", [](dart::gui::OpenGLRenderInterface *self, const char * _filename) -> void { return self->saveToImage(_filename); }, (::boost::python::arg("_filename")))
.def("saveToImage", [](dart::gui::OpenGLRenderInterface *self, const char * _filename, dart::gui::DecoBufferType _buffType) -> void { return self->saveToImage(_filename, _buffType); }, (::boost::python::arg("_filename"), ::boost::python::arg("_buffType")))
;
}

/* footer */
