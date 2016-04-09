#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common19SpecializedForAddonIJNS_8dynamics7SupportEEEE_docstring[] = R"CHIMERA_STRING( SpecializedForAddon allows classes that inherit AddonManager to have
 constant-time access to a specific type of Addon
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics7SupportEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedForAddon<dart::dynamics::Support>, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManager > >("SpecializedForAddonSupport", _ZN4dart6common19SpecializedForAddonIJNS_8dynamics7SupportEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::SpecializedForAddon<dart::dynamics::Support> * { return new dart::common::SpecializedForAddon<dart::dynamics::Support>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
