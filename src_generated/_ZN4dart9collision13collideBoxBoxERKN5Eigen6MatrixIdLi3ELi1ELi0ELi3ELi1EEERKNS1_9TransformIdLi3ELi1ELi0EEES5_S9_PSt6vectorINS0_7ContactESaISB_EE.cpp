#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision13collideBoxBoxERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEERKNS1_9TransformIdLi3ELi1ELi0EEES5_S9_PSt6vectorINS0_7ContactESaISB_EE()
{
boost::python::def("collideBoxBox", static_cast<int (*)(const Eigen::Vector3d &, const Eigen::Isometry3d &, const Eigen::Vector3d &, const Eigen::Isometry3d &, std::vector<dart::collision::Contact> *)>(&dart::collision::collideBoxBox), (::boost::python::arg("size0"), ::boost::python::arg("T0"), ::boost::python::arg("size1"), ::boost::python::arg("T1"), ::boost::python::arg("result")))
;}

/* footer */
