#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics9WeldJoint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("WeldJoint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WeldJoint::Properties, ::boost::python::bases<dart::dynamics::ZeroDofJoint::Properties > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::WeldJoint::Properties * { return new dart::dynamics::WeldJoint::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & _properties) -> dart::dynamics::WeldJoint::Properties * { return new dart::dynamics::WeldJoint::Properties(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
;
}

/* footer */