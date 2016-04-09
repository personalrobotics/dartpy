#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_13RequiresAddonIJNS2_6detail19UniversalJointAddonEEEEEEE_docstring[] = R"CHIMERA_STRING( AddonManagerJoiner allows classes that inherit from various
 SpecializedForAddon types to be inherited by a single derived class.
 This class solves the diamond-of-death problem for multiple
 SpecializedForAddon inheritance.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_13RequiresAddonIJNS2_6detail19UniversalJointAddonEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<2>, dart::common::RequiresAddon<dart::dynamics::detail::UniversalJointAddon> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<2>, dart::common::RequiresAddon<dart::dynamics::detail::UniversalJointAddon> > >("AddonManagerJoiner_TwoDofJoint_RequiresUniversalJointAddon", _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics13MultiDofJointILm2EEENS0_13RequiresAddonIJNS2_6detail19UniversalJointAddonEEEEEEE_docstring, boost::python::no_init)
;
}

/* footer */
