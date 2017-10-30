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

void _ZN4dart10constraint14ConstraintInfoE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

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
