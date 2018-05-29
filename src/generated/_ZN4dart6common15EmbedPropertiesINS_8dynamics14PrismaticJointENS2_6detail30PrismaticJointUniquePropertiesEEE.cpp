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

void _ZN4dart6common15EmbedPropertiesINS_8dynamics14PrismaticJointENS2_6detail30PrismaticJointUniquePropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedProperties<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::RequiresAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties> > > >("_ZN4dart6common15EmbedPropertiesINS_8dynamics14PrismaticJointENS2_6detail30PrismaticJointUniquePropertiesEEE", boost::python::no_init)
.def("getAspectProperties", [](const dart::common::EmbedProperties<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties> *self) -> const dart::common::EmbedProperties<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties>::AspectProperties & { return self->getAspectProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
