#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::Solution, ::boost::noncopyable >("Solution", boost::python::no_init)
.def(::boost::python::init<const Eigen::VectorXd &, int>((::boost::python::arg("_config"), ::boost::python::arg("_validity") = 0)))
.def_readwrite("mConfig", &dart::dynamics::InverseKinematics::Analytical::Solution::mConfig)
.def_readwrite("mValidity", &dart::dynamics::InverseKinematics::Analytical::Solution::mValidity)
;
}

/* footer */
