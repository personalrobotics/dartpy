#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail24SingleDofJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SingleDofJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::Joint::Properties > >("SingleDofJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::SingleDofJointProperties * { return new dart::dynamics::detail::SingleDofJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & _jointProperties) -> dart::dynamics::detail::SingleDofJointProperties * { return new dart::dynamics::detail::SingleDofJointProperties(_jointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_jointProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & _jointProperties, const dart::dynamics::detail::SingleDofJointUniqueProperties & _singleDofProperties) -> dart::dynamics::detail::SingleDofJointProperties * { return new dart::dynamics::detail::SingleDofJointProperties(_jointProperties, _singleDofProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_jointProperties"), ::boost::python::arg("_singleDofProperties"))))
;
}

/* footer */
