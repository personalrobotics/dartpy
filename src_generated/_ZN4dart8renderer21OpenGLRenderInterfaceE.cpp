#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8renderer21OpenGLRenderInterfaceE()
{
::boost::python::class_<dart::renderer::OpenGLRenderInterface, ::boost::noncopyable, ::boost::python::bases<dart::renderer::RenderInterface > >("OpenGLRenderInterface", boost::python::no_init)
.def(::boost::python::init<>())
.def("initialize", static_cast<void (dart::renderer::OpenGLRenderInterface::*)()>(&dart::renderer::OpenGLRenderInterface::initialize))
.def("destroy", static_cast<void (dart::renderer::OpenGLRenderInterface::*)()>(&dart::renderer::OpenGLRenderInterface::destroy))
.def("setViewport", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(int, int, int, int)>(&dart::renderer::OpenGLRenderInterface::setViewport), (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("getViewport", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(int &, int &, int &, int &) const>(&dart::renderer::OpenGLRenderInterface::getViewport), (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("clear", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::OpenGLRenderInterface::clear), (::boost::python::arg("_color")))
.def("setMaterial", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, double)>(&dart::renderer::OpenGLRenderInterface::setMaterial), (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("getMaterial", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(Eigen::Vector3d &, Eigen::Vector3d &, double &) const>(&dart::renderer::OpenGLRenderInterface::getMaterial), (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("setDefaultMaterial", static_cast<void (dart::renderer::OpenGLRenderInterface::*)()>(&dart::renderer::OpenGLRenderInterface::setDefaultMaterial))
.def("pushMatrix", static_cast<void (dart::renderer::OpenGLRenderInterface::*)()>(&dart::renderer::OpenGLRenderInterface::pushMatrix))
.def("popMatrix", static_cast<void (dart::renderer::OpenGLRenderInterface::*)()>(&dart::renderer::OpenGLRenderInterface::popMatrix))
.def("pushName", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(int)>(&dart::renderer::OpenGLRenderInterface::pushName), (::boost::python::arg("_id")))
.def("popName", static_cast<void (dart::renderer::OpenGLRenderInterface::*)()>(&dart::renderer::OpenGLRenderInterface::popName))
.def("translate", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::OpenGLRenderInterface::translate), (::boost::python::arg("_offset")))
.def("rotate", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &, double)>(&dart::renderer::OpenGLRenderInterface::rotate), (::boost::python::arg("_axis"), ::boost::python::arg("_rad")))
.def("transform", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Isometry3d &)>(&dart::renderer::OpenGLRenderInterface::transform), (::boost::python::arg("_transform")))
.def("scale", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::OpenGLRenderInterface::scale), (::boost::python::arg("_scale")))
.def("compileList", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(dart::dynamics::Skeleton *)>(&dart::renderer::OpenGLRenderInterface::compileList), (::boost::python::arg("_skel")))
.def("compileList", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(dart::dynamics::BodyNode *)>(&dart::renderer::OpenGLRenderInterface::compileList), (::boost::python::arg("_node")))
.def("compileList", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(dart::dynamics::Shape *)>(&dart::renderer::OpenGLRenderInterface::compileList), (::boost::python::arg("_shape")))
.def("compileList", static_cast<GLuint (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &, const aiScene *)>(&dart::renderer::OpenGLRenderInterface::compileList), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh")))
.def("draw", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(dart::dynamics::Skeleton *, bool, bool)>(&dart::renderer::OpenGLRenderInterface::draw), (::boost::python::arg("_skel"), ::boost::python::arg("_vizCol") = false, ::boost::python::arg("_colMesh") = false))
.def("draw", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(dart::dynamics::BodyNode *, bool, bool)>(&dart::renderer::OpenGLRenderInterface::draw), (::boost::python::arg("_node"), ::boost::python::arg("_vizCol") = false, ::boost::python::arg("_colMesh") = false))
.def("draw", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(dart::dynamics::Shape *)>(&dart::renderer::OpenGLRenderInterface::draw), (::boost::python::arg("_shape")))
.def("drawEllipsoid", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::OpenGLRenderInterface::drawEllipsoid), (::boost::python::arg("_size")))
.def("drawCube", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::OpenGLRenderInterface::drawCube), (::boost::python::arg("_size")))
.def("drawCylinder", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(double, double)>(&dart::renderer::OpenGLRenderInterface::drawCylinder), (::boost::python::arg("_radius"), ::boost::python::arg("_height")))
.def("drawMesh", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &, const aiScene *)>(&dart::renderer::OpenGLRenderInterface::drawMesh), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh")))
.def("drawList", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(GLuint)>(&dart::renderer::OpenGLRenderInterface::drawList), (::boost::python::arg("index")))
.def("drawLineSegments", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const std::vector<Eigen::Vector3d> &, const Eigen::aligned_vector<Eigen::Vector2i> &)>(&dart::renderer::OpenGLRenderInterface::drawLineSegments), (::boost::python::arg("_vertices"), ::boost::python::arg("_connections")))
.def("setPenColor", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector4d &)>(&dart::renderer::OpenGLRenderInterface::setPenColor), (::boost::python::arg("_col")))
.def("setPenColor", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::OpenGLRenderInterface::setPenColor), (::boost::python::arg("_col")))
.def("setLineWidth", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(float)>(&dart::renderer::OpenGLRenderInterface::setLineWidth), (::boost::python::arg("_width")))
.def("saveToImage", static_cast<void (dart::renderer::OpenGLRenderInterface::*)(const char *, dart::renderer::DecoBufferType)>(&dart::renderer::OpenGLRenderInterface::saveToImage), (::boost::python::arg("_filename"), ::boost::python::arg("_buffType") = 1))
;
}

/* footer */
