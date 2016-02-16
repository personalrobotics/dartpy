#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9optimizer8FunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Function >("Function", boost::python::no_init)
.def(::boost::python::init<const std::string &>((::boost::python::arg("_name"))))
.def("setName", static_cast<void (dart::optimizer::Function::*)(const std::string &)>(&dart::optimizer::Function::setName), (::boost::python::arg("_newName")))
.def("getName", static_cast<const std::string &(dart::optimizer::Function::*)() const>(&dart::optimizer::Function::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("eval", static_cast<double (dart::optimizer::Function::*)(const Eigen::VectorXd &)>(&dart::optimizer::Function::eval), (::boost::python::arg("_x")))
.def("evalGradient", static_cast<void (dart::optimizer::Function::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd>)>(&dart::optimizer::Function::evalGradient), (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalGradient", static_cast<void (dart::optimizer::Function::*)(const Eigen::VectorXd &, Eigen::VectorXd &)>(&dart::optimizer::Function::evalGradient), (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", static_cast<void (dart::optimizer::Function::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor>)>(&dart::optimizer::Function::evalHessian), (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
;
}

/* footer */
