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

void _ZN4dart6common20SpecializedForAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics20TranslationalJoint2DENS3_6detail36TranslationalJoint2DUniquePropertiesEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedForAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> >, ::boost::noncopyable, ::boost::python::bases<dart::common::Composite > >("SpecializedForTranslationalJoint2DAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::SpecializedForAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> > * { return new dart::common::SpecializedForAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
