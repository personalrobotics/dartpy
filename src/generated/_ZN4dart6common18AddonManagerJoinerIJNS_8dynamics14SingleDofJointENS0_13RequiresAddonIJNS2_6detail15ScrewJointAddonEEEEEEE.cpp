#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail15ScrewJointAddonEEEEEEE_docstring[] = R"CHIMERA_STRING( AddonManagerJoiner allows classes that inherit from various
 SpecializedForAddon types to be inherited by a single derived class.
 This class solves the diamond-of-death problem for multiple
 SpecializedForAddon inheritance.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail15ScrewJointAddonEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::RequiresAddon<dart::dynamics::detail::ScrewJointAddon> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::SingleDofJoint, dart::common::RequiresAddon<dart::dynamics::detail::ScrewJointAddon> > >("AddonManagerJoiner_SingleDofJoint_RequiresScrewJointAddon", _ZN4dart6common18AddonManagerJoinerIJNS_8dynamics14SingleDofJointENS0_13RequiresAddonIJNS2_6detail15ScrewJointAddonEEEEEEE_docstring, boost::python::no_init)
;
}

/* footer */
