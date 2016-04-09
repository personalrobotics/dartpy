#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11make_uniqueINS0_15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail24CollisionAddonPropertiesEEEJRKS8_EEESt10unique_ptrIT_St14default_deleteISC_EEDpOT0_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("make_unique", [](const dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::CollisionAddonProperties> & _arg0_) -> std::unique_ptr<dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::CollisionAddonProperties> > { return dart::common::make_unique<dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::CollisionAddonProperties>, const dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::CollisionAddonProperties> &>(_arg0_); }, (::boost::python::arg("_arg0_")));

}

/* footer */
