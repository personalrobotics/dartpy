#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils33toIsometry3dWithExtrinsicRotationERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("toIsometry3dWithExtrinsicRotation", static_cast<Eigen::Isometry3d (*)(const std::string &)>(&dart::utils::toIsometry3dWithExtrinsicRotation), (::boost::python::arg("str")))
;}

/* footer */
