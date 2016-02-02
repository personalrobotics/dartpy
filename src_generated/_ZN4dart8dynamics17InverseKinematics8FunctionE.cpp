#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics8FunctionE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::Function, ::boost::noncopyable >("Function", boost::python::no_init)
.def("clone", static_cast<dart::optimizer::FunctionPtr (dart::dynamics::InverseKinematics::Function::*)(dart::dynamics::InverseKinematics *) const>(&dart::dynamics::InverseKinematics::Function::clone), (::boost::python::arg("_newIK")))
;
}

/* footer */
