#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE_docstring[] = R"CHIMERA_STRING( BodyNodeSpecializedFor allows classes that inherit BodyNode to
 have constant-time access to a specific type of Node
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::BasicNodeManagerForBodyNode > >("BodyNodeSpecializedForEndEffector", _ZN4dart8dynamics22BodyNodeSpecializedForIJNS0_11EndEffectorEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector> * { return new dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
