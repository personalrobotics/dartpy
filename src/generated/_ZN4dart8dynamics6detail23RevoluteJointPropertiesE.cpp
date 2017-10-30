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

void _ZN4dart8dynamics6detail23RevoluteJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::RevoluteJointProperties, ::boost::python::bases<dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<1> >, dart::dynamics::detail::RevoluteJointUniqueProperties > >("RevoluteJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::RevoluteJointProperties * { return new dart::dynamics::detail::RevoluteJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::Properties & genericJointProperties) -> dart::dynamics::detail::RevoluteJointProperties * { return new dart::dynamics::detail::RevoluteJointProperties(genericJointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("genericJointProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::Properties & genericJointProperties, const dart::dynamics::detail::RevoluteJointUniqueProperties & revoluteProperties) -> dart::dynamics::detail::RevoluteJointProperties * { return new dart::dynamics::detail::RevoluteJointProperties(genericJointProperties, revoluteProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("genericJointProperties"), ::boost::python::arg("revoluteProperties"))))
;
}

/* footer */
