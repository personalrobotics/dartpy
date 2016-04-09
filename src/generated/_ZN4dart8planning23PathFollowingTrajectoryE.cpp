#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8planning23PathFollowingTrajectoryE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::PathFollowingTrajectory, ::boost::python::bases<dart::planning::Trajectory > >("PathFollowingTrajectory", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const dart::planning::Path & path, const Eigen::VectorXd & maxVelocity, const Eigen::VectorXd & maxAcceleration) -> dart::planning::PathFollowingTrajectory * { return new dart::planning::PathFollowingTrajectory(path, maxVelocity, maxAcceleration); }, ::boost::python::default_call_policies(), (::boost::python::arg("path"), ::boost::python::arg("maxVelocity"), ::boost::python::arg("maxAcceleration"))))
.def("isValid", [](const dart::planning::PathFollowingTrajectory *self) -> bool { return self->isValid(); })
.def("getDuration", [](const dart::planning::PathFollowingTrajectory *self) -> double { return self->getDuration(); })
.def("getPosition", [](const dart::planning::PathFollowingTrajectory *self, double time) -> Eigen::VectorXd { return self->getPosition(time); }, (::boost::python::arg("time")))
.def("getVelocity", [](const dart::planning::PathFollowingTrajectory *self, double time) -> Eigen::VectorXd { return self->getVelocity(time); }, (::boost::python::arg("time")))
.def("getMaxAccelerationError", [](dart::planning::PathFollowingTrajectory *self) -> double { return self->getMaxAccelerationError(); })
;
}

/* footer */
