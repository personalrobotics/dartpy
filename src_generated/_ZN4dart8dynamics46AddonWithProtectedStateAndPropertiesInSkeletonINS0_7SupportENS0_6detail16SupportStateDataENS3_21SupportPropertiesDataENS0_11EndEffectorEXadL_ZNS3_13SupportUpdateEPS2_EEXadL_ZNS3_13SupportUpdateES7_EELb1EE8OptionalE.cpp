#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics46AddonWithProtectedStateAndPropertiesInSkeletonINS0_7SupportENS0_6detail16SupportStateDataENS3_21SupportPropertiesDataENS0_11EndEffectorEXadL_ZNS3_13SupportUpdateEPS2_EEXadL_ZNS3_13SupportUpdateES7_EELb1EE8OptionalE()
{
::boost::python::scope().attr("Optional") = dart::dynamics::AddonWithProtectedStateAndPropertiesInSkeleton<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate, true>::Optional;
}

/* footer */
