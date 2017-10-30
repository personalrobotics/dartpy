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

void _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, ::boost::noncopyable >("R2JointAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::StateData & state) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >(state); }, ::boost::python::default_call_policies(), (::boost::python::arg("state"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::PropertiesData & properties) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >(properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::StateData & state, const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::PropertiesData & properties) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >(state, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("state"), ::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::PropertiesData & properties, const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::StateData & state) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >(properties, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"), ::boost::python::arg("state"))))
.def("cloneAspect", [](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
