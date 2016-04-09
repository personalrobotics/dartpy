#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics9BallJoint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("BallJoint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BallJoint::Properties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<3> > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::BallJoint::Properties * { return new dart::dynamics::BallJoint::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<3>::Properties & _properties) -> dart::dynamics::BallJoint::Properties * { return new dart::dynamics::BallJoint::Properties(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
;
}

/* footer */
