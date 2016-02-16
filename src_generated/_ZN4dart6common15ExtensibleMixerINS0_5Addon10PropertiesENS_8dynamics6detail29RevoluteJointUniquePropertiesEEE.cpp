#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::RevoluteJointUniqueProperties>, ::boost::python::bases<dart::common::Addon::Properties, dart::dynamics::detail::RevoluteJointUniqueProperties > >("_ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29RevoluteJointUniquePropertiesEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const dart::dynamics::detail::RevoluteJointUniqueProperties &>((::boost::python::arg("mixin"))))
.def("clone", static_cast<std::unique_ptr<dart::common::Addon::Properties> (dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::RevoluteJointUniqueProperties>::*)() const>(&dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::RevoluteJointUniqueProperties>::clone))
.def("copy", static_cast<void (dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::RevoluteJointUniqueProperties>::*)(const dart::common::Addon::Properties &)>(&dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::RevoluteJointUniqueProperties>::copy), (::boost::python::arg("other")))
;
}

/* footer */
