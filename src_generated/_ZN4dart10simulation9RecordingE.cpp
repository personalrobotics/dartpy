#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10simulation9RecordingE()
{
::boost::python::class_<dart::simulation::Recording, ::boost::noncopyable >("Recording", boost::python::no_init)
.def(::boost::python::init<const std::vector<dart::dynamics::SkeletonPtr> &>((::boost::python::arg("_skeletons"))))
.def(::boost::python::init<const std::vector<int> &>((::boost::python::arg("_skelDofs"))))
.def("getNumFrames", static_cast<int (dart::simulation::Recording::*)() const>(&dart::simulation::Recording::getNumFrames))
.def("getNumSkeletons", static_cast<int (dart::simulation::Recording::*)() const>(&dart::simulation::Recording::getNumSkeletons))
.def("getNumDofs", static_cast<int (dart::simulation::Recording::*)(int) const>(&dart::simulation::Recording::getNumDofs), (::boost::python::arg("_skelIdx")))
.def("getNumContacts", static_cast<int (dart::simulation::Recording::*)(int) const>(&dart::simulation::Recording::getNumContacts), (::boost::python::arg("_frameIdx")))
.def("getConfig", static_cast<Eigen::VectorXd (dart::simulation::Recording::*)(int, int) const>(&dart::simulation::Recording::getConfig), (::boost::python::arg("_frameIdx"), ::boost::python::arg("_skelIdx")))
.def("getGenCoord", static_cast<double (dart::simulation::Recording::*)(int, int, int) const>(&dart::simulation::Recording::getGenCoord), (::boost::python::arg("_frameIdx"), ::boost::python::arg("_skelIdx"), ::boost::python::arg("_dofIdx")))
.def("getContactPoint", static_cast<Eigen::Vector3d (dart::simulation::Recording::*)(int, int) const>(&dart::simulation::Recording::getContactPoint), (::boost::python::arg("_frameIdx"), ::boost::python::arg("_contactIdx")))
.def("getContactForce", static_cast<Eigen::Vector3d (dart::simulation::Recording::*)(int, int) const>(&dart::simulation::Recording::getContactForce), (::boost::python::arg("_frameIdx"), ::boost::python::arg("_contactIdx")))
.def("clear", static_cast<void (dart::simulation::Recording::*)()>(&dart::simulation::Recording::clear))
.def("addState", static_cast<void (dart::simulation::Recording::*)(const Eigen::VectorXd &)>(&dart::simulation::Recording::addState), (::boost::python::arg("_state")))
.def("updateNumGenCoords", static_cast<void (dart::simulation::Recording::*)(const std::vector<dart::dynamics::SkeletonPtr> &)>(&dart::simulation::Recording::updateNumGenCoords), (::boost::python::arg("_skeletons")))
;
}

/* footer */
