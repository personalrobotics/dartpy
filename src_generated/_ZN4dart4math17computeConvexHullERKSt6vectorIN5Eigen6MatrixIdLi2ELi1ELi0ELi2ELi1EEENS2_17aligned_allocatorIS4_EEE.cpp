#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math17computeConvexHullERKSt6vectorIN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEENS2_17aligned_allocatorIS4_EEE()
{
boost::python::def("computeConvexHull", static_cast<dart::math::SupportPolygon (*)(const dart::math::SupportPolygon &)>(&dart::math::computeConvexHull), (::boost::python::arg("_points")))
;}

/* footer */
