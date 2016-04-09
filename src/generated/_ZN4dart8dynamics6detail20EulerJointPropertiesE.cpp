#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail20EulerJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EulerJointProperties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<3>, dart::dynamics::detail::EulerJointUniqueProperties > >("EulerJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::EulerJointProperties * { return new dart::dynamics::detail::EulerJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<3>::Properties & _multiDofProperties) -> dart::dynamics::detail::EulerJointProperties * { return new dart::dynamics::detail::EulerJointProperties(_multiDofProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_multiDofProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiDofJoint<3>::Properties & _multiDofProperties, const dart::dynamics::detail::EulerJointUniqueProperties & _eulerJointProperties) -> dart::dynamics::detail::EulerJointProperties * { return new dart::dynamics::detail::EulerJointProperties(_multiDofProperties, _eulerJointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_multiDofProperties"), ::boost::python::arg("_eulerJointProperties"))))
;
}

/* footer */
