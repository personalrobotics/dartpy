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

void _ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics10EulerJointENS2_6detail26EulerJointUniquePropertiesEJNS2_12GenericJointINS_4math15RealVectorSpaceILm3EEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties>, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > > > >("_ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics10EulerJointENS2_6detail26EulerJointUniquePropertiesEJNS2_12GenericJointINS_4math15RealVectorSpaceILm3EEEEEEEE", boost::python::no_init)
;
}

/* footer */
