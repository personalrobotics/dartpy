#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision16collideSphereBoxERKdRKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7_PSt6vectorINS0_7ContactESaISD_EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("collideSphereBox", static_cast<int (*)(const double &, const Eigen::Isometry3d &, const Eigen::Vector3d &, const Eigen::Isometry3d &, std::vector<dart::collision::Contact> *)>(&dart::collision::collideSphereBox), (::boost::python::arg("r0"), ::boost::python::arg("T0"), ::boost::python::arg("size1"), ::boost::python::arg("T1"), ::boost::python::arg("result")))
;}

/* footer */
