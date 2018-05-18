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

void _ZN4dart6common6detail23DefaultGetEmbeddedStateINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEENS4_6detail17GenericJointStateIS7_EENS9_28GenericJointUniquePropertiesIS7_EEEENS0_13MakeCloneableINS0_6Aspect5StateESB_EEEERKT0_PKT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("DefaultGetEmbeddedState", [](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> > * aspect) -> const dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> > & { return dart::common::detail::DefaultGetEmbeddedState<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >>(aspect); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("aspect")));

}

/* footer */
