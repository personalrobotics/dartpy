#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6Marker10PropertiesE()
{
::boost::python::class_<dart::dynamics::Marker::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<const std::string &, const Eigen::Vector3d &, const Eigen::Vector4d &, dart::dynamics::Marker::ConstraintType>((::boost::python::arg("name"), ::boost::python::arg("offset"), ::boost::python::arg("color"), ::boost::python::arg("type") = 0)))
.def_readwrite("mName", &dart::dynamics::Marker::Properties::mName)
.def_readwrite("mOffset", &dart::dynamics::Marker::Properties::mOffset)
.def_readwrite("mColor", &dart::dynamics::Marker::Properties::mColor)
.def_readwrite("mType", &dart::dynamics::Marker::Properties::mType)
;
}

/* footer */
