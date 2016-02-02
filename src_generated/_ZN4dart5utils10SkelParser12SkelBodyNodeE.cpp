#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils10SkelParser12SkelBodyNodeE()
{
::boost::python::class_<dart::utils::SkelParser::SkelBodyNode >("SkelBodyNode", boost::python::no_init)
.def_readwrite("properties", &dart::utils::SkelParser::SkelBodyNode::properties)
.def_readwrite("initTransform", &dart::utils::SkelParser::SkelBodyNode::initTransform)
.def_readwrite("type", &dart::utils::SkelParser::SkelBodyNode::type)
;
}

/* footer */
