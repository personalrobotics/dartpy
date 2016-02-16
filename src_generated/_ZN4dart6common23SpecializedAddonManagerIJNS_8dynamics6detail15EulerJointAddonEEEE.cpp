#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail15EulerJointAddonEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedAddonManager<dart::dynamics::detail::EulerJointAddon>, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManager > >("_ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics6detail15EulerJointAddonEEEE", boost::python::no_init)
.def(::boost::python::init<>())
;
}

/* footer */
