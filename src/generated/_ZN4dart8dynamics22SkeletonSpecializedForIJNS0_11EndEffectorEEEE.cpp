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

void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_11EndEffectorEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector>, dart::dynamics::detail::BasicNodeManagerForSkeleton > >("SkeletonSpecializedForEndEffector", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> * { return new dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
