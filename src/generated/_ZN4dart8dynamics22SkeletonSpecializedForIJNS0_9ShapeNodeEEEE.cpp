#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE_docstring[] = R"CHIMERA_STRING( SkeletonSpecializedForNode allows classes that inherit Skeleton to
 have constant-time access to a specific type of Node
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::BasicNodeManagerForSkeleton, dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode> > >("SkeletonSpecializedForShapeNode", _ZN4dart8dynamics22SkeletonSpecializedForIJNS0_9ShapeNodeEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> * { return new dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
