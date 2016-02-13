#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils9SdfParser11SDFBodyNodeE()
{
::boost::python::class_<dart::utils::SdfParser::SDFBodyNode >("SDFBodyNode", boost::python::no_init)
.def_readwrite("properties", &dart::utils::SdfParser::SDFBodyNode::properties)
.def_readwrite("initTransform", &dart::utils::SdfParser::SDFBodyNode::initTransform)
.def_readwrite("type", &dart::utils::SdfParser::SDFBodyNode::type)
;
}

/* footer */
