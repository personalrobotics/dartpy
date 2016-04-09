#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint16ConstrainedGroupE_docstring[] = R"CHIMERA_STRING( ConstrainedGroup is a group of skeletons that interact each other with
 constraints
 
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstrainedGroup13addConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring[] = R"CHIMERA_STRING( Add constraint
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint16ConstrainedGroup17getNumConstraintsEv_docstring[] = R"CHIMERA_STRING( Return number of constraints in this constrained group
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint16ConstrainedGroup13getConstraintEm_docstring[] = R"CHIMERA_STRING( Return a constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstrainedGroup16removeConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring[] = R"CHIMERA_STRING( Remove constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstrainedGroup20removeAllConstraintsEv_docstring[] = R"CHIMERA_STRING( Remove all constraints
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint16ConstrainedGroup17getTotalDimensionEv_docstring[] = R"CHIMERA_STRING( Get total dimension of contraints in this group
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint16ConstrainedGroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstrainedGroup, ::boost::noncopyable >("ConstrainedGroup", _ZN4dart10constraint16ConstrainedGroupE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::constraint::ConstrainedGroup * { return new dart::constraint::ConstrainedGroup(); }, ::boost::python::default_call_policies()))
.def("addConstraint", [](dart::constraint::ConstrainedGroup *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->addConstraint(_constraint); }, _ZN4dart10constraint16ConstrainedGroup13addConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring, (::boost::python::arg("_constraint")))
.def("getNumConstraints", [](const dart::constraint::ConstrainedGroup *self) -> std::size_t { return self->getNumConstraints(); }, _ZNK4dart10constraint16ConstrainedGroup17getNumConstraintsEv_docstring)
.def("getConstraint", [](const dart::constraint::ConstrainedGroup *self, std::size_t _index) -> dart::constraint::ConstraintBasePtr { return self->getConstraint(_index); }, _ZNK4dart10constraint16ConstrainedGroup13getConstraintEm_docstring, (::boost::python::arg("_index")))
.def("removeConstraint", [](dart::constraint::ConstrainedGroup *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->removeConstraint(_constraint); }, _ZN4dart10constraint16ConstrainedGroup16removeConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring, (::boost::python::arg("_constraint")))
.def("removeAllConstraints", [](dart::constraint::ConstrainedGroup *self) -> void { return self->removeAllConstraints(); }, _ZN4dart10constraint16ConstrainedGroup20removeAllConstraintsEv_docstring)
.def("getTotalDimension", [](const dart::constraint::ConstrainedGroup *self) -> std::size_t { return self->getTotalDimension(); }, _ZNK4dart10constraint16ConstrainedGroup17getTotalDimensionEv_docstring)
;
}

/* footer */
