#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics12SoftBodyNode10PropertiesE()
{
::boost::python::class_<dart::dynamics::SoftBodyNode::Properties, ::boost::python::bases<dart::dynamics::BodyNode::Properties, dart::dynamics::SoftBodyNode::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::BodyNode::Properties &, const dart::dynamics::SoftBodyNode::UniqueProperties &>((::boost::python::arg("_bodyProperties"), ::boost::python::arg("_softProperties"))))
;
}

/* footer */
