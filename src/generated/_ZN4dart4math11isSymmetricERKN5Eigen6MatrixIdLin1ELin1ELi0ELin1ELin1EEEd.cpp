#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math11isSymmetricERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("isSymmetric", [](const Eigen::MatrixXd & _m) -> bool { return dart::math::isSymmetric(_m); }, (::boost::python::arg("_m")));
::boost::python::def("isSymmetric", [](const Eigen::MatrixXd & _m, double _tol) -> bool { return dart::math::isSymmetric(_m, _tol); }, (::boost::python::arg("_m"), ::boost::python::arg("_tol")));

}

/* footer */
