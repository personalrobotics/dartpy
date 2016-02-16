#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math16eulerYXYToMatrixERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("eulerYXYToMatrix", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &)>(&dart::math::eulerYXYToMatrix), (::boost::python::arg("_angle")))
;}

/* footer */
