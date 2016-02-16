#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math32computeClosestPointOnLineSegmentERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_S5_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("computeClosestPointOnLineSegment", static_cast<Eigen::Vector2d (*)(const Eigen::Vector2d &, const Eigen::Vector2d &, const Eigen::Vector2d &)>(&dart::math::computeClosestPointOnLineSegment), (::boost::python::arg("_p"), ::boost::python::arg("_s1"), ::boost::python::arg("_s2")))
;}

/* footer */
