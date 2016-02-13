#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics7Inertia5ParamE()
{
::boost::python::enum_<dart::dynamics::Inertia::Param>("Param")
.value("MASS", dart::dynamics::Inertia::Param::MASS)
.value("COM_X", dart::dynamics::Inertia::Param::COM_X)
.value("COM_Y", dart::dynamics::Inertia::Param::COM_Y)
.value("COM_Z", dart::dynamics::Inertia::Param::COM_Z)
.value("I_XX", dart::dynamics::Inertia::Param::I_XX)
.value("I_YY", dart::dynamics::Inertia::Param::I_YY)
.value("I_ZZ", dart::dynamics::Inertia::Param::I_ZZ)
.value("I_XY", dart::dynamics::Inertia::Param::I_XY)
.value("I_XZ", dart::dynamics::Inertia::Param::I_XZ)
.value("I_YZ", dart::dynamics::Inertia::Param::I_YZ)
;
}

/* footer */
