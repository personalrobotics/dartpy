#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint12PGSLCPSolverE()
{
::boost::python::class_<dart::constraint::PGSLCPSolver, ::boost::noncopyable, ::boost::python::bases<dart::constraint::LCPSolver > >("PGSLCPSolver", boost::python::no_init)
.def(::boost::python::init<double>((::boost::python::arg("_timestep"))))
.def("solve", static_cast<void (dart::constraint::PGSLCPSolver::*)(dart::constraint::ConstrainedGroup *)>(&dart::constraint::PGSLCPSolver::solve), (::boost::python::arg("_group")))
;
}

/* footer */
