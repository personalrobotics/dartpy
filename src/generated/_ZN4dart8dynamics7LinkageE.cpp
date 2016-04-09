#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics7LinkageE_docstring[] = R"CHIMERA_STRING( A Linkage is a ReferentialSkeleton with the special property that all the
 BodyNodes included in it form a contiguous graph. This property is only
 guaranteed during construction of the Linkage. After the Linkage has been
 constructed, a user might alter how the BodyNodes in a Linkage are
 assembled. The function Linkage::isAssembled() can be used to check whether
 the Linkage is still assembled. The function Linkage::satisfyCriteria() can
 be used to redefine the Linkage so that the original Linkage::Criteria is
 met again. The function Linkage::reassemble() will reassemble the BodyNodes
 so that they match whatever assembly they had the last time
 Linkage::reassemble() was called (or the assembly that they had when the
 Linkage was constructed, if Linkage::reassemble has never been called).
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Linkage6createERKNS1_8CriteriaERKSs_docstring[] = R"CHIMERA_STRING( Create a Linkage with the given Criteria
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Linkage11isAssembledEv_docstring[] = R"CHIMERA_STRING( Returns false if the original assembly of this Linkage has been broken in
 some way
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Linkage10reassembleEv_docstring[] = R"CHIMERA_STRING( Revert the assembly of this Linkage to its original structure
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics7Linkage15satisfyCriteriaEv_docstring[] = R"CHIMERA_STRING( Redefine this Linkage so that its Criteria is satisfied
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics7LinkageE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage, ::boost::noncopyable, dart::dynamics::LinkagePtr, ::boost::python::bases<dart::dynamics::ReferentialSkeleton > >("Linkage", _ZN4dart8dynamics7LinkageE_docstring, boost::python::no_init)
.def("isAssembled", [](const dart::dynamics::Linkage *self) -> bool { return self->isAssembled(); }, _ZNK4dart8dynamics7Linkage11isAssembledEv_docstring)
.def("reassemble", [](dart::dynamics::Linkage *self) -> void { return self->reassemble(); }, _ZN4dart8dynamics7Linkage10reassembleEv_docstring)
.def("satisfyCriteria", [](dart::dynamics::Linkage *self) -> void { return self->satisfyCriteria(); }, _ZN4dart8dynamics7Linkage15satisfyCriteriaEv_docstring)
.def("create", [](const dart::dynamics::Linkage::Criteria & _criteria) -> dart::dynamics::LinkagePtr { return dart::dynamics::Linkage::create(_criteria); }, (::boost::python::arg("_criteria")))
.def("create", [](const dart::dynamics::Linkage::Criteria & _criteria, const std::string & _name) -> dart::dynamics::LinkagePtr { return dart::dynamics::Linkage::create(_criteria, _name); }, (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.staticmethod("create")
;
}

/* footer */
