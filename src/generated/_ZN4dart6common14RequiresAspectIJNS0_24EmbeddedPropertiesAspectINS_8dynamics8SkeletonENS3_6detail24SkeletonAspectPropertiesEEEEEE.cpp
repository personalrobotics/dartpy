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

void _ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS3_6detail24SkeletonAspectPropertiesEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::RequiresAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties> >, ::boost::noncopyable, ::boost::python::bases<dart::common::SpecializedForAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties> > > >("_ZN4dart6common14RequiresAspectIJNS0_24EmbeddedPropertiesAspectINS_8dynamics8SkeletonENS3_6detail24SkeletonAspectPropertiesEEEEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::RequiresAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties> > * { return new dart::common::RequiresAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
