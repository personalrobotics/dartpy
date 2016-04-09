#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics28NodeManagerJoinerForSkeletonIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::NodeManagerJoinerForSkeleton<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > > > >("NodeManagerJoinerForSkeleton_VirtualSkeletonSpecializedForShapeNode_VirtualSkeletonSpecializedForEndEffector", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::NodeManagerJoinerForSkeleton<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > > * { return new dart::dynamics::NodeManagerJoinerForSkeleton<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
