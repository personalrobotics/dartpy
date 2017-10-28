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

void _ZN4dart9optimizer11NloptSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::NloptSolver, ::boost::noncopyable, ::boost::python::bases<dart::optimizer::Solver > >("NloptSolver", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _properties) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _properties, nlopt::algorithm _alg) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_properties, _alg); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"), ::boost::python::arg("_alg"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_problem); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem, nlopt::algorithm _alg) -> dart::optimizer::NloptSolver * { return new dart::optimizer::NloptSolver(_problem, _alg); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"), ::boost::python::arg("_alg"))))
.def("solve", [](dart::optimizer::NloptSolver *self) -> bool { return self->solve(); })
.def("getLastConfiguration", [](const dart::optimizer::NloptSolver *self) -> Eigen::VectorXd { return self->getLastConfiguration(); })
.def("getType", [](const dart::optimizer::NloptSolver *self) -> std::string { return self->getType(); })
.def("clone", [](const dart::optimizer::NloptSolver *self) -> std::shared_ptr<dart::optimizer::Solver> { return self->clone(); })
.def("copy", [](dart::optimizer::NloptSolver *self, const dart::optimizer::NloptSolver & _other) -> void { return self->copy(_other); }, (::boost::python::arg("_other")))
.def("setAlgorithm", [](dart::optimizer::NloptSolver *self, nlopt::algorithm _alg) -> void { return self->setAlgorithm(_alg); }, (::boost::python::arg("_alg")))
.def("getAlgorithm", [](const dart::optimizer::NloptSolver *self) -> nlopt::algorithm { return self->getAlgorithm(); })
;
}

/* footer */
