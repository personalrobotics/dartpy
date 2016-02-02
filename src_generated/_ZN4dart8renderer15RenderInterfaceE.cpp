#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8renderer15RenderInterfaceE()
{
::boost::python::class_<dart::renderer::RenderInterface >("RenderInterface", boost::python::no_init)
.def(::boost::python::init<>())
.def("initialize", static_cast<void (dart::renderer::RenderInterface::*)()>(&dart::renderer::RenderInterface::initialize))
.def("destroy", static_cast<void (dart::renderer::RenderInterface::*)()>(&dart::renderer::RenderInterface::destroy))
.def("setViewport", static_cast<void (dart::renderer::RenderInterface::*)(int, int, int, int)>(&dart::renderer::RenderInterface::setViewport), (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("getViewport", static_cast<void (dart::renderer::RenderInterface::*)(int &, int &, int &, int &) const>(&dart::renderer::RenderInterface::getViewport), (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_width"), ::boost::python::arg("_height")))
.def("clear", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::RenderInterface::clear), (::boost::python::arg("_color")))
.def("setMaterial", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, double)>(&dart::renderer::RenderInterface::setMaterial), (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("getMaterial", static_cast<void (dart::renderer::RenderInterface::*)(Eigen::Vector3d &, Eigen::Vector3d &, double &) const>(&dart::renderer::RenderInterface::getMaterial), (::boost::python::arg("_diffuse"), ::boost::python::arg("_specular"), ::boost::python::arg("_cosinePow")))
.def("setDefaultMaterial", static_cast<void (dart::renderer::RenderInterface::*)()>(&dart::renderer::RenderInterface::setDefaultMaterial))
.def("pushMatrix", static_cast<void (dart::renderer::RenderInterface::*)()>(&dart::renderer::RenderInterface::pushMatrix))
.def("popMatrix", static_cast<void (dart::renderer::RenderInterface::*)()>(&dart::renderer::RenderInterface::popMatrix))
.def("pushName", static_cast<void (dart::renderer::RenderInterface::*)(int)>(&dart::renderer::RenderInterface::pushName), (::boost::python::arg("_id")))
.def("popName", static_cast<void (dart::renderer::RenderInterface::*)()>(&dart::renderer::RenderInterface::popName))
.def("translate", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::RenderInterface::translate), (::boost::python::arg("_offset")))
.def("rotate", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &, double)>(&dart::renderer::RenderInterface::rotate), (::boost::python::arg("_axis"), ::boost::python::arg("_rad")))
.def("transform", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Isometry3d &)>(&dart::renderer::RenderInterface::transform), (::boost::python::arg("_transform")))
.def("scale", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::RenderInterface::scale), (::boost::python::arg("_scale")))
.def("drawEllipsoid", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::RenderInterface::drawEllipsoid), (::boost::python::arg("_size")))
.def("drawCube", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::RenderInterface::drawCube), (::boost::python::arg("_size")))
.def("drawCylinder", static_cast<void (dart::renderer::RenderInterface::*)(double, double)>(&dart::renderer::RenderInterface::drawCylinder), (::boost::python::arg("_radius"), ::boost::python::arg("_height")))
.def("drawMesh", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &, const aiScene *)>(&dart::renderer::RenderInterface::drawMesh), (::boost::python::arg("_scale"), ::boost::python::arg("_mesh")))
.def("drawList", static_cast<void (dart::renderer::RenderInterface::*)(unsigned int)>(&dart::renderer::RenderInterface::drawList), (::boost::python::arg("index")))
.def("drawLineSegments", static_cast<void (dart::renderer::RenderInterface::*)(const std::vector<Eigen::Vector3d> &, const Eigen::aligned_vector<Eigen::Vector2i> &)>(&dart::renderer::RenderInterface::drawLineSegments), (::boost::python::arg("_vertices"), ::boost::python::arg("_connections")))
.def("compileDisplayList", static_cast<unsigned int (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &, const aiScene *)>(&dart::renderer::RenderInterface::compileDisplayList), (::boost::python::arg("_size"), ::boost::python::arg("_mesh")))
.def("setPenColor", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector4d &)>(&dart::renderer::RenderInterface::setPenColor), (::boost::python::arg("_col")))
.def("setPenColor", static_cast<void (dart::renderer::RenderInterface::*)(const Eigen::Vector3d &)>(&dart::renderer::RenderInterface::setPenColor), (::boost::python::arg("_col")))
.def("setLineWidth", static_cast<void (dart::renderer::RenderInterface::*)(float)>(&dart::renderer::RenderInterface::setLineWidth), (::boost::python::arg("_width")))
.def("saveToImage", static_cast<void (dart::renderer::RenderInterface::*)(const char *, dart::renderer::DecoBufferType)>(&dart::renderer::RenderInterface::saveToImage), (::boost::python::arg("_filename"), ::boost::python::arg("_buffType") = 1))
;
}

/* footer */
