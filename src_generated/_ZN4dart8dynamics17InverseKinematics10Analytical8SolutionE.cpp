#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::Solution, ::boost::noncopyable >("Solution", boost::python::no_init)
.def(::boost::python::init<const Eigen::VectorXd &, int>((::boost::python::arg("_config"), ::boost::python::arg("_validity") = 0)))
.def_readwrite("mConfig", &dart::dynamics::InverseKinematics::Analytical::Solution::mConfig)
.def_readwrite("mValidity", &dart::dynamics::InverseKinematics::Analytical::Solution::mValidity)
;
}

/* footer */
