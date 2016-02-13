#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics14GradientMethod10PropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::GradientMethod::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<double, const Eigen::VectorXd &>((::boost::python::arg("clamp"), ::boost::python::arg("weights"))))
.def_readwrite("mComponentWiseClamp", &dart::dynamics::InverseKinematics::GradientMethod::Properties::mComponentWiseClamp)
.def_readwrite("mComponentWeights", &dart::dynamics::InverseKinematics::GradientMethod::Properties::mComponentWeights)
;
}

/* footer */
