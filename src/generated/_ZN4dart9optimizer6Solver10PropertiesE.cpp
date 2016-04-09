#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer6Solver10PropertiesE_docstring[] = R"CHIMERA_STRING( The Solver::Properties class contains Solver parameters that are common
 to all Solver types. Most (but not necessarily all) Solvers will make use
 of these parameters, and these parameters can be directly copied or
 transferred between all Solver types.
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer6Solver10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer").attr("Solver"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Solver::Properties >("Properties", _ZN4dart9optimizer6Solver10PropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem) -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(_problem); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, double _tolerance) -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(_problem, _tolerance); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_tolerance"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, double _tolerance, std::size_t _numMaxIterations) -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(_problem, _tolerance, _numMaxIterations); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_tolerance"), ::boost::python::arg("_numMaxIterations"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, double _tolerance, std::size_t _numMaxIterations, std::size_t _iterationsPerPrint) -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(_problem, _tolerance, _numMaxIterations, _iterationsPerPrint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_tolerance"), ::boost::python::arg("_numMaxIterations"), ::boost::python::arg("_iterationsPerPrint"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, double _tolerance, std::size_t _numMaxIterations, std::size_t _iterationsPerPrint, std::ostream * _ostream) -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(_problem, _tolerance, _numMaxIterations, _iterationsPerPrint, _ostream); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_tolerance"), ::boost::python::arg("_numMaxIterations"), ::boost::python::arg("_iterationsPerPrint"), ::boost::python::arg("_ostream"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, double _tolerance, std::size_t _numMaxIterations, std::size_t _iterationsPerPrint, std::ostream * _ostream, bool _printFinalResult) -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(_problem, _tolerance, _numMaxIterations, _iterationsPerPrint, _ostream, _printFinalResult); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_tolerance"), ::boost::python::arg("_numMaxIterations"), ::boost::python::arg("_iterationsPerPrint"), ::boost::python::arg("_ostream"), ::boost::python::arg("_printFinalResult"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, double _tolerance, std::size_t _numMaxIterations, std::size_t _iterationsPerPrint, std::ostream * _ostream, bool _printFinalResult, const std::string & _resultFile) -> dart::optimizer::Solver::Properties * { return new dart::optimizer::Solver::Properties(_problem, _tolerance, _numMaxIterations, _iterationsPerPrint, _ostream, _printFinalResult, _resultFile); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_tolerance"), ::boost::python::arg("_numMaxIterations"), ::boost::python::arg("_iterationsPerPrint"), ::boost::python::arg("_ostream"), ::boost::python::arg("_printFinalResult"), ::boost::python::arg("_resultFile"))))
.def_readwrite("mProblem", &dart::optimizer::Solver::Properties::mProblem)
.def_readwrite("mTolerance", &dart::optimizer::Solver::Properties::mTolerance)
.def_readwrite("mNumMaxIterations", &dart::optimizer::Solver::Properties::mNumMaxIterations)
.def_readwrite("mIterationsPerPrint", &dart::optimizer::Solver::Properties::mIterationsPerPrint)
.def_readwrite("mPrintFinalResult", &dart::optimizer::Solver::Properties::mPrintFinalResult)
.def_readwrite("mResultFile", &dart::optimizer::Solver::Properties::mResultFile)
;
}

/* footer */
