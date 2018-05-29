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

void _ZN4dart9optimizer6SolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Solver, ::boost::noncopyable >("Solver", boost::python::no_init)
.def("solve", [](dart::optimizer::Solver *self) -> bool { return self->solve(); })
.def("getType", [](const dart::optimizer::Solver *self) -> std::string { return self->getType(); })
.def("clone", [](const dart::optimizer::Solver *self) -> std::shared_ptr<dart::optimizer::Solver> { return self->clone(); })
.def("setProperties", [](dart::optimizer::Solver *self, const dart::optimizer::Solver::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("getSolverProperties", [](const dart::optimizer::Solver *self) -> const dart::optimizer::Solver::Properties & { return self->getSolverProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("copy", [](dart::optimizer::Solver *self, const dart::optimizer::Solver & _otherSolver) -> void { return self->copy(_otherSolver); }, (::boost::python::arg("_otherSolver")))
.def("setProblem", [](dart::optimizer::Solver *self, std::shared_ptr<dart::optimizer::Problem> _newProblem) -> void { return self->setProblem(_newProblem); }, (::boost::python::arg("_newProblem")))
.def("getProblem", [](const dart::optimizer::Solver *self) -> std::shared_ptr<dart::optimizer::Problem> { return self->getProblem(); })
.def("setTolerance", [](dart::optimizer::Solver *self, double _newTolerance) -> void { return self->setTolerance(_newTolerance); }, (::boost::python::arg("_newTolerance")))
.def("getTolerance", [](const dart::optimizer::Solver *self) -> double { return self->getTolerance(); })
.def("setNumMaxIterations", [](dart::optimizer::Solver *self, std::size_t _newMax) -> void { return self->setNumMaxIterations(_newMax); }, (::boost::python::arg("_newMax")))
.def("getNumMaxIterations", [](const dart::optimizer::Solver *self) -> std::size_t { return self->getNumMaxIterations(); })
.def("setIterationsPerPrint", [](dart::optimizer::Solver *self, std::size_t _newRatio) -> void { return self->setIterationsPerPrint(_newRatio); }, (::boost::python::arg("_newRatio")))
.def("getIterationsPerPrint", [](const dart::optimizer::Solver *self) -> std::size_t { return self->getIterationsPerPrint(); })
.def("setOutStream", [](dart::optimizer::Solver *self, std::ostream * _os) -> void { return self->setOutStream(_os); }, (::boost::python::arg("_os")))
.def("setPrintFinalResult", [](dart::optimizer::Solver *self, bool _print) -> void { return self->setPrintFinalResult(_print); }, (::boost::python::arg("_print")))
.def("getPrintFinalResult", [](const dart::optimizer::Solver *self) -> bool { return self->getPrintFinalResult(); })
.def("setResultFileName", [](dart::optimizer::Solver *self, const std::string & _resultFile) -> void { return self->setResultFileName(_resultFile); }, (::boost::python::arg("_resultFile")))
.def("getResultFileName", [](const dart::optimizer::Solver *self) -> const std::string & { return self->getResultFileName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
