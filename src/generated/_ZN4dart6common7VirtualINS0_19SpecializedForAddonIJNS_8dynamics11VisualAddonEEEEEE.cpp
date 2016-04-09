#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEE_docstring[] = R"CHIMERA_STRING( This class is used to have CRTP functions inherit their template parameters
 virtually instead of directly.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> >, ::boost::noncopyable, ::boost::python::bases<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> > >("VirtualSpecializedForAddonVisualAddon", _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> > * { return new dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
