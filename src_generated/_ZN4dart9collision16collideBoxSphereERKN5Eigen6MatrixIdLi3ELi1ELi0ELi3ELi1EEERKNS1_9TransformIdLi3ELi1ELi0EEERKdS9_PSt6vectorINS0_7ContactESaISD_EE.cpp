#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision16collideBoxSphereERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEERKNS1_9TransformIdLi3ELi1ELi0EEERKdS9_PSt6vectorINS0_7ContactESaISD_EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("collideBoxSphere", static_cast<int (*)(const Eigen::Vector3d &, const Eigen::Isometry3d &, const double &, const Eigen::Isometry3d &, std::vector<dart::collision::Contact> *)>(&dart::collision::collideBoxSphere), (::boost::python::arg("size0"), ::boost::python::arg("T0"), ::boost::python::arg("r1"), ::boost::python::arg("T1"), ::boost::python::arg("result")))
;}

/* footer */
