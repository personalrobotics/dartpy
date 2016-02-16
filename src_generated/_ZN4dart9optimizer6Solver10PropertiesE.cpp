#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9optimizer6Solver10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer").attr("Solver"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Solver::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<std::shared_ptr<dart::optimizer::Problem>, double, std::size_t, std::size_t, std::ostream *, bool, const std::string &>((::boost::python::arg("_problem"), ::boost::python::arg("_tolerance"), ::boost::python::arg("_numMaxIterations"), ::boost::python::arg("_iterationsPerPrint"), ::boost::python::arg("_ostream"), ::boost::python::arg("_printFinalResult"), ::boost::python::arg("_resultFile"))))
.def_readwrite("mProblem", &dart::optimizer::Solver::Properties::mProblem)
.def_readwrite("mTolerance", &dart::optimizer::Solver::Properties::mTolerance)
.def_readwrite("mNumMaxIterations", &dart::optimizer::Solver::Properties::mNumMaxIterations)
.def_readwrite("mIterationsPerPrint", &dart::optimizer::Solver::Properties::mIterationsPerPrint)
.def_readwrite("mOutStream", &dart::optimizer::Solver::Properties::mOutStream)
.def_readwrite("mPrintFinalResult", &dart::optimizer::Solver::Properties::mPrintFinalResult)
.def_readwrite("mResultFile", &dart::optimizer::Solver::Properties::mResultFile)
;
}

/* footer */
