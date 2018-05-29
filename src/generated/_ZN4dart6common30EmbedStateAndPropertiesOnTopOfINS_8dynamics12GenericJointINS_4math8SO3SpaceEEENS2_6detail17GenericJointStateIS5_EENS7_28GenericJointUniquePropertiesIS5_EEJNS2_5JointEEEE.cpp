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

void _ZN4dart6common30EmbedStateAndPropertiesOnTopOfINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS2_6detail17GenericJointStateIS5_EENS7_28GenericJointUniquePropertiesIS5_EEJNS2_5JointEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedStateAndPropertiesOnTopOf<dart::dynamics::GenericJoint<dart::math::SO3Space>, dart::dynamics::detail::GenericJointState<dart::math::SO3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>, dart::dynamics::Joint>, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::common::EmbedStateAndProperties<dart::dynamics::GenericJoint<dart::math::SO3Space>, dart::dynamics::detail::GenericJointState<dart::math::SO3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> >, dart::dynamics::Joint> > >("_ZN4dart6common30EmbedStateAndPropertiesOnTopOfINS_8dynamics12GenericJointINS_4math8SO3SpaceEEENS2_6detail17GenericJointStateIS5_EENS7_28GenericJointUniquePropertiesIS5_EEJNS2_5JointEEEE", boost::python::no_init)
;
}

/* footer */
