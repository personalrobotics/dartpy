#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math19getFrameOriginAxisZERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_()
{
boost::python::def("getFrameOriginAxisZ", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::math::getFrameOriginAxisZ), (::boost::python::arg("_origin"), ::boost::python::arg("_axisZ")))
;}

/* footer */
