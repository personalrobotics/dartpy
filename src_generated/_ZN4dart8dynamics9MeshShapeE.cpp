#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics9MeshShapeE()
{
::boost::python::class_<dart::dynamics::MeshShape, ::boost::python::bases<dart::dynamics::Shape > >("MeshShape", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, const aiScene *, const std::string &, const dart::common::ResourceRetrieverPtr &>((::boost::python::arg("_scale"), ::boost::python::arg("_mesh"), ::boost::python::arg("_path"), ::boost::python::arg("_resourceRetriever"))))
.def("update", static_cast<void (dart::dynamics::MeshShape::*)()>(&dart::dynamics::MeshShape::update))
.def("setAlpha", static_cast<void (dart::dynamics::MeshShape::*)(double)>(&dart::dynamics::MeshShape::setAlpha), (::boost::python::arg("_alpha")))
.def("setMesh", static_cast<void (dart::dynamics::MeshShape::*)(const aiScene *, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::dynamics::MeshShape::setMesh), (::boost::python::arg("_mesh"), ::boost::python::arg("path"), ::boost::python::arg("_resourceRetriever")))
.def("getMeshUri", static_cast<const std::string &(dart::dynamics::MeshShape::*)() const>(&dart::dynamics::MeshShape::getMeshUri), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getMeshPath", static_cast<const std::string &(dart::dynamics::MeshShape::*)() const>(&dart::dynamics::MeshShape::getMeshPath), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setScale", static_cast<void (dart::dynamics::MeshShape::*)(const Eigen::Vector3d &)>(&dart::dynamics::MeshShape::setScale), (::boost::python::arg("_scale")))
.def("getScale", static_cast<const Eigen::Vector3d &(dart::dynamics::MeshShape::*)() const>(&dart::dynamics::MeshShape::getScale), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setColorMode", static_cast<void (dart::dynamics::MeshShape::*)(dart::dynamics::MeshShape::ColorMode)>(&dart::dynamics::MeshShape::setColorMode), (::boost::python::arg("_mode")))
.def("getColorMode", static_cast<dart::dynamics::MeshShape::ColorMode (dart::dynamics::MeshShape::*)() const>(&dart::dynamics::MeshShape::getColorMode))
.def("setColorIndex", static_cast<void (dart::dynamics::MeshShape::*)(int)>(&dart::dynamics::MeshShape::setColorIndex), (::boost::python::arg("_index")))
.def("getColorIndex", static_cast<int (dart::dynamics::MeshShape::*)() const>(&dart::dynamics::MeshShape::getColorIndex))
.def("getDisplayList", static_cast<int (dart::dynamics::MeshShape::*)() const>(&dart::dynamics::MeshShape::getDisplayList))
.def("setDisplayList", static_cast<void (dart::dynamics::MeshShape::*)(int)>(&dart::dynamics::MeshShape::setDisplayList), (::boost::python::arg("_index")))
.def("draw", static_cast<void (dart::dynamics::MeshShape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::MeshShape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_col"), ::boost::python::arg("_default") = true))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::MeshShape::*)(double) const>(&dart::dynamics::MeshShape::computeInertia), (::boost::python::arg("mass")))
;
}

/* footer */
