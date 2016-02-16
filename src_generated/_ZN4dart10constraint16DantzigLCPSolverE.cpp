#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint16DantzigLCPSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::DantzigLCPSolver, ::boost::noncopyable, ::boost::python::bases<dart::constraint::LCPSolver > >("DantzigLCPSolver", boost::python::no_init)
.def(::boost::python::init<double>((::boost::python::arg("_timestep"))))
.def("solve", static_cast<void (dart::constraint::DantzigLCPSolver::*)(dart::constraint::ConstrainedGroup *)>(&dart::constraint::DantzigLCPSolver::solve), (::boost::python::arg("_group")))
;
}

/* footer */
