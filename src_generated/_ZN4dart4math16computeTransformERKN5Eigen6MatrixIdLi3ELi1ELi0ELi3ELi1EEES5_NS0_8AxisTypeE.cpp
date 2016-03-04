#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math16computeTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_NS0_8AxisTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("computeTransform", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &, const Eigen::Vector3d &, dart::math::AxisType)>(&dart::math::computeTransform), (::boost::python::arg("axis"), ::boost::python::arg("translation"), ::boost::python::arg("axisType")))
;}

/* footer */
