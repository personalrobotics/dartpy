#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9optimizer21GradientDescentSolver16UniquePropertiesE()
{
::boost::python::class_<dart::optimizer::GradientDescentSolver::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<double, std::size_t, std::size_t, double, double, double, Eigen::VectorXd, Eigen::VectorXd>((::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"), ::boost::python::arg("_perturbationStep"), ::boost::python::arg("_maxPerturbationFactor"), ::boost::python::arg("_maxRandomizationStep"), ::boost::python::arg("_defaultConstraintWeight"), ::boost::python::arg("_eqConstraintWeights"), ::boost::python::arg("_ineqConstraintWeights"))))
.def_readwrite("mStepSize", &dart::optimizer::GradientDescentSolver::UniqueProperties::mStepSize)
.def_readwrite("mMaxAttempts", &dart::optimizer::GradientDescentSolver::UniqueProperties::mMaxAttempts)
.def_readwrite("mPerturbationStep", &dart::optimizer::GradientDescentSolver::UniqueProperties::mPerturbationStep)
.def_readwrite("mMaxPerturbationFactor", &dart::optimizer::GradientDescentSolver::UniqueProperties::mMaxPerturbationFactor)
.def_readwrite("mMaxRandomizationStep", &dart::optimizer::GradientDescentSolver::UniqueProperties::mMaxRandomizationStep)
.def_readwrite("mDefaultConstraintWeight", &dart::optimizer::GradientDescentSolver::UniqueProperties::mDefaultConstraintWeight)
.def_readwrite("mEqConstraintWeights", &dart::optimizer::GradientDescentSolver::UniqueProperties::mEqConstraintWeights)
.def_readwrite("mIneqConstraintWeights", &dart::optimizer::GradientDescentSolver::UniqueProperties::mIneqConstraintWeights)
;
}

/* footer */
