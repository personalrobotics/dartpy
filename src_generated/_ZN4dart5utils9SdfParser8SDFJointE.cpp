#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils9SdfParser8SDFJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("SdfParser"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::SdfParser::SDFJoint >("SDFJoint", boost::python::no_init)
.def_readwrite("properties", &dart::utils::SdfParser::SDFJoint::properties)
.def_readwrite("parentName", &dart::utils::SdfParser::SDFJoint::parentName)
.def_readwrite("childName", &dart::utils::SdfParser::SDFJoint::childName)
.def_readwrite("type", &dart::utils::SdfParser::SDFJoint::type)
;
}

/* footer */
