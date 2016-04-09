#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics9FreeJoint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("FreeJoint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FreeJoint::Properties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<6> > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::FreeJoint::Properties * { return new dart::dynamics::FreeJoint::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<6>::Properties & _properties) -> dart::dynamics::FreeJoint::Properties * { return new dart::dynamics::FreeJoint::Properties(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
;
}

/* footer */
