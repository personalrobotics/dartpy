#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9optimizer15ModularFunctionE()
{
::boost::python::class_<dart::optimizer::ModularFunction, ::boost::python::bases<dart::optimizer::Function > >("ModularFunction", boost::python::no_init)
.def(::boost::python::init<const std::string &>((::boost::python::arg("_name"))))
.def("eval", static_cast<double (dart::optimizer::ModularFunction::*)(const Eigen::VectorXd &)>(&dart::optimizer::ModularFunction::eval), (::boost::python::arg("_x")))
.def("evalGradient", static_cast<void (dart::optimizer::ModularFunction::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd>)>(&dart::optimizer::ModularFunction::evalGradient), (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", static_cast<void (dart::optimizer::ModularFunction::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor>)>(&dart::optimizer::ModularFunction::evalHessian), (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
.def("setCostFunction", static_cast<void (dart::optimizer::ModularFunction::*)(dart::optimizer::CostFunction)>(&dart::optimizer::ModularFunction::setCostFunction), (::boost::python::arg("_cost")))
.def("clearCostFunction", static_cast<void (dart::optimizer::ModularFunction::*)(bool)>(&dart::optimizer::ModularFunction::clearCostFunction), (::boost::python::arg("_printWarning") = true))
.def("setGradientFunction", static_cast<void (dart::optimizer::ModularFunction::*)(dart::optimizer::GradientFunction)>(&dart::optimizer::ModularFunction::setGradientFunction), (::boost::python::arg("_gradient")))
.def("clearGradientFunction", static_cast<void (dart::optimizer::ModularFunction::*)()>(&dart::optimizer::ModularFunction::clearGradientFunction))
.def("setHessianFunction", static_cast<void (dart::optimizer::ModularFunction::*)(dart::optimizer::HessianFunction)>(&dart::optimizer::ModularFunction::setHessianFunction), (::boost::python::arg("_hessian")))
.def("clearHessianFunction", static_cast<void (dart::optimizer::ModularFunction::*)()>(&dart::optimizer::ModularFunction::clearHessianFunction))
;
}

/* footer */
