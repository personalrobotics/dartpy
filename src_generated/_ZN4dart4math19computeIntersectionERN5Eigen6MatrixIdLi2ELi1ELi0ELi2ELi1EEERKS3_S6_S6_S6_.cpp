#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math19computeIntersectionERN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKS3_S6_S6_S6_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("computeIntersection", static_cast<dart::math::Intersection_t (*)(Eigen::Vector2d &, const Eigen::Vector2d &, const Eigen::Vector2d &, const Eigen::Vector2d &, const Eigen::Vector2d &)>(&dart::math::computeIntersection), (::boost::python::arg("_intersectionPoint"), ::boost::python::arg("a1"), ::boost::python::arg("a2"), ::boost::python::arg("b1"), ::boost::python::arg("b2")))
;}

/* footer */
