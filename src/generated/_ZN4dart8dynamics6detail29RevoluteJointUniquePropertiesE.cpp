#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail29RevoluteJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::RevoluteJointUniqueProperties >("RevoluteJointUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::RevoluteJointUniqueProperties * { return new dart::dynamics::detail::RevoluteJointUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _axis) -> dart::dynamics::detail::RevoluteJointUniqueProperties * { return new dart::dynamics::detail::RevoluteJointUniqueProperties(_axis); }, ::boost::python::default_call_policies(), (::boost::python::arg("_axis"))))
.def_readwrite("mAxis", &dart::dynamics::detail::RevoluteJointUniqueProperties::mAxis)
;
}

/* footer */
