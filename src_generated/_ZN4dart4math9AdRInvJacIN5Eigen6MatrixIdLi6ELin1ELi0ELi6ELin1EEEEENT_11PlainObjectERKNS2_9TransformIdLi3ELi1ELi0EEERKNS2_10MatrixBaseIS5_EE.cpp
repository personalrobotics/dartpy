#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math9AdRInvJacIN5Eigen6MatrixIdLi6ELin1ELi0ELi6ELin1EEEEENT_11PlainObjectERKNS2_9TransformIdLi3ELi1ELi0EEERKNS2_10MatrixBaseIS5_EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("AdRInvJac", static_cast<Eigen::Matrix<double, 6, -1, 0, 6, -1>::PlainObject (*)(const Eigen::Isometry3d &, const Eigen::MatrixBase<Eigen::Matrix<double, 6, -1, 0, 6, -1> > &)>(&dart::math::AdRInvJac), (::boost::python::arg("_T"), ::boost::python::arg("_J")))
;}

/* footer */
