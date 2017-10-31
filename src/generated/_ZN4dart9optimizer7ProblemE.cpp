#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart9optimizer7ProblemE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Problem, ::boost::noncopyable >("Problem", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::Problem * { return new dart::optimizer::Problem(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](std::size_t _dim) -> dart::optimizer::Problem * { return new dart::optimizer::Problem(_dim); }, ::boost::python::default_call_policies(), (::boost::python::arg("_dim"))))
.def("setDimension", [](dart::optimizer::Problem *self, std::size_t _dim) -> void { return self->setDimension(_dim); }, (::boost::python::arg("_dim")))
.def("getDimension", [](const dart::optimizer::Problem *self) -> std::size_t { return self->getDimension(); })
.def("setInitialGuess", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _initGuess) -> void { return self->setInitialGuess(_initGuess); }, (::boost::python::arg("_initGuess")))
.def("getInitialGuess", [](const dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getInitialGuess(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("addSeed", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _seed) -> void { return self->addSeed(_seed); }, (::boost::python::arg("_seed")))
.def("getSeed", [](dart::optimizer::Problem *self, std::size_t _index) -> Eigen::VectorXd & { return self->getSeed(_index); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >(), (::boost::python::arg("_index")))
.def("getSeed", [](const dart::optimizer::Problem *self, std::size_t _index) -> const Eigen::VectorXd & { return self->getSeed(_index); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index")))
.def("getSeeds", [](dart::optimizer::Problem *self) -> std::vector<Eigen::VectorXd> & { return self->getSeeds(); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >())
.def("getSeeds", [](const dart::optimizer::Problem *self) -> const std::vector<Eigen::VectorXd> & { return self->getSeeds(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearAllSeeds", [](dart::optimizer::Problem *self) -> void { return self->clearAllSeeds(); })
.def("setLowerBounds", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _lb) -> void { return self->setLowerBounds(_lb); }, (::boost::python::arg("_lb")))
.def("getLowerBounds", [](const dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getLowerBounds(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setUpperBounds", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _ub) -> void { return self->setUpperBounds(_ub); }, (::boost::python::arg("_ub")))
.def("getUpperBounds", [](const dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getUpperBounds(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setObjective", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _obj) -> void { return self->setObjective(_obj); }, (::boost::python::arg("_obj")))
.def("getObjective", [](const dart::optimizer::Problem *self) -> dart::optimizer::FunctionPtr { return self->getObjective(); })
.def("addEqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _eqConst) -> void { return self->addEqConstraint(_eqConst); }, (::boost::python::arg("_eqConst")))
.def("addIneqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _ineqConst) -> void { return self->addIneqConstraint(_ineqConst); }, (::boost::python::arg("_ineqConst")))
.def("getNumEqConstraints", [](const dart::optimizer::Problem *self) -> std::size_t { return self->getNumEqConstraints(); })
.def("getNumIneqConstraints", [](const dart::optimizer::Problem *self) -> std::size_t { return self->getNumIneqConstraints(); })
.def("getEqConstraint", [](const dart::optimizer::Problem *self, std::size_t _idx) -> dart::optimizer::FunctionPtr { return self->getEqConstraint(_idx); }, (::boost::python::arg("_idx")))
.def("getIneqConstraint", [](const dart::optimizer::Problem *self, std::size_t _idx) -> dart::optimizer::FunctionPtr { return self->getIneqConstraint(_idx); }, (::boost::python::arg("_idx")))
.def("removeEqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _eqConst) -> void { return self->removeEqConstraint(_eqConst); }, (::boost::python::arg("_eqConst")))
.def("removeIneqConstraint", [](dart::optimizer::Problem *self, dart::optimizer::FunctionPtr _ineqConst) -> void { return self->removeIneqConstraint(_ineqConst); }, (::boost::python::arg("_ineqConst")))
.def("removeAllEqConstraints", [](dart::optimizer::Problem *self) -> void { return self->removeAllEqConstraints(); })
.def("removeAllIneqConstraints", [](dart::optimizer::Problem *self) -> void { return self->removeAllIneqConstraints(); })
.def("setOptimumValue", [](dart::optimizer::Problem *self, double _val) -> void { return self->setOptimumValue(_val); }, (::boost::python::arg("_val")))
.def("getOptimumValue", [](const dart::optimizer::Problem *self) -> double { return self->getOptimumValue(); })
.def("setOptimalSolution", [](dart::optimizer::Problem *self, const Eigen::VectorXd & _optParam) -> void { return self->setOptimalSolution(_optParam); }, (::boost::python::arg("_optParam")))
.def("getOptimalSolution", [](dart::optimizer::Problem *self) -> const Eigen::VectorXd & { return self->getOptimalSolution(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
