#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils9SdfParser8SDFJointE()
{
::boost::python::class_<dart::utils::SdfParser::SDFJoint >("SDFJoint", boost::python::no_init)
.def_readwrite("properties", &dart::utils::SdfParser::SDFJoint::properties)
.def_readwrite("parentName", &dart::utils::SdfParser::SDFJoint::parentName)
.def_readwrite("childName", &dart::utils::SdfParser::SDFJoint::childName)
.def_readwrite("type", &dart::utils::SdfParser::SDFJoint::type)
;
}

/* footer */
