#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math35computeClosestPointOnSupportPolygonERmS1_RKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEERKSt6vectorIS4_NS2_17aligned_allocatorIS4_EEE()
{
boost::python::def("computeClosestPointOnSupportPolygon", static_cast<Eigen::Vector2d (*)(std::size_t &, std::size_t &, const Eigen::Vector2d &, const dart::math::SupportPolygon &)>(&dart::math::computeClosestPointOnSupportPolygon), (::boost::python::arg("_index1"), ::boost::python::arg("_index2"), ::boost::python::arg("_p"), ::boost::python::arg("_support")))
;}

/* footer */
