#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZNK4dart6common5Addon10cloneAddonEPNS0_12AddonManagerE_docstring[] = R"CHIMERA_STRING( Clone this Addon into a new manager
)CHIMERA_STRING";

constexpr char _ZN4dart6common5Addon13setAddonStateERKNS1_5StateE_docstring[] = R"CHIMERA_STRING( Set the State of this Addon. By default, this does nothing.
)CHIMERA_STRING";

constexpr char _ZN4dart6common5Addon18setAddonPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this Addon. By default, this does nothing.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common5AddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Addon, ::boost::noncopyable >("Addon", boost::python::no_init)
.def("cloneAddon", [](const dart::common::Addon *self, dart::common::AddonManager * newManager) -> std::unique_ptr<dart::common::Addon> { return self->cloneAddon(newManager); }, _ZNK4dart6common5Addon10cloneAddonEPNS0_12AddonManagerE_docstring, (::boost::python::arg("newManager")))
.def("setAddonState", [](dart::common::Addon *self, const dart::common::Addon::State & otherState) -> void { return self->setAddonState(otherState); }, _ZN4dart6common5Addon13setAddonStateERKNS1_5StateE_docstring, (::boost::python::arg("otherState")))
.def("setAddonProperties", [](dart::common::Addon *self, const dart::common::Addon::Properties & someProperties) -> void { return self->setAddonProperties(someProperties); }, _ZN4dart6common5Addon18setAddonPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("someProperties")))
;
}

/* footer */
