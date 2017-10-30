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

void _ZN4dart6common20SpecializedForAspectIJNS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS3_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedForAspect<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::Composite > >("SpecializedForSE3JointAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::SpecializedForAspect<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> > > * { return new dart::common::SpecializedForAspect<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
