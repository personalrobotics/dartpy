#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint14ConstraintInfoE()
{
::boost::python::class_<dart::constraint::ConstraintInfo, ::boost::noncopyable >("ConstraintInfo", boost::python::no_init)
.def_readwrite("x", &dart::constraint::ConstraintInfo::x)
.def_readwrite("lo", &dart::constraint::ConstraintInfo::lo)
.def_readwrite("hi", &dart::constraint::ConstraintInfo::hi)
.def_readwrite("b", &dart::constraint::ConstraintInfo::b)
.def_readwrite("w", &dart::constraint::ConstraintInfo::w)
.def_readwrite("findex", &dart::constraint::ConstraintInfo::findex)
.def_readwrite("invTimeStep", &dart::constraint::ConstraintInfo::invTimeStep)
;
}

/* footer */
