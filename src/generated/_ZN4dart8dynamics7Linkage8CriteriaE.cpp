#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics7Linkage8CriteriaE_docstring[] = R"CHIMERA_STRING( The Criteria class is used to specify how a Linkage should be constructed
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Linkage8Criteria7satisfyEv_docstring[] = R"CHIMERA_STRING( Return a vector of BodyNodes that satisfy the parameters of the Criteria
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics7Linkage8CriteriaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Linkage"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage::Criteria >("Criteria", _ZN4dart8dynamics7Linkage8CriteriaE_docstring, boost::python::no_init)
.def("satisfy", [](const dart::dynamics::Linkage::Criteria *self) -> std::vector<dart::dynamics::BodyNode *> { return self->satisfy(); }, _ZNK4dart8dynamics7Linkage8Criteria7satisfyEv_docstring)
.def_readwrite("mStart", &dart::dynamics::Linkage::Criteria::mStart)
.def_readwrite("mTargets", &dart::dynamics::Linkage::Criteria::mTargets)
.def_readwrite("mTerminals", &dart::dynamics::Linkage::Criteria::mTerminals)
;
}

/* footer */
