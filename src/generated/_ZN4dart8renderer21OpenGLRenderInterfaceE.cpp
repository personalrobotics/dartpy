#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8renderer21OpenGLRenderInterfaceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("renderer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::renderer::OpenGLRenderInterface, ::boost::noncopyable, ::boost::python::bases<dart::renderer::RenderInterface > >("OpenGLRenderInterface", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::renderer::OpenGLRenderInterface * { return new dart::renderer::OpenGLRenderInterface(); }, ::boost::python::default_call_policies()))
.def("initialize", [](dart::renderer::OpenGLRenderInterface *self) -> void { return self->initialize(); })
.def("destroy", [](dart::renderer::OpenGLRenderInterface *self) -> void { return self->destroy(); })
.def("setViewport", [](dart::renderer::OpenGLRenderInterface *self, int _x, int _y, int _width, int _height) -> void { return self->setViewport(_x, _y, _width, _height); }, (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("getViewport", [](const dart::renderer::OpenGLRenderInterface *self, int & _x, int & _y, int & _width, int & _height) -> void { return self->getViewport(_x, _y, _width, _height); }, (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("clear", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _color) -> void { return self->clear(_color); }, (::boost::python::arg("_color")))
.def("setMaterial", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _diffuse, const Eigen::Vector3d & _specular, double _cosinePow) -> void { return self->setMaterial(_diffuse, _specular, _cosinePow); }, (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("getMaterial", [](const dart::renderer::OpenGLRenderInterface *self, Eigen::Vector3d & _diffuse, Eigen::Vector3d & _specular, double & _cosinePow) -> void { return self->getMaterial(_diffuse, _specular, _cosinePow); }, (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("setDefaultMaterial", [](dart::renderer::OpenGLRenderInterface *self) -> void { return self->setDefaultMaterial(); })
.def("pushMatrix", [](dart::renderer::OpenGLRenderInterface *self) -> void { return self->pushMatrix(); })
.def("popMatrix", [](dart::renderer::OpenGLRenderInterface *self) -> void { return self->popMatrix(); })
.def("pushName", [](dart::renderer::OpenGLRenderInterface *self, int _id) -> void { return self->pushName(_id); }, (::boost::python::arg("_id")))
.def("popName", [](dart::renderer::OpenGLRenderInterface *self) -> void { return self->popName(); })
.def("translate", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _offset) -> void { return self->translate(_offset); }, (::boost::python::arg("_offset")))
.def("rotate", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _axis, double _rad) -> void { return self->rotate(_axis, _rad); }, (::boost::python::arg("_axis"), ::boost::python::arg("_rad")))
.def("transform", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Isometry3d & _transform) -> void { return self->transform(_transform); }, (::boost::python::arg("_transform")))
.def("scale", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _scale) -> void { return self->scale(_scale); }, (::boost::python::arg("_scale")))
.def("compileList", [](dart::renderer::OpenGLRenderInterface *self, dart::dynamics::Skeleton * _skel) -> void { return self->compileList(_skel); }, (::boost::python::arg("_skel")))
.def("compileList", [](dart::renderer::OpenGLRenderInterface *self, dart::dynamics::BodyNode * _node) -> void { return self->compileList(_node); }, (::boost::python::arg("_node")))
.def("compileList", [](dart::renderer::OpenGLRenderInterface *self, dart::dynamics::Shape * _shape) -> void { return self->compileList(_shape); }, (::boost::python::arg("_shape")))
.def("compileList", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _scale, const aiScene * _mesh) -> GLuint { return self->compileList(_scale, _mesh); }, (::boost::python::arg("_scale"), ::boost::python::arg("_mesh")))
.def("drawEllipsoid", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _size) -> void { return self->drawEllipsoid(_size); }, (::boost::python::arg("_size")))
.def("drawCube", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _size) -> void { return self->drawCube(_size); }, (::boost::python::arg("_size")))
.def("drawCylinder", [](dart::renderer::OpenGLRenderInterface *self, double _radius, double _height) -> void { return self->drawCylinder(_radius, _height); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height")))
.def("drawMesh", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _scale, const aiScene * _mesh) -> void { return self->drawMesh(_scale, _mesh); }, (::boost::python::arg("_scale"), ::boost::python::arg("_mesh")))
.def("drawSoftMesh", [](dart::renderer::OpenGLRenderInterface *self, const aiMesh * mesh) -> void { return self->drawSoftMesh(mesh); }, (::boost::python::arg("mesh")))
.def("drawList", [](dart::renderer::OpenGLRenderInterface *self, GLuint index) -> void { return self->drawList(index); }, (::boost::python::arg("index")))
.def("drawLineSegments", [](dart::renderer::OpenGLRenderInterface *self, const std::vector<Eigen::Vector3d> & _vertices, const Eigen::aligned_vector<Eigen::Vector2i> & _connections) -> void { return self->drawLineSegments(_vertices, _connections); }, (::boost::python::arg("_vertices"), ::boost::python::arg("_connections")))
.def("setPenColor", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector4d & _col) -> void { return self->setPenColor(_col); }, (::boost::python::arg("_col")))
.def("setPenColor", [](dart::renderer::OpenGLRenderInterface *self, const Eigen::Vector3d & _col) -> void { return self->setPenColor(_col); }, (::boost::python::arg("_col")))
.def("setLineWidth", [](dart::renderer::OpenGLRenderInterface *self, float _width) -> void { return self->setLineWidth(_width); }, (::boost::python::arg("_width")))
.def("saveToImage", [](dart::renderer::OpenGLRenderInterface *self, const char * _filename) -> void { return self->saveToImage(_filename); }, (::boost::python::arg("_filename")))
.def("saveToImage", [](dart::renderer::OpenGLRenderInterface *self, const char * _filename, dart::renderer::DecoBufferType _buffType) -> void { return self->saveToImage(_filename, _buffType); }, (::boost::python::arg("_filename"), ::boost::python::arg("_buffType")))
;
}

/* footer */
