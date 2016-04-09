#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics7Linkage8Criteria8TerminalE_docstring[] = R"CHIMERA_STRING( Any expansion performed by the criteria will be halted if mTerminal is
 reached. If mInclusive is set to true, then mTerminal will be included
 in the Linkage. If mInclusive is set to false, then mTerminal will not
 be included in the Linkage. Note that the BodyNode of mStart may be
 included as an inclusive terminal, but NOT as an exclusive terminal.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics7Linkage8Criteria8TerminalE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Linkage").attr("Criteria"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage::Criteria::Terminal, ::boost::noncopyable >("Terminal", _ZN4dart8dynamics7Linkage8Criteria8TerminalE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Linkage::Criteria::Terminal * { return new dart::dynamics::Linkage::Criteria::Terminal(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _terminal) -> dart::dynamics::Linkage::Criteria::Terminal * { return new dart::dynamics::Linkage::Criteria::Terminal(_terminal); }, ::boost::python::default_call_policies(), (::boost::python::arg("_terminal"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _terminal, bool _inclusive) -> dart::dynamics::Linkage::Criteria::Terminal * { return new dart::dynamics::Linkage::Criteria::Terminal(_terminal, _inclusive); }, ::boost::python::default_call_policies(), (::boost::python::arg("_terminal"), ::boost::python::arg("_inclusive"))))
.def_readwrite("mTerminal", &dart::dynamics::Linkage::Criteria::Terminal::mTerminal)
.def_readwrite("mInclusive", &dart::dynamics::Linkage::Criteria::Terminal::mInclusive)
;
}

/* footer */
