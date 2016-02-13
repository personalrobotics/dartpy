#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5Joint18ExtendedPropertiesE()
{
::boost::python::class_<dart::dynamics::Joint::ExtendedProperties, ::boost::python::bases<dart::dynamics::Joint::Properties > >("ExtendedProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Joint::Properties &, const dart::dynamics::Joint::AddonProperties &>((::boost::python::arg("standardProperties"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mAddonProperties", &dart::dynamics::Joint::ExtendedProperties::mAddonProperties)
;
}

/* footer */
