#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9optimizer7ProblemE()
{
::boost::python::class_<dart::optimizer::Problem, ::boost::noncopyable >("Problem", boost::python::no_init)
.def(::boost::python::init<std::size_t>((::boost::python::arg("_dim") = 0)))
.def("setDimension", static_cast<void (dart::optimizer::Problem::*)(std::size_t)>(&dart::optimizer::Problem::setDimension), (::boost::python::arg("_dim")))
.def("getDimension", static_cast<std::size_t (dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getDimension))
.def("setInitialGuess", static_cast<void (dart::optimizer::Problem::*)(const Eigen::VectorXd &)>(&dart::optimizer::Problem::setInitialGuess), (::boost::python::arg("_initGuess")))
.def("getInitialGuess", static_cast<const Eigen::VectorXd &(dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getInitialGuess), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("addSeed", static_cast<void (dart::optimizer::Problem::*)(const Eigen::VectorXd &)>(&dart::optimizer::Problem::addSeed), (::boost::python::arg("_seed")))
.def("getSeed", static_cast<const Eigen::VectorXd &(dart::optimizer::Problem::*)(std::size_t) const>(&dart::optimizer::Problem::getSeed), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index")))
.def("clearAllSeeds", static_cast<void (dart::optimizer::Problem::*)()>(&dart::optimizer::Problem::clearAllSeeds))
.def("setLowerBounds", static_cast<void (dart::optimizer::Problem::*)(const Eigen::VectorXd &)>(&dart::optimizer::Problem::setLowerBounds), (::boost::python::arg("_lb")))
.def("getLowerBounds", static_cast<const Eigen::VectorXd &(dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getLowerBounds), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setUpperBounds", static_cast<void (dart::optimizer::Problem::*)(const Eigen::VectorXd &)>(&dart::optimizer::Problem::setUpperBounds), (::boost::python::arg("_ub")))
.def("getUpperBounds", static_cast<const Eigen::VectorXd &(dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getUpperBounds), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setObjective", static_cast<void (dart::optimizer::Problem::*)(dart::optimizer::FunctionPtr)>(&dart::optimizer::Problem::setObjective), (::boost::python::arg("_obj")))
.def("getObjective", static_cast<dart::optimizer::FunctionPtr (dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getObjective))
.def("addEqConstraint", static_cast<void (dart::optimizer::Problem::*)(dart::optimizer::FunctionPtr)>(&dart::optimizer::Problem::addEqConstraint), (::boost::python::arg("_eqConst")))
.def("addIneqConstraint", static_cast<void (dart::optimizer::Problem::*)(dart::optimizer::FunctionPtr)>(&dart::optimizer::Problem::addIneqConstraint), (::boost::python::arg("_ineqConst")))
.def("getNumEqConstraints", static_cast<std::size_t (dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getNumEqConstraints))
.def("getNumIneqConstraints", static_cast<std::size_t (dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getNumIneqConstraints))
.def("getEqConstraint", static_cast<dart::optimizer::FunctionPtr (dart::optimizer::Problem::*)(std::size_t) const>(&dart::optimizer::Problem::getEqConstraint), (::boost::python::arg("_idx")))
.def("getIneqConstraint", static_cast<dart::optimizer::FunctionPtr (dart::optimizer::Problem::*)(std::size_t) const>(&dart::optimizer::Problem::getIneqConstraint), (::boost::python::arg("_idx")))
.def("removeEqConstraint", static_cast<void (dart::optimizer::Problem::*)(dart::optimizer::FunctionPtr)>(&dart::optimizer::Problem::removeEqConstraint), (::boost::python::arg("_eqConst")))
.def("removeIneqConstraint", static_cast<void (dart::optimizer::Problem::*)(dart::optimizer::FunctionPtr)>(&dart::optimizer::Problem::removeIneqConstraint), (::boost::python::arg("_ineqConst")))
.def("removeAllEqConstraints", static_cast<void (dart::optimizer::Problem::*)()>(&dart::optimizer::Problem::removeAllEqConstraints))
.def("removeAllIneqConstraints", static_cast<void (dart::optimizer::Problem::*)()>(&dart::optimizer::Problem::removeAllIneqConstraints))
.def("setOptimumValue", static_cast<void (dart::optimizer::Problem::*)(double)>(&dart::optimizer::Problem::setOptimumValue), (::boost::python::arg("_val")))
.def("getOptimumValue", static_cast<double (dart::optimizer::Problem::*)() const>(&dart::optimizer::Problem::getOptimumValue))
.def("setOptimalSolution", static_cast<void (dart::optimizer::Problem::*)(const Eigen::VectorXd &)>(&dart::optimizer::Problem::setOptimalSolution), (::boost::python::arg("_optParam")))
.def("getOptimalSolution", static_cast<const Eigen::VectorXd &(dart::optimizer::Problem::*)()>(&dart::optimizer::Problem::getOptimalSolution), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
