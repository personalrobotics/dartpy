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

void _ZN4dart6common24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS2_6detail27PlanarJointUniquePropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbeddedPropertiesAspect<dart::dynamics::PlanarJoint, dart::dynamics::detail::PlanarJointUniqueProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::PlanarJoint>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::PlanarJoint, dart::dynamics::detail::PlanarJointUniqueProperties>, dart::dynamics::detail::PlanarJointUniqueProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::PlanarJointUniqueProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> > >("_ZN4dart6common24EmbeddedPropertiesAspectINS_8dynamics11PlanarJointENS2_6detail27PlanarJointUniquePropertiesEEE", boost::python::no_init)
;
}

/* footer */
