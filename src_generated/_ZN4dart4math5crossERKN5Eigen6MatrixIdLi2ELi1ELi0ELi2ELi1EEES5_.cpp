#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5crossERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_()
{
boost::python::def("cross", static_cast<double (*)(const Eigen::Vector2d &, const Eigen::Vector2d &)>(&dart::math::cross), (::boost::python::arg("_v1"), ::boost::python::arg("_v2")))
;}

/* footer */
