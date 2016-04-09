#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeENS0_11EndEffectorEEEE_docstring[] = R"CHIMERA_STRING( This is the variadic version of the BodyNodeSpecializedFor class
 which allows you to include arbitrarily many specialized types in the
 specialization.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeENS0_11EndEffectorEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode, dart::dynamics::EndEffector>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector> > > > >("BodyNodeSpecializedFor_ShapeNode_EndEffector", _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeENS0_11EndEffectorEEEE_docstring, boost::python::no_init)
;
}

/* footer */
