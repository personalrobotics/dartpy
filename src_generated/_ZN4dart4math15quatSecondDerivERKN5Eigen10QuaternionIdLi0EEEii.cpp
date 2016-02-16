#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math15quatSecondDerivERKN5Eigen10QuaternionIdLi0EEEii()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("quatSecondDeriv", static_cast<Eigen::Matrix3d (*)(const Eigen::Quaterniond &, int, int)>(&dart::math::quatSecondDeriv), (::boost::python::arg("_q"), ::boost::python::arg("_el1"), ::boost::python::arg("_el2")))
;}

/* footer */
