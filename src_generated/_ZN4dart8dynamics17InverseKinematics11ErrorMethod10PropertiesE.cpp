#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("ErrorMethod"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::ErrorMethod::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::InverseKinematics::ErrorMethod::Bounds &, double, const Eigen::Vector6d &>((::boost::python::arg("_bounds"), ::boost::python::arg("_errorClamp"), ::boost::python::arg("_errorWeights"))))
.def_readwrite("mBounds", &dart::dynamics::InverseKinematics::ErrorMethod::Properties::mBounds)
.def_readwrite("mErrorLengthClamp", &dart::dynamics::InverseKinematics::ErrorMethod::Properties::mErrorLengthClamp)
.def_readwrite("mErrorWeights", &dart::dynamics::InverseKinematics::ErrorMethod::Properties::mErrorWeights)
;
}

/* footer */
