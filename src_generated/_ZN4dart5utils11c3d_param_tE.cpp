#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils11c3d_param_tE()
{
::boost::python::class_<dart::utils::c3d_param_t, ::boost::noncopyable >("c3d_param_t", boost::python::no_init)
.def_readonly("reserved", &dart::utils::c3d_param_t::reserved)
.def_readwrite("pblocks", &dart::utils::c3d_param_t::pblocks)
.def_readwrite("ftype", &dart::utils::c3d_param_t::ftype)
.def_readonly("stuff", &dart::utils::c3d_param_t::stuff)
;
}

/* footer */
