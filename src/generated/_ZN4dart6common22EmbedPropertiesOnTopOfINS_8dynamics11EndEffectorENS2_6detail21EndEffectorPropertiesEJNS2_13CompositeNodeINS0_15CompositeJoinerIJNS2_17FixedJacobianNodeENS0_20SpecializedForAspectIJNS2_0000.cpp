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

void _ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics11EndEffectorENS2_6detail21EndEffectorPropertiesEJNS2_13CompositeNodeINS0_15CompositeJoinerIJNS2_17FixedJacobianNodeENS0_20SpecializedForAspectIJNS2_7SupportEEEEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EndEffector, dart::dynamics::detail::EndEffectorProperties, dart::dynamics::CompositeNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::common::SpecializedForAspect<dart::dynamics::Support> > > >, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::EndEffector, dart::dynamics::detail::EndEffectorProperties>, dart::dynamics::CompositeNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::common::SpecializedForAspect<dart::dynamics::Support> > > > > >("_ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics11EndEffectorENS2_6detail21EndEffectorPropertiesEJNS2_13CompositeNodeINS0_15CompositeJoinerIJNS2_17FixedJacobianNodeENS0_20SpecializedForAspectIJNS2_7SupportEEEEEEEEEEEE", boost::python::no_init)
;
}

/* footer */
