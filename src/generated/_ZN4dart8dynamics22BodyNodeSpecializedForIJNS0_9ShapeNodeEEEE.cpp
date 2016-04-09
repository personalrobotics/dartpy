#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE_docstring[] = R"CHIMERA_STRING( BodyNodeSpecializedFor allows classes that inherit BodyNode to
 have constant-time access to a specific type of Node
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::BasicNodeManagerForBodyNode > >("BodyNodeSpecializedForShapeNode", _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode> * { return new dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
