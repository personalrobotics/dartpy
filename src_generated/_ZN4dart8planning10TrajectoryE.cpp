#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8planning10TrajectoryE()
{
::boost::python::class_<dart::planning::Trajectory, ::boost::noncopyable >("Trajectory", boost::python::no_init)
.def("getDuration", static_cast<double (dart::planning::Trajectory::*)() const>(&dart::planning::Trajectory::getDuration))
.def("getPosition", static_cast<Eigen::VectorXd (dart::planning::Trajectory::*)(double) const>(&dart::planning::Trajectory::getPosition), (::boost::python::arg("time")))
.def("getVelocity", static_cast<Eigen::VectorXd (dart::planning::Trajectory::*)(double) const>(&dart::planning::Trajectory::getVelocity), (::boost::python::arg("time")))
;
}

/* footer */
