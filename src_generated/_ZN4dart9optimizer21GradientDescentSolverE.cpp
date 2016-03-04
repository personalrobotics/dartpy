#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9optimizer21GradientDescentSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::GradientDescentSolver, ::boost::noncopyable, ::boost::python::bases<dart::optimizer::Solver > >("GradientDescentSolver", boost::python::no_init)
.def(::boost::python::init<const dart::optimizer::GradientDescentSolver::Properties &>((::boost::python::arg("_properties"))))
.def(::boost::python::init<std::shared_ptr<dart::optimizer::Problem>>((::boost::python::arg("_problem"))))
.def("solve", static_cast<bool (dart::optimizer::GradientDescentSolver::*)()>(&dart::optimizer::GradientDescentSolver::solve))
.def("getLastConfiguration", static_cast<Eigen::VectorXd (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getLastConfiguration))
.def("getType", static_cast<std::string (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getType))
.def("clone", static_cast<std::shared_ptr<dart::optimizer::Solver> (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::clone))
.def("setProperties", static_cast<void (dart::optimizer::GradientDescentSolver::*)(const dart::optimizer::GradientDescentSolver::Properties &)>(&dart::optimizer::GradientDescentSolver::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::optimizer::GradientDescentSolver::*)(const dart::optimizer::GradientDescentSolver::UniqueProperties &)>(&dart::optimizer::GradientDescentSolver::setProperties), (::boost::python::arg("_properties")))
.def("getGradientDescentProperties", static_cast<dart::optimizer::GradientDescentSolver::Properties (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getGradientDescentProperties))
.def("copy", static_cast<void (dart::optimizer::GradientDescentSolver::*)(const dart::optimizer::GradientDescentSolver &)>(&dart::optimizer::GradientDescentSolver::copy), (::boost::python::arg("_other")))
.def("setStepSize", static_cast<void (dart::optimizer::GradientDescentSolver::*)(double)>(&dart::optimizer::GradientDescentSolver::setStepSize), (::boost::python::arg("_newMultiplier")))
.def("getStepSize", static_cast<double (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getStepSize))
.def("setMaxAttempts", static_cast<void (dart::optimizer::GradientDescentSolver::*)(std::size_t)>(&dart::optimizer::GradientDescentSolver::setMaxAttempts), (::boost::python::arg("_maxAttempts")))
.def("getMaxAttempts", static_cast<std::size_t (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getMaxAttempts))
.def("setPerturbationStep", static_cast<void (dart::optimizer::GradientDescentSolver::*)(std::size_t)>(&dart::optimizer::GradientDescentSolver::setPerturbationStep), (::boost::python::arg("_step")))
.def("getPerturbationStep", static_cast<std::size_t (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getPerturbationStep))
.def("setMaxPerturbationFactor", static_cast<void (dart::optimizer::GradientDescentSolver::*)(double)>(&dart::optimizer::GradientDescentSolver::setMaxPerturbationFactor), (::boost::python::arg("_factor")))
.def("getMaxPerturbationFactor", static_cast<double (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getMaxPerturbationFactor))
.def("setDefaultConstraintWeight", static_cast<void (dart::optimizer::GradientDescentSolver::*)(double)>(&dart::optimizer::GradientDescentSolver::setDefaultConstraintWeight), (::boost::python::arg("_newDefault")))
.def("getDefaultConstraintWeight", static_cast<double (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getDefaultConstraintWeight))
.def("getEqConstraintWeights", static_cast<Eigen::VectorXd &(dart::optimizer::GradientDescentSolver::*)()>(&dart::optimizer::GradientDescentSolver::getEqConstraintWeights), ::boost::python::return_value_policy<boost::python::copy_non_const_reference >())
.def("getEqConstraintWeights", static_cast<const Eigen::VectorXd &(dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getEqConstraintWeights), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getIneqConstraintWeights", static_cast<Eigen::VectorXd &(dart::optimizer::GradientDescentSolver::*)()>(&dart::optimizer::GradientDescentSolver::getIneqConstraintWeights), ::boost::python::return_value_policy<boost::python::copy_non_const_reference >())
.def("getIneqConstraintWeights", static_cast<const Eigen::VectorXd &(dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getIneqConstraintWeights), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("randomizeConfiguration", static_cast<void (dart::optimizer::GradientDescentSolver::*)(Eigen::VectorXd &)>(&dart::optimizer::GradientDescentSolver::randomizeConfiguration), (::boost::python::arg("_x")))
.def("clampToBoundary", static_cast<void (dart::optimizer::GradientDescentSolver::*)(Eigen::VectorXd &)>(&dart::optimizer::GradientDescentSolver::clampToBoundary), (::boost::python::arg("_x")))
.def("getLastNumIterations", static_cast<std::size_t (dart::optimizer::GradientDescentSolver::*)() const>(&dart::optimizer::GradientDescentSolver::getLastNumIterations))
.add_static_property("Type", ::boost::python::make_getter(dart::optimizer::GradientDescentSolver::Type))
;
}

/* footer */
