#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint9PGSOptionE()
{
::boost::python::class_<dart::constraint::PGSOption, ::boost::noncopyable >("PGSOption", boost::python::no_init)
.def("setDefault", static_cast<void (dart::constraint::PGSOption::*)()>(&dart::constraint::PGSOption::setDefault))
.def_readwrite("itermax", &dart::constraint::PGSOption::itermax)
.def_readwrite("sor_w", &dart::constraint::PGSOption::sor_w)
.def_readwrite("eps_ea", &dart::constraint::PGSOption::eps_ea)
.def_readwrite("eps_res", &dart::constraint::PGSOption::eps_res)
.def_readwrite("eps_div", &dart::constraint::PGSOption::eps_div)
;
}

/* footer */
