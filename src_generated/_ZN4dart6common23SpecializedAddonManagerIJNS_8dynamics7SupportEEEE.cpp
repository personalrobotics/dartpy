#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics7SupportEEEE()
{
::boost::python::class_<dart::common::SpecializedAddonManager<dart::dynamics::Support>, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManager > >("_ZN4dart6common23SpecializedAddonManagerIJNS_8dynamics7SupportEEEE", boost::python::no_init)
.def(::boost::python::init<>())
;
}

/* footer */
