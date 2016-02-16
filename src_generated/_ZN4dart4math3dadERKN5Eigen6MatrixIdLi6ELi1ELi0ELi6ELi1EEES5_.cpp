#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math3dadERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("dad", static_cast<Eigen::Vector6d (*)(const Eigen::Vector6d &, const Eigen::Vector6d &)>(&dart::math::dad), (::boost::python::arg("_s"), ::boost::python::arg("_t")))
;}

/* footer */
