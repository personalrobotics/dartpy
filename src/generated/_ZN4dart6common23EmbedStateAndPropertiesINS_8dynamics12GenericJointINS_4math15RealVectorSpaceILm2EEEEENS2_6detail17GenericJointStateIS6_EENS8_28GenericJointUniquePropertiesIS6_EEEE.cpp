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

void _ZN4dart6common23EmbedStateAndPropertiesINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedStateAndProperties<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::RequiresAspect<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > > > >("_ZN4dart6common23EmbedStateAndPropertiesINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEENS2_6detail17GenericJointStateIS6_EENS8_28GenericJointUniquePropertiesIS6_EEEE", boost::python::no_init)
.def("getAspectState", [](const dart::common::EmbedStateAndProperties<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > *self) -> const dart::common::EmbedStateAndProperties<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::AspectState & { return self->getAspectState(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getAspectProperties", [](const dart::common::EmbedStateAndProperties<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > > *self) -> const dart::common::EmbedStateAndProperties<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >::AspectProperties & { return self->getAspectProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
