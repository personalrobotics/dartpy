#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6logMapERKN5Eigen9TransformIdLi3ELi1ELi0EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("logMap", static_cast<Eigen::Vector6d (*)(const Eigen::Isometry3d &)>(&dart::math::logMap), (::boost::python::arg("_T")))
;}

/* footer */
