#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9optimizer21GradientDescentSolver10PropertiesE()
{
::boost::python::class_<dart::optimizer::GradientDescentSolver::Properties, ::boost::python::bases<dart::optimizer::Solver::Properties, dart::optimizer::GradientDescentSolver::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::optimizer::Solver::Properties &, const dart::optimizer::GradientDescentSolver::UniqueProperties &>((::boost::python::arg("_solverProperties"), ::boost::python::arg("_descentProperties"))))
;
}

/* footer */
