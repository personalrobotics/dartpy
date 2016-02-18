#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9optimizer6SolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Solver, ::boost::noncopyable >("Solver", boost::python::no_init)
.def("solve", static_cast<bool (dart::optimizer::Solver::*)()>(&dart::optimizer::Solver::solve))
.def("getType", static_cast<std::string (dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getType))
.def("clone", static_cast<std::shared_ptr<dart::optimizer::Solver> (dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::clone))
.def("setProperties", static_cast<void (dart::optimizer::Solver::*)(const dart::optimizer::Solver::Properties &)>(&dart::optimizer::Solver::setProperties), (::boost::python::arg("_properties")))
.def("getSolverProperties", static_cast<const dart::optimizer::Solver::Properties &(dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getSolverProperties), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("copy", static_cast<void (dart::optimizer::Solver::*)(const dart::optimizer::Solver &)>(&dart::optimizer::Solver::copy), (::boost::python::arg("_otherSolver")))
.def("setProblem", static_cast<void (dart::optimizer::Solver::*)(std::shared_ptr<dart::optimizer::Problem>)>(&dart::optimizer::Solver::setProblem), (::boost::python::arg("_newProblem")))
.def("getProblem", static_cast<std::shared_ptr<dart::optimizer::Problem> (dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getProblem))
.def("setTolerance", static_cast<void (dart::optimizer::Solver::*)(double)>(&dart::optimizer::Solver::setTolerance), (::boost::python::arg("_newTolerance")))
.def("getTolerance", static_cast<double (dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getTolerance))
.def("setNumMaxIterations", static_cast<void (dart::optimizer::Solver::*)(std::size_t)>(&dart::optimizer::Solver::setNumMaxIterations), (::boost::python::arg("_newMax")))
.def("getNumMaxIterations", static_cast<std::size_t (dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getNumMaxIterations))
.def("setIterationsPerPrint", static_cast<void (dart::optimizer::Solver::*)(std::size_t)>(&dart::optimizer::Solver::setIterationsPerPrint), (::boost::python::arg("_newRatio")))
.def("getIterationsPerPrint", static_cast<std::size_t (dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getIterationsPerPrint))
.def("setOutStream", static_cast<void (dart::optimizer::Solver::*)(std::ostream *)>(&dart::optimizer::Solver::setOutStream), (::boost::python::arg("_os")))
.def("setPrintFinalResult", static_cast<void (dart::optimizer::Solver::*)(bool)>(&dart::optimizer::Solver::setPrintFinalResult), (::boost::python::arg("_print")))
.def("getPrintFinalResult", static_cast<bool (dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getPrintFinalResult))
.def("setResultFileName", static_cast<void (dart::optimizer::Solver::*)(const std::string &)>(&dart::optimizer::Solver::setResultFileName), (::boost::python::arg("_resultFile")))
.def("getResultFileName", static_cast<const std::string &(dart::optimizer::Solver::*)() const>(&dart::optimizer::Solver::getResultFileName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
