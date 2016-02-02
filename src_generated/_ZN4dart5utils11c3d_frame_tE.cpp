#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils11c3d_frame_tE()
{
::boost::python::class_<dart::utils::c3d_frame_t, ::boost::noncopyable >("c3d_frame_t", boost::python::no_init)
.def_readwrite("x", &dart::utils::c3d_frame_t::x)
.def_readwrite("y", &dart::utils::c3d_frame_t::y)
.def_readwrite("z", &dart::utils::c3d_frame_t::z)
.def_readwrite("residual", &dart::utils::c3d_frame_t::residual)
;
}

/* footer */
