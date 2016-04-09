#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail24UniversalJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::UniversalJointProperties, ::boost::python::bases<dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::detail::MultiDofJointProperties<2> > >("UniversalJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::UniversalJointProperties * { return new dart::dynamics::detail::UniversalJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<2>::Properties & _multiDofProperties) -> dart::dynamics::detail::UniversalJointProperties * { return new dart::dynamics::detail::UniversalJointProperties(_multiDofProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_multiDofProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<2>::Properties & _multiDofProperties, const dart::dynamics::detail::UniversalJointUniqueProperties & _universalProperties) -> dart::dynamics::detail::UniversalJointProperties * { return new dart::dynamics::detail::UniversalJointProperties(_multiDofProperties, _universalProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_multiDofProperties"), ::boost::python::arg("_universalProperties"))))
;
}

/* footer */
