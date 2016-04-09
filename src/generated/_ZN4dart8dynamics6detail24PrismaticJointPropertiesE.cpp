#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail24PrismaticJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PrismaticJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointProperties, dart::dynamics::detail::PrismaticJointUniqueProperties > >("PrismaticJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::PrismaticJointProperties * { return new dart::dynamics::detail::PrismaticJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::SingleDofJoint::Properties & _singleDofProperties) -> dart::dynamics::detail::PrismaticJointProperties * { return new dart::dynamics::detail::PrismaticJointProperties(_singleDofProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_singleDofProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::SingleDofJoint::Properties & _singleDofProperties, const dart::dynamics::detail::PrismaticJointUniqueProperties & _prismaticProperties) -> dart::dynamics::detail::PrismaticJointProperties * { return new dart::dynamics::detail::PrismaticJointProperties(_singleDofProperties, _prismaticProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_singleDofProperties"), ::boost::python::arg("_prismaticProperties"))))
;
}

/* footer */
