#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart3gui11drawArrow2DERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_d()
{
boost::python::def("drawArrow2D", static_cast<void (*)(const Eigen::Vector2d &, const Eigen::Vector2d &, double)>(&dart::gui::drawArrow2D), (::boost::python::arg("_pt"), ::boost::python::arg("_vec"), ::boost::python::arg("_thickness")))
;}

/* footer */
