#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("JacobianDLS"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<double>((::boost::python::arg("damping") = 5.000000e-02)))
.def_readwrite("mDamping", &dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties::mDamping)
;
}

/* footer */
