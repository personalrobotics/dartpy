#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics7Linkage8Criteria8TerminalE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Linkage").attr("Criteria"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage::Criteria::Terminal, ::boost::noncopyable >("Terminal", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Linkage::Criteria::Terminal * { return new dart::dynamics::Linkage::Criteria::Terminal(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _terminal) -> dart::dynamics::Linkage::Criteria::Terminal * { return new dart::dynamics::Linkage::Criteria::Terminal(_terminal); }, ::boost::python::default_call_policies(), (::boost::python::arg("_terminal"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::BodyNode * _terminal, bool _inclusive) -> dart::dynamics::Linkage::Criteria::Terminal * { return new dart::dynamics::Linkage::Criteria::Terminal(_terminal, _inclusive); }, ::boost::python::default_call_policies(), (::boost::python::arg("_terminal"), ::boost::python::arg("_inclusive"))))
.def_readwrite("mTerminal", &dart::dynamics::Linkage::Criteria::Terminal::mTerminal)
.def_readwrite("mInclusive", &dart::dynamics::Linkage::Criteria::Terminal::mInclusive)
;
}

/* footer */
