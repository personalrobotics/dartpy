#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils10c3d_head_tE()
{
::boost::python::class_<dart::utils::c3d_head_t, ::boost::noncopyable >("c3d_head_t", boost::python::no_init)
.def_readwrite("prec_start", &dart::utils::c3d_head_t::prec_start)
.def_readwrite("key", &dart::utils::c3d_head_t::key)
.def_readwrite("pnt_cnt", &dart::utils::c3d_head_t::pnt_cnt)
.def_readwrite("a_channels", &dart::utils::c3d_head_t::a_channels)
.def_readwrite("start_frame", &dart::utils::c3d_head_t::start_frame)
.def_readwrite("end_frame", &dart::utils::c3d_head_t::end_frame)
.def_readwrite("int_gap", &dart::utils::c3d_head_t::int_gap)
.def_readwrite("scale", &dart::utils::c3d_head_t::scale)
.def_readwrite("rec_start", &dart::utils::c3d_head_t::rec_start)
.def_readwrite("a_frames", &dart::utils::c3d_head_t::a_frames)
.def_readwrite("freq", &dart::utils::c3d_head_t::freq)
.def_readonly("stuff", &dart::utils::c3d_head_t::stuff)
;
}

/* footer */
