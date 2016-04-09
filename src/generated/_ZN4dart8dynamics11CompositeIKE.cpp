#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics11CompositeIKE_docstring[] = R"CHIMERA_STRING( The CompositeIK class allows you to specify an arbitrary hierarchy of
 InverseKinematics modules for a single Skeleton. Simply add in each IK
 module that should be used.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11CompositeIK6createERKSt10shared_ptrINS0_8SkeletonEE_docstring[] = R"CHIMERA_STRING( Create a CompositeIK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11CompositeIK5cloneERKSt10shared_ptrINS0_8SkeletonEE_docstring[] = R"CHIMERA_STRING( Clone this HierarchicalIK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11CompositeIK16cloneCompositeIKERKSt10shared_ptrINS0_8SkeletonEE_docstring[] = R"CHIMERA_STRING( Same as clone(), but passes back a more complete type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11CompositeIK9addModuleERKSt10shared_ptrINS0_17InverseKinematicsEE_docstring[] = R"CHIMERA_STRING( Add an IK module to this CompositeIK. This function will return true if
 the module belongs to the Skeleton that this CompositeIK is associated
 with, otherwise it will return false.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11CompositeIK12getModuleSetEv_docstring[] = R"CHIMERA_STRING( Get the set of modules being used by this CompositeIK
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11CompositeIK12getModuleSetEv_docstring[] = R"CHIMERA_STRING( Get the set of modules being used by this CompositeIK
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11CompositeIK18refreshIKHierarchyEv_docstring[] = R"CHIMERA_STRING( Refresh the IK hierarchy of this IK module
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics11CompositeIKE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CompositeIK, ::boost::python::bases<dart::dynamics::HierarchicalIK > >("CompositeIK", _ZN4dart8dynamics11CompositeIKE_docstring, boost::python::no_init)
.def("clone", [](const dart::dynamics::CompositeIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::HierarchicalIK> { return self->clone(_newSkel); }, _ZNK4dart8dynamics11CompositeIK5cloneERKSt10shared_ptrINS0_8SkeletonEE_docstring, (::boost::python::arg("_newSkel")))
.def("cloneCompositeIK", [](const dart::dynamics::CompositeIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::CompositeIK> { return self->cloneCompositeIK(_newSkel); }, _ZNK4dart8dynamics11CompositeIK16cloneCompositeIKERKSt10shared_ptrINS0_8SkeletonEE_docstring, (::boost::python::arg("_newSkel")))
.def("addModule", [](dart::dynamics::CompositeIK *self, const std::shared_ptr<dart::dynamics::InverseKinematics> & _ik) -> bool { return self->addModule(_ik); }, _ZN4dart8dynamics11CompositeIK9addModuleERKSt10shared_ptrINS0_17InverseKinematicsEE_docstring, (::boost::python::arg("_ik")))
.def("getModuleSet", [](dart::dynamics::CompositeIK *self) -> const dart::dynamics::CompositeIK::ModuleSet & { return self->getModuleSet(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics11CompositeIK12getModuleSetEv_docstring)
.def("getModuleSet", [](const dart::dynamics::CompositeIK *self) -> dart::dynamics::CompositeIK::ConstModuleSet { return self->getModuleSet(); }, _ZNK4dart8dynamics11CompositeIK12getModuleSetEv_docstring)
.def("refreshIKHierarchy", [](dart::dynamics::CompositeIK *self) -> void { return self->refreshIKHierarchy(); }, _ZN4dart8dynamics11CompositeIK18refreshIKHierarchyEv_docstring)
.def("create", [](const dart::dynamics::SkeletonPtr & _skel) -> std::shared_ptr<dart::dynamics::CompositeIK> { return dart::dynamics::CompositeIK::create(_skel); }, (::boost::python::arg("_skel")))
.staticmethod("create")
;
}

/* footer */
