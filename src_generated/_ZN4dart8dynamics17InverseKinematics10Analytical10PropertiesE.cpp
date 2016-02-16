#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::Properties, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod::Properties, dart::dynamics::InverseKinematics::Analytical::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::InverseKinematics::GradientMethod::Properties &, const dart::dynamics::InverseKinematics::Analytical::UniqueProperties &>((::boost::python::arg("gradientProperties"), ::boost::python::arg("analyticalProperties"))))
.def(::boost::python::init<const dart::dynamics::InverseKinematics::Analytical::UniqueProperties &>((::boost::python::arg("analyticalProperties"))))
;
}

/* footer */
