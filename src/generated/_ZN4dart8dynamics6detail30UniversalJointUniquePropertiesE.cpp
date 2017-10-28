#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::UniversalJointUniqueProperties >("UniversalJointUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::UniversalJointUniqueProperties * { return new dart::dynamics::detail::UniversalJointUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _axis1) -> dart::dynamics::detail::UniversalJointUniqueProperties * { return new dart::dynamics::detail::UniversalJointUniqueProperties(_axis1); }, ::boost::python::default_call_policies(), (::boost::python::arg("_axis1"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _axis1, const Eigen::Vector3d & _axis2) -> dart::dynamics::detail::UniversalJointUniqueProperties * { return new dart::dynamics::detail::UniversalJointUniqueProperties(_axis1, _axis2); }, ::boost::python::default_call_policies(), (::boost::python::arg("_axis1"), ::boost::python::arg("_axis2"))))
.def_readwrite("mAxis", &dart::dynamics::detail::UniversalJointUniqueProperties::mAxis)
;
}

/* footer */
