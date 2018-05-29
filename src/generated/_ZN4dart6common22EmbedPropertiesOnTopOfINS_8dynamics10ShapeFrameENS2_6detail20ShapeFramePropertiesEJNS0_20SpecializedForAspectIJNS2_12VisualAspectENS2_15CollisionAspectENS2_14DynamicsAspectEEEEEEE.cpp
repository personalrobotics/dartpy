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

void _ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics10ShapeFrameENS2_6detail20ShapeFramePropertiesEJNS0_20SpecializedForAspectIJNS2_12VisualAspectENS2_15CollisionAspectENS2_14DynamicsAspectEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties, dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect> >, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect> > > >("_ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics10ShapeFrameENS2_6detail20ShapeFramePropertiesEJNS0_20SpecializedForAspectIJNS2_12VisualAspectENS2_15CollisionAspectENS2_14DynamicsAspectEEEEEEE", boost::python::no_init)
;
}

/* footer */
