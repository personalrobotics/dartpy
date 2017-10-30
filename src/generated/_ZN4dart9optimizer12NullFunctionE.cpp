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

void _ZN4dart9optimizer12NullFunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::NullFunction, ::boost::python::bases<dart::optimizer::Function > >("NullFunction", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::NullFunction * { return new dart::optimizer::NullFunction(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::optimizer::NullFunction * { return new dart::optimizer::NullFunction(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("eval", [](dart::optimizer::NullFunction *self, const Eigen::VectorXd & _arg0_) -> double { return self->eval(_arg0_); }, (::boost::python::arg("_arg0_")))
.def("evalGradient", [](dart::optimizer::NullFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", [](dart::optimizer::NullFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor> _Hess) -> void { return self->evalHessian(_x, _Hess); }, (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
;
}

/* footer */
