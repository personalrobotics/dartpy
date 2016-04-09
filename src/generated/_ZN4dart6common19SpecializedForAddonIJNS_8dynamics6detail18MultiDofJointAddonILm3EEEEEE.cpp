#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE_docstring[] = R"CHIMERA_STRING( SpecializedForAddon allows classes that inherit AddonManager to have
 constant-time access to a specific type of Addon
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedForAddon<dart::dynamics::detail::MultiDofJointAddon<3> >, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManager > >("SpecializedForThreeDofJointAddon", _ZN4dart6common19SpecializedForAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::SpecializedForAddon<dart::dynamics::detail::MultiDofJointAddon<3> > * { return new dart::common::SpecializedForAddon<dart::dynamics::detail::MultiDofJointAddon<3> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
