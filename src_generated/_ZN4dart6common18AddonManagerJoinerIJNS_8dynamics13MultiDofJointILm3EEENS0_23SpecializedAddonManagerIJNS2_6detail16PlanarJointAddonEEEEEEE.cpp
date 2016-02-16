#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_23SpecializedAddonManagerIJNS2_6detail16PlanarJointAddonEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<3>, dart::common::SpecializedAddonManager<dart::dynamics::detail::PlanarJointAddon> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<3>, dart::common::SpecializedAddonManager<dart::dynamics::detail::PlanarJointAddon> > >("_ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm3EEENS0_23SpecializedAddonManagerIJNS2_6detail16PlanarJointAddonEEEEEEE", boost::python::no_init)
;
}

/* footer */
