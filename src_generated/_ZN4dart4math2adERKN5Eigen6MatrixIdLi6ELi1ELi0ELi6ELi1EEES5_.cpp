#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math2adERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("ad", static_cast<Eigen::Vector6d (*)(const Eigen::Vector6d &, const Eigen::Vector6d &)>(&dart::math::ad), (::boost::python::arg("_X"), ::boost::python::arg("_Y")))
;}

/* footer */
