#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision19collideSphereSphereERKdRKN5Eigen9TransformIdLi3ELi1ELi0EEES2_S7_PSt6vectorINS0_7ContactESaIS9_EE()
{
boost::python::def("collideSphereSphere", static_cast<int (*)(const double &, const Eigen::Isometry3d &, const double &, const Eigen::Isometry3d &, std::vector<dart::collision::Contact> *)>(&dart::collision::collideSphereSphere), (::boost::python::arg("_r0"), ::boost::python::arg("c0"), ::boost::python::arg("_r1"), ::boost::python::arg("c1"), ::boost::python::arg("result")))
;}

/* footer */
