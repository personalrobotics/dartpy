#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer11NloptSolverE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer11NloptSolver5solveEv_docstring[] = R"CHIMERA_STRING( Solve optimization problem
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer11NloptSolver7getTypeEv_docstring[] = R"CHIMERA_STRING( Get the type (implementation) of this Solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer11NloptSolver5cloneEv_docstring[] = R"CHIMERA_STRING( Create an identical clone of this Solver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer11NloptSolver4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another NloptSolver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer11NloptSolver12setAlgorithmEN5nlopt9algorithmE_docstring[] = R"CHIMERA_STRING( Set the algorithm that is to be used by the nlopt solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer11NloptSolver12getAlgorithmEv_docstring[] = R"CHIMERA_STRING( Get the algorithm that is to be used by the nlopt solver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer11NloptSolver20setNumMaxEvaluationsEm_docstring[] = R"CHIMERA_STRING( Set number of maximum evaluations
 Deprecated: Please use setNumMaxIterations() instead
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer11NloptSolver19getNumEvaluationMaxEv_docstring[] = R"CHIMERA_STRING( Get number of maximum evaluations
 Deprecated: Please use getNumMaxIterations() instead
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer11NloptSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::NloptSolver, ::boost::noncopyable, ::boost::python::bases<dart::optimizer::Solver > >("NloptSolver", _ZN4dart9optimizer11NloptSolverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _properties) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _properties, nlopt::algorithm _alg) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_properties, _alg); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"), ::boost::python::arg("_alg"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_problem); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, nlopt::algorithm _alg) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_problem, _alg); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_alg"))))
.def("solve", [](dart::optimizer::NloptSolver *self) -> bool { return self->solve(); }, _ZN4dart9optimizer11NloptSolver5solveEv_docstring)
.def("getLastConfiguration", [](const dart::optimizer::NloptSolver *self) -> Eigen::VectorXd { return self->getLastConfiguration(); })
.def("getType", [](const dart::optimizer::NloptSolver *self) -> std::string { return self->getType(); }, _ZNK4dart9optimizer11NloptSolver7getTypeEv_docstring)
.def("clone", [](const dart::optimizer::NloptSolver *self) -> std::shared_ptr<dart::optimizer::Solver> { return self->clone(); }, _ZNK4dart9optimizer11NloptSolver5cloneEv_docstring)
.def("copy", [](dart::optimizer::NloptSolver *self, const dart::optimizer::NloptSolver & _other) -> void { return self->copy(_other); }, _ZN4dart9optimizer11NloptSolver4copyERKS1__docstring, (::boost::python::arg("_other")))
.def("setAlgorithm", [](dart::optimizer::NloptSolver *self, nlopt::algorithm _alg) -> void { return self->setAlgorithm(_alg); }, _ZN4dart9optimizer11NloptSolver12setAlgorithmEN5nlopt9algorithmE_docstring, (::boost::python::arg("_alg")))
.def("getAlgorithm", [](const dart::optimizer::NloptSolver *self) -> nlopt::algorithm { return self->getAlgorithm(); }, _ZNK4dart9optimizer11NloptSolver12getAlgorithmEv_docstring)
.def("setNumMaxEvaluations", [](dart::optimizer::NloptSolver *self, std::size_t _numVal) -> void { return self->setNumMaxEvaluations(_numVal); }, _ZN4dart9optimizer11NloptSolver20setNumMaxEvaluationsEm_docstring, (::boost::python::arg("_numVal")))
.def("getNumEvaluationMax", [](const dart::optimizer::NloptSolver *self) -> std::size_t { return self->getNumEvaluationMax(); }, _ZNK4dart9optimizer11NloptSolver19getNumEvaluationMaxEv_docstring)
;
}

/* footer */
