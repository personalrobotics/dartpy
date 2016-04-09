#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer7ProblemE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem12setDimensionEm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem12getDimensionEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem15setInitialGuessERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem15getInitialGuessEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem7addSeedERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem7getSeedEm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem7getSeedEm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem8getSeedsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem8getSeedsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem13clearAllSeedsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem14setLowerBoundsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem14getLowerBoundsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem14setUpperBoundsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem14getUpperBoundsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem12setObjectiveESt10shared_ptrINS0_8FunctionEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem12getObjectiveEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem15addEqConstraintESt10shared_ptrINS0_8FunctionEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem17addIneqConstraintESt10shared_ptrINS0_8FunctionEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem19getNumEqConstraintsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem21getNumIneqConstraintsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem15getEqConstraintEm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem17getIneqConstraintEm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem18removeEqConstraintESt10shared_ptrINS0_8FunctionEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem20removeIneqConstraintESt10shared_ptrINS0_8FunctionEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem22removeAllEqConstraintsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem24removeAllIneqConstraintsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem15setOptimumValueEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer7Problem15getOptimumValueEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem18setOptimalSolutionERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer7Problem18getOptimalSolutionEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer7ProblemE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Problem, ::boost::noncopyable >("Problem", _ZN4dart9optimizer7ProblemE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::Problem * { return new dart::optimizer::Problem(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](std::size_t _dim) -> dart::optimizer::Problem * { return new dart::optimizer::Problem(_dim); }, ::boost::python::default_call_policies(), (::boost::python::arg("_dim"))))
.def("setDimension", [](dart::optimizer::Problem *self, std::size_t _dim) -> void { return self->setDimension(_dim); }, _ZN4dart9optimizer7Problem12setDimensionEm_docstring, (::boost::python::arg("_dim")))
.def("getDimension", [](const dart::optimizer::Problem *self) -> std::size_t { return self->getDimension(); }, _ZNK4dart9optimizer7Problem12getDimensionEv_docstring)
.def("setInitialGuess", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _initGuess) -> void { return self->setInitialGuess(_initGuess); }, _ZN4dart9optimizer7Problem15setInitialGuessERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_initGuess")))
.def("getInitialGuess", [](const dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getInitialGuess(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer7Problem15getInitialGuessEv_docstring)
.def("addSeed", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _seed) -> void { return self->addSeed(_seed); }, _ZN4dart9optimizer7Problem7addSeedERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_seed")))
.def("getSeed", [](dart::optimizer::Problem *self, std::size_t _index) -> Eigen::VectorXd & { return self->getSeed(_index); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >(), _ZN4dart9optimizer7Problem7getSeedEm_docstring, (::boost::python::arg("_index")))
.def("getSeed", [](const dart::optimizer::Problem *self, std::size_t _index) -> const Eigen::VectorXd & { return self->getSeed(_index); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer7Problem7getSeedEm_docstring, (::boost::python::arg("_index")))
.def("getSeeds", [](dart::optimizer::Problem *self) -> std::vector<Eigen::VectorXd> & { return self->getSeeds(); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >(), _ZN4dart9optimizer7Problem8getSeedsEv_docstring)
.def("getSeeds", [](const dart::optimizer::Problem *self) -> const std::vector<Eigen::VectorXd> & { return self->getSeeds(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer7Problem8getSeedsEv_docstring)
.def("clearAllSeeds", [](dart::optimizer::Problem *self) -> void { return self->clearAllSeeds(); }, _ZN4dart9optimizer7Problem13clearAllSeedsEv_docstring)
.def("setLowerBounds", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _lb) -> void { return self->setLowerBounds(_lb); }, _ZN4dart9optimizer7Problem14setLowerBoundsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_lb")))
.def("getLowerBounds", [](const dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getLowerBounds(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer7Problem14getLowerBoundsEv_docstring)
.def("setUpperBounds", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _ub) -> void { return self->setUpperBounds(_ub); }, _ZN4dart9optimizer7Problem14setUpperBoundsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_ub")))
.def("getUpperBounds", [](const dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getUpperBounds(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer7Problem14getUpperBoundsEv_docstring)
.def("setObjective", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _obj) -> void { return self->setObjective(_obj); }, _ZN4dart9optimizer7Problem12setObjectiveESt10shared_ptrINS0_8FunctionEE_docstring, (::boost::python::arg("_obj")))
.def("getObjective", [](const dart::optimizer::Problem *self) -> dart::optimizer::FunctionPtr { return self->getObjective(); }, _ZNK4dart9optimizer7Problem12getObjectiveEv_docstring)
.def("addEqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _eqConst) -> void { return self->addEqConstraint(_eqConst); }, _ZN4dart9optimizer7Problem15addEqConstraintESt10shared_ptrINS0_8FunctionEE_docstring, (::boost::python::arg("_eqConst")))
.def("addIneqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _ineqConst) -> void { return self->addIneqConstraint(_ineqConst); }, _ZN4dart9optimizer7Problem17addIneqConstraintESt10shared_ptrINS0_8FunctionEE_docstring, (::boost::python::arg("_ineqConst")))
.def("getNumEqConstraints", [](const dart::optimizer::Problem *self) -> std::size_t { return self->getNumEqConstraints(); }, _ZNK4dart9optimizer7Problem19getNumEqConstraintsEv_docstring)
.def("getNumIneqConstraints", [](const dart::optimizer::Problem *self) -> std::size_t { return self->getNumIneqConstraints(); }, _ZNK4dart9optimizer7Problem21getNumIneqConstraintsEv_docstring)
.def("getEqConstraint", [](const dart::optimizer::Problem *self, std::size_t _idx) -> dart::optimizer::FunctionPtr { return self->getEqConstraint(_idx); }, _ZNK4dart9optimizer7Problem15getEqConstraintEm_docstring, (::boost::python::arg("_idx")))
.def("getIneqConstraint", [](const dart::optimizer::Problem *self, std::size_t _idx) -> dart::optimizer::FunctionPtr { return self->getIneqConstraint(_idx); }, _ZNK4dart9optimizer7Problem17getIneqConstraintEm_docstring, (::boost::python::arg("_idx")))
.def("removeEqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _eqConst) -> void { return self->removeEqConstraint(_eqConst); }, _ZN4dart9optimizer7Problem18removeEqConstraintESt10shared_ptrINS0_8FunctionEE_docstring, (::boost::python::arg("_eqConst")))
.def("removeIneqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _ineqConst) -> void { return self->removeIneqConstraint(_ineqConst); }, _ZN4dart9optimizer7Problem20removeIneqConstraintESt10shared_ptrINS0_8FunctionEE_docstring, (::boost::python::arg("_ineqConst")))
.def("removeAllEqConstraints", [](dart::optimizer::Problem *self) -> void { return self->removeAllEqConstraints(); }, _ZN4dart9optimizer7Problem22removeAllEqConstraintsEv_docstring)
.def("removeAllIneqConstraints", [](dart::optimizer::Problem *self) -> void { return self->removeAllIneqConstraints(); }, _ZN4dart9optimizer7Problem24removeAllIneqConstraintsEv_docstring)
.def("setOptimumValue", [](dart::optimizer::Problem *self, double _val) -> void { return self->setOptimumValue(_val); }, _ZN4dart9optimizer7Problem15setOptimumValueEd_docstring, (::boost::python::arg("_val")))
.def("getOptimumValue", [](const dart::optimizer::Problem *self) -> double { return self->getOptimumValue(); }, _ZNK4dart9optimizer7Problem15getOptimumValueEv_docstring)
.def("setOptimalSolution", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _optParam) -> void { return self->setOptimalSolution(_optParam); }, _ZN4dart9optimizer7Problem18setOptimalSolutionERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_optParam")))
.def("getOptimalSolution", [](dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getOptimalSolution(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart9optimizer7Problem18getOptimalSolutionEv_docstring)
;
}

/* footer */
