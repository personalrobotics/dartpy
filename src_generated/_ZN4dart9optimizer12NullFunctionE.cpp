#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9optimizer12NullFunctionE()
{
::boost::python::class_<dart::optimizer::NullFunction, ::boost::python::bases<dart::optimizer::Function > >("NullFunction", boost::python::no_init)
.def(::boost::python::init<const std::string &>((::boost::python::arg("_name"))))
.def("eval", static_cast<double (dart::optimizer::NullFunction::*)(const Eigen::VectorXd &)>(&dart::optimizer::NullFunction::eval), (::boost::python::arg("")))
.def("evalGradient", static_cast<void (dart::optimizer::NullFunction::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd>)>(&dart::optimizer::NullFunction::evalGradient), (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", static_cast<void (dart::optimizer::NullFunction::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor>)>(&dart::optimizer::NullFunction::evalHessian), (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
;
}

/* footer */
