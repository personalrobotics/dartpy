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

void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS3_21TemplatedJacobianNodeINS3_17FixedJacobianNodeEEEEENS3_6detail20EntityNodePropertiesEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedForAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, dart::dynamics::detail::EntityNodeProperties> >, ::boost::noncopyable, ::boost::python::bases<dart::common::Composite > >("_ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS3_21TemplatedJacobianNodeINS3_17FixedJacobianNodeEEEEENS3_6detail20EntityNodePropertiesEEEEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::SpecializedForAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, dart::dynamics::detail::EntityNodeProperties> > * { return new dart::common::SpecializedForAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, dart::dynamics::detail::EntityNodeProperties> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
