#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics5ChainE_docstring[] = R"CHIMERA_STRING( Chain is a specialized type of Linkage that represents a single unbranching
 and fully connected sequence of BodyNodes. A chain will start from a
 specified BodyNode and include every BodyNode on the way to a target
 BodyNode, except it will stop if it encounters a branching (BodyNode with
 multiple child BodyNodes) or a FreeJoint.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Chain6createERKNS1_8CriteriaERKSs_docstring[] = R"CHIMERA_STRING( Create a Chain given some Chain::Criteria
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Chain6createEPNS0_8BodyNodeES3_RKSs_docstring[] = R"CHIMERA_STRING( Create a Chain given a start and a target BodyNode. Note that whichever
 BodyNode is upstream of the other will be excluded from the Chain.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Chain6createEPNS0_8BodyNodeES3_NS1_13IncludeBoth_tERKSs_docstring[] = R"CHIMERA_STRING( Create a Chain given a start and a target BodyNode. In this version, both
 BodyNodes will be included in the Chain that gets created.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Chain12isStillChainEv_docstring[] = R"CHIMERA_STRING( Returns false if this Chain has been broken, or some new Branching has
 been added.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics5ChainE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Chain, ::boost::noncopyable, dart::dynamics::ChainPtr, ::boost::python::bases<dart::dynamics::Linkage > >("Chain", _ZN4dart8dynamics5ChainE_docstring, boost::python::no_init)
.def("isStillChain", [](const dart::dynamics::Chain *self) -> bool { return self->isStillChain(); }, _ZNK4dart8dynamics5Chain12isStillChainEv_docstring)
.def("create", [](const dart::dynamics::Chain::Criteria & _criteria) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_criteria); }, (::boost::python::arg("_criteria")))
.def("create", [](const dart::dynamics::Chain::Criteria & _criteria, const std::string & _name) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_criteria, _name); }, (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target); }, (::boost::python::arg("_start"), ::boost::python::arg("_target")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, const std::string & _name) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target, _name); }, (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_name")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, dart::dynamics::Chain::IncludeBoth_t _arg2_) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target, _arg2_); }, (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_arg2_")))
.def("create", [](dart::dynamics::BodyNode * _start, dart::dynamics::BodyNode * _target, dart::dynamics::Chain::IncludeBoth_t _arg2_, const std::string & _name) -> dart::dynamics::ChainPtr { return dart::dynamics::Chain::create(_start, _target, _arg2_, _name); }, (::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_arg2_"), ::boost::python::arg("_name")))
.staticmethod("create")
;
}

/* footer */
