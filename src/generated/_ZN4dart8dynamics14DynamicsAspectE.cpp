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

void _ZN4dart8dynamics14DynamicsAspectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::DynamicsAspect, ::boost::noncopyable >("DynamicsAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::DynamicsAspect * { return new dart::dynamics::DynamicsAspect(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::detail::AspectWithVersionedProperties<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::dynamics::DynamicsAspect, dart::dynamics::detail::DynamicsAspectProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::dynamics::DynamicsAspect * { return new dart::dynamics::DynamicsAspect(properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"))))
.def("setFrictionCoeff", [](dart::dynamics::DynamicsAspect *self, const double & value) -> void { return self->setFrictionCoeff(value); }, (::boost::python::arg("value")))
.def("getFrictionCoeff", [](const dart::dynamics::DynamicsAspect *self) -> const double & { return self->getFrictionCoeff(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRestitutionCoeff", [](dart::dynamics::DynamicsAspect *self, const double & value) -> void { return self->setRestitutionCoeff(value); }, (::boost::python::arg("value")))
.def("getRestitutionCoeff", [](const dart::dynamics::DynamicsAspect *self) -> const double & { return self->getRestitutionCoeff(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
