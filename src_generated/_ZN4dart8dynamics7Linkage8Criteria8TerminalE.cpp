#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics7Linkage8Criteria8TerminalE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Linkage").attr("Criteria"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage::Criteria::Terminal, ::boost::noncopyable >("Terminal", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *, bool>((::boost::python::arg("_terminal"), ::boost::python::arg("_inclusive"))))
.def_readwrite("mTerminal", &dart::dynamics::Linkage::Criteria::Terminal::mTerminal)
.def_readwrite("mInclusive", &dart::dynamics::Linkage::Criteria::Terminal::mInclusive)
;
}

/* footer */
