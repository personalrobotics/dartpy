#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics11JacobianDLS10PropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS::Properties, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod::Properties, dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::InverseKinematics::GradientMethod::Properties &, const dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties &>((::boost::python::arg("gradientProperties"), ::boost::python::arg("dlsProperties"))))
;
}

/* footer */
