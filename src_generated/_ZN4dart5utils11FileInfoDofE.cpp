#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils11FileInfoDofE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::FileInfoDof, ::boost::noncopyable >("FileInfoDof", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Skeleton *, double>((::boost::python::arg("_skel"), ::boost::python::arg("_fps") = 1.200000e+02)))
.def("loadFile", static_cast<bool (dart::utils::FileInfoDof::*)(const char *)>(&dart::utils::FileInfoDof::loadFile), (::boost::python::arg("_fileName")))
.def("saveFile", static_cast<bool (dart::utils::FileInfoDof::*)(const char *, std::size_t, std::size_t, double)>(&dart::utils::FileInfoDof::saveFile), (::boost::python::arg("_fileName"), ::boost::python::arg("_start"), ::boost::python::arg("_end"), ::boost::python::arg("_sampleRate") = 1.000000e+00))
.def("addDof", static_cast<void (dart::utils::FileInfoDof::*)(const Eigen::VectorXd &)>(&dart::utils::FileInfoDof::addDof), (::boost::python::arg("_dofs")))
.def("getDofAt", static_cast<double (dart::utils::FileInfoDof::*)(std::size_t, std::size_t) const>(&dart::utils::FileInfoDof::getDofAt), (::boost::python::arg("_frame"), ::boost::python::arg("_id")))
.def("getPoseAtFrame", static_cast<Eigen::VectorXd (dart::utils::FileInfoDof::*)(int) const>(&dart::utils::FileInfoDof::getPoseAtFrame), (::boost::python::arg("_frame")))
.def("setFPS", static_cast<void (dart::utils::FileInfoDof::*)(double)>(&dart::utils::FileInfoDof::setFPS), (::boost::python::arg("_fps")))
.def("getFPS", static_cast<double (dart::utils::FileInfoDof::*)() const>(&dart::utils::FileInfoDof::getFPS))
.def("getNumFrames", static_cast<int (dart::utils::FileInfoDof::*)() const>(&dart::utils::FileInfoDof::getNumFrames))
;
}

/* footer */
