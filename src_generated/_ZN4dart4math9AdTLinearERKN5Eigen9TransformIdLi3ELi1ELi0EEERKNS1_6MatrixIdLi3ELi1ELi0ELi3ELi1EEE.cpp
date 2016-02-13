#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math9AdTLinearERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("AdTLinear", static_cast<Eigen::Vector6d (*)(const Eigen::Isometry3d &, const Eigen::Vector3d &)>(&dart::math::AdTLinear), (::boost::python::arg("_T"), ::boost::python::arg("_v")))
;}

/* footer */
