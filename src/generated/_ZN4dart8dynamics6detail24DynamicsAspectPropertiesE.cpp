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

void _ZN4dart8dynamics6detail24DynamicsAspectPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::DynamicsAspectProperties >("DynamicsAspectProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::DynamicsAspectProperties * { return new dart::dynamics::detail::DynamicsAspectProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const double frictionCoeff) -> dart::dynamics::detail::DynamicsAspectProperties * { return new dart::dynamics::detail::DynamicsAspectProperties(frictionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("frictionCoeff"))))
.def("__init__", ::boost::python::make_constructor([](const double frictionCoeff, const double restitutionCoeff) -> dart::dynamics::detail::DynamicsAspectProperties * { return new dart::dynamics::detail::DynamicsAspectProperties(frictionCoeff, restitutionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("frictionCoeff"), ::boost::python::arg("restitutionCoeff"))))
.def_readwrite("mFrictionCoeff", &dart::dynamics::detail::DynamicsAspectProperties::mFrictionCoeff)
.def_readwrite("mRestitutionCoeff", &dart::dynamics::detail::DynamicsAspectProperties::mRestitutionCoeff)
;
}

/* footer */
