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

void _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PrismaticJointUniqueProperties >("PrismaticJointUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::PrismaticJointUniqueProperties * { return new dart::dynamics::detail::PrismaticJointUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _axis) -> dart::dynamics::detail::PrismaticJointUniqueProperties * { return new dart::dynamics::detail::PrismaticJointUniqueProperties(_axis); }, ::boost::python::default_call_policies(), (::boost::python::arg("_axis"))))
.def_readwrite("mAxis", &dart::dynamics::detail::PrismaticJointUniqueProperties::mAxis)
;
}

/* footer */