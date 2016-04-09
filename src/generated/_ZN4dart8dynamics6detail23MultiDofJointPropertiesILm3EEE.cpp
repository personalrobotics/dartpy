#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm3EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::MultiDofJointProperties<3>, ::boost::python::bases<dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::Joint::Properties > >("ThreeDofJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::MultiDofJointProperties<3> * { return new dart::dynamics::detail::MultiDofJointProperties<3>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & _jointProperties) -> dart::dynamics::detail::MultiDofJointProperties<3> * { return new dart::dynamics::detail::MultiDofJointProperties<3>(_jointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_jointProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & _jointProperties, const dart::dynamics::detail::MultiDofJointUniqueProperties<3UL> & _multiDofProperties) -> dart::dynamics::detail::MultiDofJointProperties<3> * { return new dart::dynamics::detail::MultiDofJointProperties<3>(_jointProperties, _multiDofProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_jointProperties"), ::boost::python::arg("_multiDofProperties"))))
;
}

/* footer */
