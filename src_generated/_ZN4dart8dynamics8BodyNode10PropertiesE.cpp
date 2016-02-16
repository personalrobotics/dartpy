#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics8BodyNode10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("BodyNode"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNode::Properties, ::boost::python::bases<dart::dynamics::Entity::Properties, dart::dynamics::BodyNode::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Entity::Properties &, const dart::dynamics::BodyNode::UniqueProperties &>((::boost::python::arg("_entityProperties"), ::boost::python::arg("_bodyNodeProperties"))))
;
}

/* footer */
