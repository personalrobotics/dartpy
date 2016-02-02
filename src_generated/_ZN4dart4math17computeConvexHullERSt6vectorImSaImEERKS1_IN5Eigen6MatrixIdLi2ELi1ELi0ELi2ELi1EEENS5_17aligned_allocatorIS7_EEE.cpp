#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math17computeConvexHullERSt6vectorImSaImEERKS1_IN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS5_17aligned_allocatorIS7_EEE()
{
boost::python::def("computeConvexHull", static_cast<dart::math::SupportPolygon (*)(std::vector<std::size_t> &, const dart::math::SupportPolygon &)>(&dart::math::computeConvexHull), (::boost::python::arg("_originalIndices"), ::boost::python::arg("_points")))
;}

/* footer */
