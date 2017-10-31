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

void _ZN4dart9optimizer15ModularFunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::ModularFunction, ::boost::python::bases<dart::optimizer::Function > >("ModularFunction", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::ModularFunction * { return new dart::optimizer::ModularFunction(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::optimizer::ModularFunction * { return new dart::optimizer::ModularFunction(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("eval", [](dart::optimizer::ModularFunction *self, const Eigen::VectorXd & _x) -> double { return self->eval(_x); }, (::boost::python::arg("_x")))
.def("evalGradient", [](dart::optimizer::ModularFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", [](dart::optimizer::ModularFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor> _Hess) -> void { return self->evalHessian(_x, _Hess); }, (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
.def("setCostFunction", [](dart::optimizer::ModularFunction *self, dart::optimizer::CostFunction _cost) -> void { return self->setCostFunction(_cost); }, (::boost::python::arg("_cost")))
.def("clearCostFunction", [](dart::optimizer::ModularFunction *self) -> void { return self->clearCostFunction(); })
.def("clearCostFunction", [](dart::optimizer::ModularFunction *self, bool _printWarning) -> void { return self->clearCostFunction(_printWarning); }, (::boost::python::arg("_printWarning")))
.def("setGradientFunction", [](dart::optimizer::ModularFunction *self, dart::optimizer::GradientFunction _gradient) -> void { return self->setGradientFunction(_gradient); }, (::boost::python::arg("_gradient")))
.def("clearGradientFunction", [](dart::optimizer::ModularFunction *self) -> void { return self->clearGradientFunction(); })
.def("setHessianFunction", [](dart::optimizer::ModularFunction *self, dart::optimizer::HessianFunction _hessian) -> void { return self->setHessianFunction(_hessian); }, (::boost::python::arg("_hessian")))
.def("clearHessianFunction", [](dart::optimizer::ModularFunction *self) -> void { return self->clearHessianFunction(); })
;
}

/* footer */
