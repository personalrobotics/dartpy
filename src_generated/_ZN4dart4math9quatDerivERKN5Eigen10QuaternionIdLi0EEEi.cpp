#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math9quatDerivERKN5Eigen10QuaternionIdLi0EEEi()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("quatDeriv", static_cast<Eigen::Matrix3d (*)(const Eigen::Quaterniond &, int)>(&dart::math::quatDeriv), (::boost::python::arg("_q"), ::boost::python::arg("_el")))
;}

/* footer */
