#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::SupportPropertiesData>, ::boost::python::bases<dart::common::Addon::Properties, dart::dynamics::detail::SupportPropertiesData > >("_ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail21SupportPropertiesDataEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const dart::dynamics::detail::SupportPropertiesData &>((::boost::python::arg("mixin"))))
.def("clone", static_cast<std::unique_ptr<dart::common::Addon::Properties> (dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::SupportPropertiesData>::*)() const>(&dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::SupportPropertiesData>::clone))
.def("copy", static_cast<void (dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::SupportPropertiesData>::*)(const dart::common::Addon::Properties &)>(&dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::SupportPropertiesData>::copy), (::boost::python::arg("other")))
;
}

/* footer */
