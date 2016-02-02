#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics8BodyNode10PropertiesE()
{
::boost::python::class_<dart::dynamics::BodyNode::Properties, ::boost::python::bases<dart::dynamics::Entity::Properties, dart::dynamics::BodyNode::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Entity::Properties &, const dart::dynamics::BodyNode::UniqueProperties &>((::boost::python::arg("_entityProperties"), ::boost::python::arg("_bodyNodeProperties"))))
;
}

/* footer */
