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

void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm1EEEEENS4_6detail17GenericJointStateIS8_EENSA_28GenericJointUniquePropertiesIS8_EEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESE_EEEERKT0_PKT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("DefaultGetEmbeddedProperties", [](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<1> > > * aspect) -> const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<1> > > & { return dart::common::detail::DefaultGetEmbeddedProperties<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<1> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<1> > >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<1> > >>(aspect); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("aspect")));

}

/* footer */
