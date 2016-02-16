#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10SkelParser9SkelJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("SkelParser"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::SkelParser::SkelJoint >("SkelJoint", boost::python::no_init)
.def_readwrite("properties", &dart::utils::SkelParser::SkelJoint::properties)
.def_readwrite("position", &dart::utils::SkelParser::SkelJoint::position)
.def_readwrite("velocity", &dart::utils::SkelParser::SkelJoint::velocity)
.def_readwrite("acceleration", &dart::utils::SkelParser::SkelJoint::acceleration)
.def_readwrite("force", &dart::utils::SkelParser::SkelJoint::force)
.def_readwrite("parentName", &dart::utils::SkelParser::SkelJoint::parentName)
.def_readwrite("childName", &dart::utils::SkelParser::SkelJoint::childName)
.def_readwrite("type", &dart::utils::SkelParser::SkelJoint::type)
;
}

/* footer */
