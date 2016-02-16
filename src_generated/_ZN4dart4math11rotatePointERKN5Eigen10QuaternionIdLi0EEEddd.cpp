#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math11rotatePointERKN5Eigen10QuaternionIdLi0EEEddd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("rotatePoint", static_cast<Eigen::Vector3d (*)(const Eigen::Quaterniond &, double, double, double)>(&dart::math::rotatePoint), (::boost::python::arg("_q"), ::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_z")))
;}

/* footer */
