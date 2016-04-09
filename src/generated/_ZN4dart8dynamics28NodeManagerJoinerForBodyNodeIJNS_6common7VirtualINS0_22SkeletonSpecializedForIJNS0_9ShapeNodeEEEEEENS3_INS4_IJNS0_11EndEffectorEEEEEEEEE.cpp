#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE_docstring[] = R"CHIMERA_STRING( NodeManagerJoiner allows classes that inherit from various
 SpecializedNodeManager types to be inherited by a single derived class. This
 class solved the diamond-of-death problem for multiple
 SpecializedNodeManager inheritance.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > > >("NodeManagerJoinerForBodyNode_VirtualSkeletonSpecializedForShapeNode_VirtualSkeletonSpecializedForEndEffector", _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorEEEEEEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > > * { return new dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
