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

/* postinclude */

void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEEvPT_RKT0_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("DefaultSetEmbeddedProperties", [](dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<3> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<3> > > * aspect, const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<3> > > & properties) -> void { return dart::common::detail::DefaultSetEmbeddedProperties<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<3> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<3> > >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<3> > >>(aspect, properties); }, (::boost::python::arg("aspect"), ::boost::python::arg("properties")));

}

/* footer */
