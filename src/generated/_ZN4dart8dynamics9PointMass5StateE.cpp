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

void _ZN4dart8dynamics9PointMass5StateE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("PointMass"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMass::State >("State", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::PointMass::State * { return new dart::dynamics::PointMass::State(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & positions) -> dart::dynamics::PointMass::State * { return new dart::dynamics::PointMass::State(positions); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & positions, const Eigen::Vector3d & velocities) -> dart::dynamics::PointMass::State * { return new dart::dynamics::PointMass::State(positions, velocities); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & positions, const Eigen::Vector3d & velocities, const Eigen::Vector3d & accelerations) -> dart::dynamics::PointMass::State * { return new dart::dynamics::PointMass::State(positions, velocities, accelerations); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & positions, const Eigen::Vector3d & velocities, const Eigen::Vector3d & accelerations, const Eigen::Vector3d & forces) -> dart::dynamics::PointMass::State * { return new dart::dynamics::PointMass::State(positions, velocities, accelerations, forces); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"))))
.def_readwrite("mPositions", &dart::dynamics::PointMass::State::mPositions)
.def_readwrite("mVelocities", &dart::dynamics::PointMass::State::mVelocities)
.def_readwrite("mAccelerations", &dart::dynamics::PointMass::State::mAccelerations)
.def_readwrite("mForces", &dart::dynamics::PointMass::State::mForces)
;
}

/* footer */
