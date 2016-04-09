#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6BranchE_docstring[] = R"CHIMERA_STRING( Branch is a specialized type of Linkage that represents a complete subtree
 of a Skeleton. The Branch will start at a specific BodyNode and will include
 every BodyNode that descends from it, all the way to the leaves.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Branch6createERKNS1_8CriteriaERKSs_docstring[] = R"CHIMERA_STRING( Create a Branch
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Branch13isStillBranchEv_docstring[] = R"CHIMERA_STRING( Returns false if a new BodyNode has been attached to any BodyNode of this
 Branch, or if a BodyNode of this Branch has been detached.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6BranchE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Branch, ::boost::noncopyable, dart::dynamics::BranchPtr, ::boost::python::bases<dart::dynamics::Linkage > >("Branch", _ZN4dart8dynamics6BranchE_docstring, boost::python::no_init)
.def("isStillBranch", [](const dart::dynamics::Branch *self) -> bool { return self->isStillBranch(); }, _ZNK4dart8dynamics6Branch13isStillBranchEv_docstring)
.def("create", [](const dart::dynamics::Branch::Criteria & _criteria) -> dart::dynamics::BranchPtr { return dart::dynamics::Branch::create(_criteria); }, (::boost::python::arg("_criteria")))
.def("create", [](const dart::dynamics::Branch::Criteria & _criteria, const std::string & _name) -> dart::dynamics::BranchPtr { return dart::dynamics::Branch::create(_criteria, _name); }, (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.staticmethod("create")
;
}

/* footer */
