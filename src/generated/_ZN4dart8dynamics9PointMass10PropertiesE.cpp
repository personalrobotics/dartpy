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

void _ZN4dart8dynamics9PointMass10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("PointMass"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMass::Properties >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits, const Eigen::Vector3d & _positionUpperLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits, _positionUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits, const Eigen::Vector3d & _positionUpperLimits, const Eigen::Vector3d & _velocityLowerLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits, _positionUpperLimits, _velocityLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits, const Eigen::Vector3d & _positionUpperLimits, const Eigen::Vector3d & _velocityLowerLimits, const Eigen::Vector3d & _velocityUpperLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits, _positionUpperLimits, _velocityLowerLimits, _velocityUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"), ::boost::python::arg("_velocityUpperLimits"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits, const Eigen::Vector3d & _positionUpperLimits, const Eigen::Vector3d & _velocityLowerLimits, const Eigen::Vector3d & _velocityUpperLimits, const Eigen::Vector3d & _accelerationLowerLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits, _positionUpperLimits, _velocityLowerLimits, _velocityUpperLimits, _accelerationLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"), ::boost::python::arg("_velocityUpperLimits"), ::boost::python::arg("_accelerationLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits, const Eigen::Vector3d & _positionUpperLimits, const Eigen::Vector3d & _velocityLowerLimits, const Eigen::Vector3d & _velocityUpperLimits, const Eigen::Vector3d & _accelerationLowerLimits, const Eigen::Vector3d & _accelerationUpperLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits, _positionUpperLimits, _velocityLowerLimits, _velocityUpperLimits, _accelerationLowerLimits, _accelerationUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"), ::boost::python::arg("_velocityUpperLimits"), ::boost::python::arg("_accelerationLowerLimits"), ::boost::python::arg("_accelerationUpperLimits"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits, const Eigen::Vector3d & _positionUpperLimits, const Eigen::Vector3d & _velocityLowerLimits, const Eigen::Vector3d & _velocityUpperLimits, const Eigen::Vector3d & _accelerationLowerLimits, const Eigen::Vector3d & _accelerationUpperLimits, const Eigen::Vector3d & _forceLowerLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits, _positionUpperLimits, _velocityLowerLimits, _velocityUpperLimits, _accelerationLowerLimits, _accelerationUpperLimits, _forceLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"), ::boost::python::arg("_velocityUpperLimits"), ::boost::python::arg("_accelerationLowerLimits"), ::boost::python::arg("_accelerationUpperLimits"), ::boost::python::arg("_forceLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _X0, double _mass, const std::vector<std::size_t> & _connections, const Eigen::Vector3d & _positionLowerLimits, const Eigen::Vector3d & _positionUpperLimits, const Eigen::Vector3d & _velocityLowerLimits, const Eigen::Vector3d & _velocityUpperLimits, const Eigen::Vector3d & _accelerationLowerLimits, const Eigen::Vector3d & _accelerationUpperLimits, const Eigen::Vector3d & _forceLowerLimits, const Eigen::Vector3d & _forceUpperLimits) -> dart::dynamics::PointMass::Properties * { return new dart::dynamics::PointMass::Properties(_X0, _mass, _connections, _positionLowerLimits, _positionUpperLimits, _velocityLowerLimits, _velocityUpperLimits, _accelerationLowerLimits, _accelerationUpperLimits, _forceLowerLimits, _forceUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"), ::boost::python::arg("_velocityUpperLimits"), ::boost::python::arg("_accelerationLowerLimits"), ::boost::python::arg("_accelerationUpperLimits"), ::boost::python::arg("_forceLowerLimits"), ::boost::python::arg("_forceUpperLimits"))))
.def("setRestingPosition", [](dart::dynamics::PointMass::Properties *self, const Eigen::Vector3d & _x) -> void { return self->setRestingPosition(_x); }, (::boost::python::arg("_x")))
.def("setMass", [](dart::dynamics::PointMass::Properties *self, double _mass) -> void { return self->setMass(_mass); }, (::boost::python::arg("_mass")))
.def_readwrite("mX0", &dart::dynamics::PointMass::Properties::mX0)
.def_readwrite("mMass", &dart::dynamics::PointMass::Properties::mMass)
.def_readwrite("mConnectedPointMassIndices", &dart::dynamics::PointMass::Properties::mConnectedPointMassIndices)
.def_readwrite("mPositionLowerLimits", &dart::dynamics::PointMass::Properties::mPositionLowerLimits)
.def_readwrite("mPositionUpperLimits", &dart::dynamics::PointMass::Properties::mPositionUpperLimits)
.def_readwrite("mVelocityLowerLimits", &dart::dynamics::PointMass::Properties::mVelocityLowerLimits)
.def_readwrite("mVelocityUpperLimits", &dart::dynamics::PointMass::Properties::mVelocityUpperLimits)
.def_readwrite("mAccelerationLowerLimits", &dart::dynamics::PointMass::Properties::mAccelerationLowerLimits)
.def_readwrite("mAccelerationUpperLimits", &dart::dynamics::PointMass::Properties::mAccelerationUpperLimits)
.def_readwrite("mForceLowerLimits", &dart::dynamics::PointMass::Properties::mForceLowerLimits)
.def_readwrite("mForceUpperLimits", &dart::dynamics::PointMass::Properties::mForceUpperLimits)
;
}

/* footer */
