#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart10constraint9PGSOptionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::PGSOption, ::boost::noncopyable >("PGSOption", boost::python::no_init)
.def("setDefault", [](dart::constraint::PGSOption *self) -> void { return self->setDefault(); })
.def_readwrite("itermax", &dart::constraint::PGSOption::itermax)
.def_readwrite("sor_w", &dart::constraint::PGSOption::sor_w)
.def_readwrite("eps_ea", &dart::constraint::PGSOption::eps_ea)
.def_readwrite("eps_res", &dart::constraint::PGSOption::eps_res)
.def_readwrite("eps_div", &dart::constraint::PGSOption::eps_div)
;
}

/* footer */