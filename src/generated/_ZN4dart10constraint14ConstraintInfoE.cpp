#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint14ConstraintInfoE_docstring[] = R"CHIMERA_STRING( ConstraintInfo
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint14ConstraintInfoE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstraintInfo, ::boost::noncopyable >("ConstraintInfo", _ZN4dart10constraint14ConstraintInfoE_docstring, boost::python::no_init)
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
