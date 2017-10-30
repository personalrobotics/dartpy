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

void _ZN4dart3gui9TrackballE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::Trackball >("Trackball", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::Trackball * { return new dart::gui::Trackball(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector2d & _center, double _radius) -> dart::gui::Trackball * { return new dart::gui::Trackball(_center, _radius); }, ::boost::python::default_call_policies(), (::boost::python::arg("_center"), ::boost::python::arg("_radius"))))
.def("startBall", [](dart::gui::Trackball *self, double _x, double _y) -> void { return self->startBall(_x, _y); }, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("updateBall", [](dart::gui::Trackball *self, double _x, double _y) -> void { return self->updateBall(_x, _y); }, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("applyGLRotation", [](dart::gui::Trackball *self) -> void { return self->applyGLRotation(); })
.def("draw", [](dart::gui::Trackball *self, int _winWidth, int _winHeight) -> void { return self->draw(_winWidth, _winHeight); }, (::boost::python::arg("_winWidth"), ::boost::python::arg("_winHeight")))
.def("setTrackball", [](dart::gui::Trackball *self, const Eigen::Vector2d & _center, const double _radius) -> void { return self->setTrackball(_center, _radius); }, (::boost::python::arg("_center"), ::boost::python::arg("_radius")))
.def("setCenter", [](dart::gui::Trackball *self, const Eigen::Vector2d & _center) -> void { return self->setCenter(_center); }, (::boost::python::arg("_center")))
.def("setRadius", [](dart::gui::Trackball *self, const double _radius) -> void { return self->setRadius(_radius); }, (::boost::python::arg("_radius")))
.def("setQuaternion", [](dart::gui::Trackball *self, const Eigen::Quaterniond & _q) -> void { return self->setQuaternion(_q); }, (::boost::python::arg("_q")))
.def("getCurrQuat", [](const dart::gui::Trackball *self) -> Eigen::Quaterniond { return self->getCurrQuat(); })
.def("getRotationMatrix", [](const dart::gui::Trackball *self) -> Eigen::Matrix3d { return self->getRotationMatrix(); })
.def("getCenter", [](const dart::gui::Trackball *self) -> Eigen::Vector2d { return self->getCenter(); })
.def("getRadius", [](const dart::gui::Trackball *self) -> double { return self->getRadius(); })
;
}

/* footer */
