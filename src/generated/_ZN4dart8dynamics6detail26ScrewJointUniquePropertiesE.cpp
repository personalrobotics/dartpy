#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::ScrewJointUniqueProperties >("ScrewJointUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::ScrewJointUniqueProperties * { return new dart::dynamics::detail::ScrewJointUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _axis) -> dart::dynamics::detail::ScrewJointUniqueProperties * { return new dart::dynamics::detail::ScrewJointUniqueProperties(_axis); }, ::boost::python::default_call_policies(), (::boost::python::arg("_axis"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _axis, double _pitch) -> dart::dynamics::detail::ScrewJointUniqueProperties * { return new dart::dynamics::detail::ScrewJointUniqueProperties(_axis, _pitch); }, ::boost::python::default_call_policies(), (::boost::python::arg("_axis"), ::boost::python::arg("_pitch"))))
.def_readwrite("mAxis", &dart::dynamics::detail::ScrewJointUniqueProperties::mAxis)
.def_readwrite("mPitch", &dart::dynamics::detail::ScrewJointUniqueProperties::mPitch)
;
}

/* footer */
