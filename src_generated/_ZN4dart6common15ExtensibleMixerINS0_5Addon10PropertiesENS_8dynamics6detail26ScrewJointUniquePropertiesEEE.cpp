#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE()
{
::boost::python::class_<dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::ScrewJointUniqueProperties>, ::boost::python::bases<dart::common::Addon::Properties, dart::dynamics::detail::ScrewJointUniqueProperties > >("_ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail26ScrewJointUniquePropertiesEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const dart::dynamics::detail::ScrewJointUniqueProperties &>((::boost::python::arg("mixin"))))
.def("clone", static_cast<std::unique_ptr<dart::common::Addon::Properties> (dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::ScrewJointUniqueProperties>::*)() const>(&dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::ScrewJointUniqueProperties>::clone))
.def("copy", static_cast<void (dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::ScrewJointUniqueProperties>::*)(const dart::common::Addon::Properties &)>(&dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::ScrewJointUniqueProperties>::copy), (::boost::python::arg("other")))
;
}

/* footer */