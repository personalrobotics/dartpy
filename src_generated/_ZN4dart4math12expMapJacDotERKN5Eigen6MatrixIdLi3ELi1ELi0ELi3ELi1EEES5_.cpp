#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math12expMapJacDotERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("expMapJacDot", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::math::expMapJacDot), (::boost::python::arg("_expmap"), ::boost::python::arg("_qdot")))
;}

/* footer */
