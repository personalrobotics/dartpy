#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10SkelParser12SkelBodyNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("SkelParser"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::SkelParser::SkelBodyNode >("SkelBodyNode", boost::python::no_init)
.def_readwrite("properties", &dart::utils::SkelParser::SkelBodyNode::properties)
.def_readwrite("initTransform", &dart::utils::SkelParser::SkelBodyNode::initTransform)
.def_readwrite("type", &dart::utils::SkelParser::SkelBodyNode::type)
;
}

/* footer */
