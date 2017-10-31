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

void _ZN4dart8dynamics6detail20EulerJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EulerJointProperties, ::boost::python::bases<dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::detail::GenericJointProperties<dart::math::RealVectorSpace<3> > > >("EulerJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::EulerJointProperties * { return new dart::dynamics::detail::EulerJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> >::Properties & genericJointProperties) -> dart::dynamics::detail::EulerJointProperties * { return new dart::dynamics::detail::EulerJointProperties(genericJointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("genericJointProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> >::Properties & genericJointProperties, const dart::dynamics::detail::EulerJointUniqueProperties & eulerJointProperties) -> dart::dynamics::detail::EulerJointProperties * { return new dart::dynamics::detail::EulerJointProperties(genericJointProperties, eulerJointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("genericJointProperties"), ::boost::python::arg("eulerJointProperties"))))
;
}

/* footer */
