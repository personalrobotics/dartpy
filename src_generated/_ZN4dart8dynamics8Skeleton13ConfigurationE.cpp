#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics8Skeleton13ConfigurationE()
{
::boost::python::class_<dart::dynamics::Skeleton::Configuration, ::boost::noncopyable >("Configuration", boost::python::no_init)
.def(::boost::python::init<const Eigen::VectorXd &, const Eigen::VectorXd &, const Eigen::VectorXd &, const Eigen::VectorXd &, const Eigen::VectorXd &>((::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"), ::boost::python::arg("commands"))))
.def(::boost::python::init<const std::vector<std::size_t> &, const Eigen::VectorXd &, const Eigen::VectorXd &, const Eigen::VectorXd &, const Eigen::VectorXd &, const Eigen::VectorXd &>((::boost::python::arg("indices"), ::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"), ::boost::python::arg("commands"))))
.def_readwrite("mIndices", &dart::dynamics::Skeleton::Configuration::mIndices)
.def_readwrite("mPositions", &dart::dynamics::Skeleton::Configuration::mPositions)
.def_readwrite("mVelocities", &dart::dynamics::Skeleton::Configuration::mVelocities)
.def_readwrite("mAccelerations", &dart::dynamics::Skeleton::Configuration::mAccelerations)
.def_readwrite("mForces", &dart::dynamics::Skeleton::Configuration::mForces)
.def_readwrite("mCommands", &dart::dynamics::Skeleton::Configuration::mCommands)
;
}

/* footer */