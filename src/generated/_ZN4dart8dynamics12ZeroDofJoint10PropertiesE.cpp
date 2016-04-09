#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics12ZeroDofJoint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("ZeroDofJoint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ZeroDofJoint::Properties, ::boost::python::bases<dart::dynamics::Joint::Properties > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::ZeroDofJoint::Properties * { return new dart::dynamics::ZeroDofJoint::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & _properties) -> dart::dynamics::ZeroDofJoint::Properties * { return new dart::dynamics::ZeroDofJoint::Properties(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
;
}

/* footer */
