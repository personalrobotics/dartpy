#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5isInfERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("isInf", static_cast<bool (*)(const Eigen::MatrixXd &)>(&dart::math::isInf), (::boost::python::arg("_m")))
;}

/* footer */
