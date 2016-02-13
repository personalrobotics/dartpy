#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics7Linkage8Criteria8TerminalE()
{
::boost::python::class_<dart::dynamics::Linkage::Criteria::Terminal, ::boost::noncopyable >("Terminal", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *, bool>((::boost::python::arg("_terminal") = 0, ::boost::python::arg("_inclusive") = true)))
.def_readwrite("mTerminal", &dart::dynamics::Linkage::Criteria::Terminal::mTerminal)
.def_readwrite("mInclusive", &dart::dynamics::Linkage::Criteria::Terminal::mInclusive)
;
}

/* footer */
