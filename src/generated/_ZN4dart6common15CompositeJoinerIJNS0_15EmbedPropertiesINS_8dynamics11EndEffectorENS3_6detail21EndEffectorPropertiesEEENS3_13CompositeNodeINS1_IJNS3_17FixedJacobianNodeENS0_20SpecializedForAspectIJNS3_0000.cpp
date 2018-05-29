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

void _ZN4dart6common15CompositeJoinerIJNS0_15EmbedPropertiesINS_8dynamics11EndEffectorENS3_6detail21EndEffectorPropertiesEEENS3_13CompositeNodeINS1_IJNS3_17FixedJacobianNodeENS0_20SpecializedForAspectIJNS3_7SupportEEEEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::EndEffector, dart::dynamics::detail::EndEffectorProperties>, dart::dynamics::CompositeNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::common::SpecializedForAspect<dart::dynamics::Support> > > >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::CompositeNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::common::SpecializedForAspect<dart::dynamics::Support> > >, dart::common::EmbedProperties<dart::dynamics::EndEffector, dart::dynamics::detail::EndEffectorProperties> > >("_ZN4dart6common15CompositeJoinerIJNS0_15EmbedPropertiesINS_8dynamics11EndEffectorENS3_6detail21EndEffectorPropertiesEEENS3_13CompositeNodeINS1_IJNS3_17FixedJacobianNodeENS0_20SpecializedForAspectIJNS3_7SupportEEEEEEEEEEEE", boost::python::no_init)
;
}

/* footer */
