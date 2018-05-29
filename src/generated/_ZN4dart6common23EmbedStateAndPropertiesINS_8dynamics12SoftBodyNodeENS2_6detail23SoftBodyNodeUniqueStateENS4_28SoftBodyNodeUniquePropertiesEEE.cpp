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

void _ZN4dart6common23EmbedStateAndPropertiesINS_8dynamics12SoftBodyNodeENS2_6detail23SoftBodyNodeUniqueStateENS4_28SoftBodyNodeUniquePropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedStateAndProperties<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::RequiresAspect<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties> > > >("_ZN4dart6common23EmbedStateAndPropertiesINS_8dynamics12SoftBodyNodeENS2_6detail23SoftBodyNodeUniqueStateENS4_28SoftBodyNodeUniquePropertiesEEE", boost::python::no_init)
.def("getAspectState", [](const dart::common::EmbedStateAndProperties<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties> *self) -> const dart::common::EmbedStateAndProperties<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>::AspectState & { return self->getAspectState(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getAspectProperties", [](const dart::common::EmbedStateAndProperties<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties> *self) -> const dart::common::EmbedStateAndProperties<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>::AspectProperties & { return self->getAspectProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */