#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::Properties, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod::Properties, dart::dynamics::InverseKinematics::Analytical::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::InverseKinematics::GradientMethod::Properties &, const dart::dynamics::InverseKinematics::Analytical::UniqueProperties &>((::boost::python::arg("gradientProperties"), ::boost::python::arg("analyticalProperties"))))
.def(::boost::python::init<const dart::dynamics::InverseKinematics::Analytical::UniqueProperties &>((::boost::python::arg("analyticalProperties"))))
;
}

/* footer */
