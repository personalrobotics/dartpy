#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math17makeSkewSymmetricERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("makeSkewSymmetric", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &)>(&dart::math::makeSkewSymmetric), (::boost::python::arg("_v")))
;}

/* footer */
