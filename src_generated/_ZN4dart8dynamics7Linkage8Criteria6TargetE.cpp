#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics7Linkage8Criteria6TargetE()
{
::boost::python::class_<dart::dynamics::Linkage::Criteria::Target >("Target", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *, dart::dynamics::Linkage::Criteria::ExpansionPolicy, bool>((::boost::python::arg("_target") = 0, ::boost::python::arg("_policy") = 0, ::boost::python::arg("_chain") = false)))
.def_readwrite("mNode", &dart::dynamics::Linkage::Criteria::Target::mNode)
.def_readwrite("mPolicy", &dart::dynamics::Linkage::Criteria::Target::mPolicy)
.def_readwrite("mChain", &dart::dynamics::Linkage::Criteria::Target::mChain)
;
}

/* footer */
