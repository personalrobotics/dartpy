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

void _ZN4dart6common23EmbedStateAndPropertiesINS_8dynamics8BodyNodeENS2_6detail13BodyNodeStateENS4_24BodyNodeAspectPropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedStateAndProperties<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::RequiresAspect<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> > > >("_ZN4dart6common23EmbedStateAndPropertiesINS_8dynamics8BodyNodeENS2_6detail13BodyNodeStateENS4_24BodyNodeAspectPropertiesEEE", boost::python::no_init)
.def("getAspectState", [](const dart::common::EmbedStateAndProperties<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> *self) -> const dart::common::EmbedStateAndProperties<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::AspectState & { return self->getAspectState(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getAspectProperties", [](const dart::common::EmbedStateAndProperties<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> *self) -> const dart::common::EmbedStateAndProperties<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::AspectProperties & { return self->getAspectProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
