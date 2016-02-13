#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui9TrackballE()
{
::boost::python::class_<dart::gui::Trackball >("Trackball", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const Eigen::Vector2d &, double>((::boost::python::arg("_center"), ::boost::python::arg("_radius"))))
.def("startBall", static_cast<void (dart::gui::Trackball::*)(double, double)>(&dart::gui::Trackball::startBall), (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("updateBall", static_cast<void (dart::gui::Trackball::*)(double, double)>(&dart::gui::Trackball::updateBall), (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("applyGLRotation", static_cast<void (dart::gui::Trackball::*)()>(&dart::gui::Trackball::applyGLRotation))
.def("draw", static_cast<void (dart::gui::Trackball::*)(int, int)>(&dart::gui::Trackball::draw), (::boost::python::arg("_winWidth"), ::boost::python::arg("_winHeight")))
.def("setTrackball", static_cast<void (dart::gui::Trackball::*)(const Eigen::Vector2d &, const double)>(&dart::gui::Trackball::setTrackball), (::boost::python::arg("_center"), ::boost::python::arg("_radius")))
.def("setCenter", static_cast<void (dart::gui::Trackball::*)(const Eigen::Vector2d &)>(&dart::gui::Trackball::setCenter), (::boost::python::arg("_center")))
.def("setRadius", static_cast<void (dart::gui::Trackball::*)(const double)>(&dart::gui::Trackball::setRadius), (::boost::python::arg("_radius")))
.def("setQuaternion", static_cast<void (dart::gui::Trackball::*)(const Eigen::Quaterniond &)>(&dart::gui::Trackball::setQuaternion), (::boost::python::arg("_q")))
.def("getCurrQuat", static_cast<Eigen::Quaterniond (dart::gui::Trackball::*)() const>(&dart::gui::Trackball::getCurrQuat))
.def("getRotationMatrix", static_cast<Eigen::Matrix3d (dart::gui::Trackball::*)() const>(&dart::gui::Trackball::getRotationMatrix))
.def("getCenter", static_cast<Eigen::Vector2d (dart::gui::Trackball::*)() const>(&dart::gui::Trackball::getCenter))
.def("getRadius", static_cast<double (dart::gui::Trackball::*)() const>(&dart::gui::Trackball::getRadius))
;
}

/* footer */
