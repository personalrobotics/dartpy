#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils11FileInfoC3DE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::FileInfoC3D, ::boost::noncopyable >("FileInfoC3D", boost::python::no_init)
.def(::boost::python::init<>())
.def("getNumMarkers", static_cast<int (dart::utils::FileInfoC3D::*)() const>(&dart::utils::FileInfoC3D::getNumMarkers))
.def("getNumFrames", static_cast<int (dart::utils::FileInfoC3D::*)() const>(&dart::utils::FileInfoC3D::getNumFrames))
.def("getFPS", static_cast<double (dart::utils::FileInfoC3D::*)() const>(&dart::utils::FileInfoC3D::getFPS))
.def("getDataAt", static_cast<Eigen::Vector3d (dart::utils::FileInfoC3D::*)(int, int) const>(&dart::utils::FileInfoC3D::getDataAt), (::boost::python::arg("_frame"), ::boost::python::arg("_idx")))
.def("addData", static_cast<void (dart::utils::FileInfoC3D::*)(const Eigen::EIGEN_V_VEC3D &)>(&dart::utils::FileInfoC3D::addData), (::boost::python::arg("_data")))
.def("loadFile", static_cast<bool (dart::utils::FileInfoC3D::*)(const char *)>(&dart::utils::FileInfoC3D::loadFile), (::boost::python::arg("")))
.def("saveFile", static_cast<bool (dart::utils::FileInfoC3D::*)(const char *, int, int, double)>(&dart::utils::FileInfoC3D::saveFile), (::boost::python::arg(""), ::boost::python::arg("_start"), ::boost::python::arg("_end"), ::boost::python::arg("_sampleRate")))
;
}

/* footer */
