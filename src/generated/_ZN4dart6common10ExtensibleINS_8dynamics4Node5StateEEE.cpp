#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE_docstring[] = R"CHIMERA_STRING( Extensible is a CRTP base class that provides an interface for easily
 creating data structures that are meant to be extended. Ordinary copying
 does not work with extended data structures, because information from the
 derived classes will typically be lost during a copy. The Extensible class
 provides an interface for creating a new copy of an extended data structure,
 as well as copying information between two extended data structures of the
 same type.
)CHIMERA_STRING";

constexpr char _ZNK4dart6common10ExtensibleINS_8dynamics4Node5StateEE5cloneEv_docstring[] = R"CHIMERA_STRING( Implement this function to allow your Extensible type to be copied safely.
)CHIMERA_STRING";

constexpr char _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEE4copyERKS4__docstring[] = R"CHIMERA_STRING( Copy the contents of anotherExtensible into this one.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Extensible<dart::dynamics::Node::State>, ::boost::noncopyable >("ExtensibleNodeState", _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE_docstring, boost::python::no_init)
.def("clone", [](const dart::common::Extensible<dart::dynamics::Node::State> *self) -> std::unique_ptr<dart::dynamics::Node::State> { return self->clone(); }, _ZNK4dart6common10ExtensibleINS_8dynamics4Node5StateEE5cloneEv_docstring)
.def("copy", [](dart::common::Extensible<dart::dynamics::Node::State> *self, const dart::dynamics::Node::State & anotherExtensible) -> void { return self->copy(anotherExtensible); }, _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEE4copyERKS4__docstring, (::boost::python::arg("anotherExtensible")))
;
}

/* footer */
