#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ExtensibleMixer<dart::common::Addon::State, dart::dynamics::detail::SupportStateData>, ::boost::python::bases<dart::common::Addon::State, dart::dynamics::detail::SupportStateData > >("_ZN4dart6common15ExtensibleMixerINS0_5Addon5StateENS_8dynamics6detail16SupportStateDataEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const dart::dynamics::detail::SupportStateData &>((::boost::python::arg("mixin"))))
.def("clone", static_cast<std::unique_ptr<dart::common::Addon::State> (dart::common::ExtensibleMixer<dart::common::Addon::State, dart::dynamics::detail::SupportStateData>::*)() const>(&dart::common::ExtensibleMixer<dart::common::Addon::State, dart::dynamics::detail::SupportStateData>::clone))
.def("copy", static_cast<void (dart::common::ExtensibleMixer<dart::common::Addon::State, dart::dynamics::detail::SupportStateData>::*)(const dart::common::Addon::State &)>(&dart::common::ExtensibleMixer<dart::common::Addon::State, dart::dynamics::detail::SupportStateData>::copy), (::boost::python::arg("other")))
;
}

/* footer */
