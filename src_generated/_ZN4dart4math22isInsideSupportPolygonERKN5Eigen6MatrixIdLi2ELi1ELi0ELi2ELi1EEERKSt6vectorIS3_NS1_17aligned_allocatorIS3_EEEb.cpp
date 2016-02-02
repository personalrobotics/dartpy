#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math22isInsideSupportPolygonERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS3_NS1_17aligned_allocatorIS3_EEEb()
{
boost::python::def("isInsideSupportPolygon", static_cast<bool (*)(const Eigen::Vector2d &, const dart::math::SupportPolygon &, bool)>(&dart::math::isInsideSupportPolygon), (::boost::python::arg("_p"), ::boost::python::arg("_support"), ::boost::python::arg("_includeEdge") = true))
;}

/* footer */
