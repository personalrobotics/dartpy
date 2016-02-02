#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8planning23PathFollowingTrajectoryE()
{
::boost::python::class_<dart::planning::PathFollowingTrajectory, ::boost::python::bases<dart::planning::Trajectory > >("PathFollowingTrajectory", boost::python::no_init)
.def(::boost::python::init<const dart::planning::Path &, const Eigen::VectorXd &, const Eigen::VectorXd &>((::boost::python::arg("path"), ::boost::python::arg("maxVelocity"), ::boost::python::arg("maxAcceleration"))))
.def("isValid", static_cast<bool (dart::planning::PathFollowingTrajectory::*)() const>(&dart::planning::PathFollowingTrajectory::isValid))
.def("getDuration", static_cast<double (dart::planning::PathFollowingTrajectory::*)() const>(&dart::planning::PathFollowingTrajectory::getDuration))
.def("getPosition", static_cast<Eigen::VectorXd (dart::planning::PathFollowingTrajectory::*)(double) const>(&dart::planning::PathFollowingTrajectory::getPosition), (::boost::python::arg("time")))
.def("getVelocity", static_cast<Eigen::VectorXd (dart::planning::PathFollowingTrajectory::*)(double) const>(&dart::planning::PathFollowingTrajectory::getVelocity), (::boost::python::arg("time")))
.def("getMaxAccelerationError", static_cast<double (dart::planning::PathFollowingTrajectory::*)()>(&dart::planning::PathFollowingTrajectory::getMaxAccelerationError))
;
}

/* footer */
