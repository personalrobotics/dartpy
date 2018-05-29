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

void _ZN4dart9optimizer8FunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Function, ::boost::noncopyable >("Function", boost::python::no_init)
.def("setName", [](dart::optimizer::Function *self, const std::string & _newName) -> void { return self->setName(_newName); }, (::boost::python::arg("_newName")))
.def("getName", [](const dart::optimizer::Function *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("eval", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x) -> double { return self->eval(_x); }, (::boost::python::arg("_x")))
.def("evalGradient", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalGradient", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x, Eigen::VectorXd & _grad) -> void { return self->evalGradient(_x, _grad); }, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor> _Hess) -> void { return self->evalHessian(_x, _Hess); }, (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
;
}

/* footer */
