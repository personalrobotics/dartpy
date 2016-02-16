#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils8toStringERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("toString", static_cast<std::string (*)(const Eigen::Vector3d &)>(&dart::utils::toString), (::boost::python::arg("v")))
;}

/* footer */
