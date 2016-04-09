#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics11WholeBodyIKE_docstring[] = R"CHIMERA_STRING( The WholeBodyIK class provides an interface for simultaneously solving all
 the IK constraints of all BodyNodes and EndEffectors belonging to a single
 Skeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11WholeBodyIK6createERKSt10shared_ptrINS0_8SkeletonEE_docstring[] = R"CHIMERA_STRING( Create a WholeBodyIK
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11WholeBodyIK5cloneERKSt10shared_ptrINS0_8SkeletonEE_docstring[] = R"CHIMERA_STRING( Clone this HierarchicalIK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11WholeBodyIK16cloneWholeBodyIKERKSt10shared_ptrINS0_8SkeletonEE_docstring[] = R"CHIMERA_STRING( Same as clone(), but produces a more complete type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11WholeBodyIK18refreshIKHierarchyEv_docstring[] = R"CHIMERA_STRING( Refresh the IK hierarchy of this IK module
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics11WholeBodyIKE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WholeBodyIK, ::boost::python::bases<dart::dynamics::HierarchicalIK > >("WholeBodyIK", _ZN4dart8dynamics11WholeBodyIKE_docstring, boost::python::no_init)
.def("clone", [](const dart::dynamics::WholeBodyIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::HierarchicalIK> { return self->clone(_newSkel); }, _ZNK4dart8dynamics11WholeBodyIK5cloneERKSt10shared_ptrINS0_8SkeletonEE_docstring, (::boost::python::arg("_newSkel")))
.def("cloneWholeBodyIK", [](const dart::dynamics::WholeBodyIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::WholeBodyIK> { return self->cloneWholeBodyIK(_newSkel); }, _ZNK4dart8dynamics11WholeBodyIK16cloneWholeBodyIKERKSt10shared_ptrINS0_8SkeletonEE_docstring, (::boost::python::arg("_newSkel")))
.def("refreshIKHierarchy", [](dart::dynamics::WholeBodyIK *self) -> void { return self->refreshIKHierarchy(); }, _ZN4dart8dynamics11WholeBodyIK18refreshIKHierarchyEv_docstring)
.def("create", [](const dart::dynamics::SkeletonPtr & _skel) -> std::shared_ptr<dart::dynamics::WholeBodyIK> { return dart::dynamics::WholeBodyIK::create(_skel); }, (::boost::python::arg("_skel")))
.staticmethod("create")
;
}

/* footer */
