#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision21collideCylinderSphereERKdS2_RKN5Eigen9TransformIdLi3ELi1ELi0EEES2_S7_PSt6vectorINS0_7ContactESaIS9_EE()
{
boost::python::def("collideCylinderSphere", static_cast<int (*)(const double &, const double &, const Eigen::Isometry3d &, const double &, const Eigen::Isometry3d &, std::vector<dart::collision::Contact> *)>(&dart::collision::collideCylinderSphere), (::boost::python::arg("cyl_rad"), ::boost::python::arg("half_height"), ::boost::python::arg("T0"), ::boost::python::arg("sphere_rad"), ::boost::python::arg("T1"), ::boost::python::arg("result")))
;}

/* footer */
