#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math15verifyTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("verifyTransform", static_cast<bool (*)(const Eigen::Isometry3d &)>(&dart::math::verifyTransform), (::boost::python::arg("_T")))
;}

/* footer */
