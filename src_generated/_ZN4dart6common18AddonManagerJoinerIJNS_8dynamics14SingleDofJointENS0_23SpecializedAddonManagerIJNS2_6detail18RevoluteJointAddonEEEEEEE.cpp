#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail18RevoluteJointAddonEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::SpecializedAddonManager<dart::dynamics::detail::RevoluteJointAddon> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::SingleDofJoint, dart::common::SpecializedAddonManager<dart::dynamics::detail::RevoluteJointAddon> > >("_ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_23SpecializedAddonManagerIJNS2_6detail18RevoluteJointAddonEEEEEEE", boost::python::no_init)
;
}

/* footer */
