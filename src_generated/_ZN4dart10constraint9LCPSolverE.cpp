#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint9LCPSolverE()
{
::boost::python::class_<dart::constraint::LCPSolver, ::boost::noncopyable >("LCPSolver", boost::python::no_init)
.def("solve", static_cast<void (dart::constraint::LCPSolver::*)(dart::constraint::ConstrainedGroup *)>(&dart::constraint::LCPSolver::solve), (::boost::python::arg("_group")))
.def("setTimeStep", static_cast<void (dart::constraint::LCPSolver::*)(double)>(&dart::constraint::LCPSolver::setTimeStep), (::boost::python::arg("_timeStep")))
.def("getTimeStep", static_cast<double (dart::constraint::LCPSolver::*)() const>(&dart::constraint::LCPSolver::getTimeStep))
;
}

/* footer */
