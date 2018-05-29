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

void _ZN4dart6common15EmbedPropertiesINS_8dynamics20TranslationalJoint2DENS2_6detail36TranslationalJoint2DUniquePropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedProperties<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::RequiresAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> > > >("_ZN4dart6common15EmbedPropertiesINS_8dynamics20TranslationalJoint2DENS2_6detail36TranslationalJoint2DUniquePropertiesEEE", boost::python::no_init)
.def("getAspectProperties", [](const dart::common::EmbedProperties<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties> *self) -> const dart::common::EmbedProperties<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties>::AspectProperties & { return self->getAspectProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
