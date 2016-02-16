#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6expMapERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("expMap", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector6d &)>(&dart::math::expMap), (::boost::python::arg("_S")))
;}

/* footer */
