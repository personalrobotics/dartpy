#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer6SolverE_docstring[] = R"CHIMERA_STRING( Abstract class that provides a common interface for different Solvers. The
 different Solver implementations each use a different nonlinear problem
 solving library, which could lead to differences in performance for various
 problem types. This base class allows the different Solver implementations
 to be swapped out with each other quickly and easily to help with testing,
 benchmarking, and experimentation.
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver5solveEv_docstring[] = R"CHIMERA_STRING( Solve optimization problem
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver7getTypeEv_docstring[] = R"CHIMERA_STRING( Get the type (implementation) of this Solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver5cloneEv_docstring[] = R"CHIMERA_STRING( Create an identical clone of this Solver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the generic Properties of this Solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver19getSolverPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the generic Properties of this Solver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the generic Properties of another Solver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver10setProblemESt10shared_ptrINS0_7ProblemEE_docstring[] = R"CHIMERA_STRING( Set the nonlinear optimization problem
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver10getProblemEv_docstring[] = R"CHIMERA_STRING( Get nonlinear optimization problem
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver12setToleranceEd_docstring[] = R"CHIMERA_STRING( Set the maximum step size allowed for the Problem to be considered
 converged
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver12getToleranceEv_docstring[] = R"CHIMERA_STRING( Get the maximum step size allowed for the Problem to be considered
 converged
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver19setNumMaxIterationsEm_docstring[] = R"CHIMERA_STRING( Set the maximum number of iterations that the Solver should use
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver19getNumMaxIterationsEv_docstring[] = R"CHIMERA_STRING( Get the maximum number of iterations that the Solver should use
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver21setIterationsPerPrintEm_docstring[] = R"CHIMERA_STRING( Set the number of iterations that should pass between printing progress to
 the terminal. Use 0 for no printing.
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver21getIterationsPerPrintEv_docstring[] = R"CHIMERA_STRING( Get the number of iterations that should pass between printing progress to
 the terminal. A value of 0 means there will be no printing.
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver12setOutStreamEPSo_docstring[] = R"CHIMERA_STRING( Set the output stream that prints the Solver's progress.
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver19setPrintFinalResultEb_docstring[] = R"CHIMERA_STRING( Set to true if the final result should be printed to the terminal
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver19getPrintFinalResultEv_docstring[] = R"CHIMERA_STRING( Returns true if the final result should be printed to the terminal
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer6Solver17setResultFileNameERKSs_docstring[] = R"CHIMERA_STRING( Set the name of the file that results should be printed to. Use an empty
 string to indicate that results should not be printed to a file.
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer6Solver17getResultFileNameEv_docstring[] = R"CHIMERA_STRING( Get the name of the file that results should be printed to. An empty
 string indicates that results should not be printed to a file.
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer6SolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Solver, ::boost::noncopyable >("Solver", _ZN4dart9optimizer6SolverE_docstring, boost::python::no_init)
.def("solve", [](dart::optimizer::Solver *self) -> bool { return self->solve(); }, _ZN4dart9optimizer6Solver5solveEv_docstring)
.def("getType", [](const dart::optimizer::Solver *self) -> std::string { return self->getType(); }, _ZNK4dart9optimizer6Solver7getTypeEv_docstring)
.def("clone", [](const dart::optimizer::Solver *self) -> std::shared_ptr<dart::optimizer::Solver> { return self->clone(); }, _ZNK4dart9optimizer6Solver5cloneEv_docstring)
.def("setProperties", [](dart::optimizer::Solver *self, const dart::optimizer::Solver::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart9optimizer6Solver13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getSolverProperties", [](const dart::optimizer::Solver *self) -> const dart::optimizer::Solver::Properties & { return self->getSolverProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer6Solver19getSolverPropertiesEv_docstring)
.def("copy", [](dart::optimizer::Solver *self, const dart::optimizer::Solver & _otherSolver) -> void { return self->copy(_otherSolver); }, _ZN4dart9optimizer6Solver4copyERKS1__docstring, (::boost::python::arg("_otherSolver")))
.def("setProblem", [](dart::optimizer::Solver *self, std::shared_ptr<dart::optimizer::Problem> _newProblem) -> void { return self->setProblem(_newProblem); }, _ZN4dart9optimizer6Solver10setProblemESt10shared_ptrINS0_7ProblemEE_docstring, (::boost::python::arg("_newProblem")))
.def("getProblem", [](const dart::optimizer::Solver *self) -> std::shared_ptr<dart::optimizer::Problem> { return self->getProblem(); }, _ZNK4dart9optimizer6Solver10getProblemEv_docstring)
.def("setTolerance", [](dart::optimizer::Solver *self, double _newTolerance) -> void { return self->setTolerance(_newTolerance); }, _ZN4dart9optimizer6Solver12setToleranceEd_docstring, (::boost::python::arg("_newTolerance")))
.def("getTolerance", [](const dart::optimizer::Solver *self) -> double { return self->getTolerance(); }, _ZNK4dart9optimizer6Solver12getToleranceEv_docstring)
.def("setNumMaxIterations", [](dart::optimizer::Solver *self, std::size_t _newMax) -> void { return self->setNumMaxIterations(_newMax); }, _ZN4dart9optimizer6Solver19setNumMaxIterationsEm_docstring, (::boost::python::arg("_newMax")))
.def("getNumMaxIterations", [](const dart::optimizer::Solver *self) -> std::size_t { return self->getNumMaxIterations(); }, _ZNK4dart9optimizer6Solver19getNumMaxIterationsEv_docstring)
.def("setIterationsPerPrint", [](dart::optimizer::Solver *self, std::size_t _newRatio) -> void { return self->setIterationsPerPrint(_newRatio); }, _ZN4dart9optimizer6Solver21setIterationsPerPrintEm_docstring, (::boost::python::arg("_newRatio")))
.def("getIterationsPerPrint", [](const dart::optimizer::Solver *self) -> std::size_t { return self->getIterationsPerPrint(); }, _ZNK4dart9optimizer6Solver21getIterationsPerPrintEv_docstring)
.def("setOutStream", [](dart::optimizer::Solver *self, std::ostream * _os) -> void { return self->setOutStream(_os); }, _ZN4dart9optimizer6Solver12setOutStreamEPSo_docstring, (::boost::python::arg("_os")))
.def("setPrintFinalResult", [](dart::optimizer::Solver *self, bool _print) -> void { return self->setPrintFinalResult(_print); }, _ZN4dart9optimizer6Solver19setPrintFinalResultEb_docstring, (::boost::python::arg("_print")))
.def("getPrintFinalResult", [](const dart::optimizer::Solver *self) -> bool { return self->getPrintFinalResult(); }, _ZNK4dart9optimizer6Solver19getPrintFinalResultEv_docstring)
.def("setResultFileName", [](dart::optimizer::Solver *self, const std::string & _resultFile) -> void { return self->setResultFileName(_resultFile); }, _ZN4dart9optimizer6Solver17setResultFileNameERKSs_docstring, (::boost::python::arg("_resultFile")))
.def("getResultFileName", [](const dart::optimizer::Solver *self) -> const std::string & { return self->getResultFileName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer6Solver17getResultFileNameEv_docstring)
;
}

/* footer */
