#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math9expToQuatERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("expToQuat", static_cast<Eigen::Quaterniond (*)(const Eigen::Vector3d &)>(&dart::math::expToQuat), (::boost::python::arg("_v")))
;}

/* footer */
