#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart3gui9TrackballE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball9startBallEdd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball10updateBallEdd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball15applyGLRotationEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball4drawEii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball12setTrackballERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball9setCenterERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball9setRadiusEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9Trackball13setQuaternionERKN5Eigen10QuaternionIdLi0EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart3gui9Trackball11getCurrQuatEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart3gui9Trackball17getRotationMatrixEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart3gui9Trackball9getCenterEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart3gui9Trackball9getRadiusEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart3gui9TrackballE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::Trackball >("Trackball", _ZN4dart3gui9TrackballE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::Trackball * { return new dart::gui::Trackball(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector2d & _center, double _radius) -> dart::gui::Trackball * { return new dart::gui::Trackball(_center, _radius); }, ::boost::python::default_call_policies(), (::boost::python::arg("_center"), ::boost::python::arg("_radius"))))
.def("startBall", [](dart::gui::Trackball *self, double _x, double _y) -> void { return self->startBall(_x, _y); }, _ZN4dart3gui9Trackball9startBallEdd_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("updateBall", [](dart::gui::Trackball *self, double _x, double _y) -> void { return self->updateBall(_x, _y); }, _ZN4dart3gui9Trackball10updateBallEdd_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("applyGLRotation", [](dart::gui::Trackball *self) -> void { return self->applyGLRotation(); }, _ZN4dart3gui9Trackball15applyGLRotationEv_docstring)
.def("draw", [](dart::gui::Trackball *self, int _winWidth, int _winHeight) -> void { return self->draw(_winWidth, _winHeight); }, _ZN4dart3gui9Trackball4drawEii_docstring, (::boost::python::arg("_winWidth"), ::boost::python::arg("_winHeight")))
.def("setTrackball", [](dart::gui::Trackball *self, const Eigen::Vector2d & _center, const double _radius) -> void { return self->setTrackball(_center, _radius); }, _ZN4dart3gui9Trackball12setTrackballERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEEd_docstring, (::boost::python::arg("_center"), ::boost::python::arg("_radius")))
.def("setCenter", [](dart::gui::Trackball *self, const Eigen::Vector2d & _center) -> void { return self->setCenter(_center); }, _ZN4dart3gui9Trackball9setCenterERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring, (::boost::python::arg("_center")))
.def("setRadius", [](dart::gui::Trackball *self, const double _radius) -> void { return self->setRadius(_radius); }, _ZN4dart3gui9Trackball9setRadiusEd_docstring, (::boost::python::arg("_radius")))
.def("setQuaternion", [](dart::gui::Trackball *self, const Eigen::Quaterniond & _q) -> void { return self->setQuaternion(_q); }, _ZN4dart3gui9Trackball13setQuaternionERKN5Eigen10QuaternionIdLi0EEE_docstring, (::boost::python::arg("_q")))
.def("getCurrQuat", [](const dart::gui::Trackball *self) -> Eigen::Quaterniond { return self->getCurrQuat(); }, _ZNK4dart3gui9Trackball11getCurrQuatEv_docstring)
.def("getRotationMatrix", [](const dart::gui::Trackball *self) -> Eigen::Matrix3d { return self->getRotationMatrix(); }, _ZNK4dart3gui9Trackball17getRotationMatrixEv_docstring)
.def("getCenter", [](const dart::gui::Trackball *self) -> Eigen::Vector2d { return self->getCenter(); }, _ZNK4dart3gui9Trackball9getCenterEv_docstring)
.def("getRadius", [](const dart::gui::Trackball *self) -> double { return self->getRadius(); }, _ZNK4dart3gui9Trackball9getRadiusEv_docstring)
;
}

/* footer */
