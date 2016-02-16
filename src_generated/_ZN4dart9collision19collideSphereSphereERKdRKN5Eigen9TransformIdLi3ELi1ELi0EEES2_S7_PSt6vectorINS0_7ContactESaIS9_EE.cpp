#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision19collideSphereSphereERKdRKN5Eigen9TransformIdLi3ELi1ELi0EEES2_S7_PSt6vectorINS0_7ContactESaIS9_EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("collideSphereSphere", static_cast<int (*)(const double &, const Eigen::Isometry3d &, const double &, const Eigen::Isometry3d &, std::vector<dart::collision::Contact> *)>(&dart::collision::collideSphereSphere), (::boost::python::arg("_r0"), ::boost::python::arg("c0"), ::boost::python::arg("_r1"), ::boost::python::arg("c1"), ::boost::python::arg("result")))
;}

/* footer */
