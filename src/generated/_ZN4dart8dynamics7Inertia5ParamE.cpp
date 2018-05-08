#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics7Inertia5ParamE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Inertia"));
::boost::python::scope parent_scope(parent_object);

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
