#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_23SpecializedAddonManagerIJNS2_6detail19UniversalJointAddonEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<2>, dart::common::SpecializedAddonManager<dart::dynamics::detail::UniversalJointAddon> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<2>, dart::common::SpecializedAddonManager<dart::dynamics::detail::UniversalJointAddon> > >("_ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_23SpecializedAddonManagerIJNS2_6detail19UniversalJointAddonEEEEEEE", boost::python::no_init)
;
}

/* footer */
