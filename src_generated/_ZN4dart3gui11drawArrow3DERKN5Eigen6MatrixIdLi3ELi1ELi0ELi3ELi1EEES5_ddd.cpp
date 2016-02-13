#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui11drawArrow3DERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_ddd()
{
boost::python::def("drawArrow3D", static_cast<void (*)(const Eigen::Vector3d &, const Eigen::Vector3d &, const double, const double, const double)>(&dart::gui::drawArrow3D), (::boost::python::arg("_pt"), ::boost::python::arg("_dir"), ::boost::python::arg("_length"), ::boost::python::arg("_thickness"), ::boost::python::arg("_arrowThickness") = -1.000000e+00))
;}

/* footer */
