#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math16matrixToEulerXYXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("matrixToEulerXYX", static_cast<Eigen::Vector3d (*)(const Eigen::Matrix3d &)>(&dart::math::matrixToEulerXYX), (::boost::python::arg("_R")))
;}

/* footer */
