#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils13c3d_frameSI_tE()
{
::boost::python::class_<dart::utils::c3d_frameSI_t, ::boost::noncopyable >("c3d_frameSI_t", boost::python::no_init)
.def_readwrite("x", &dart::utils::c3d_frameSI_t::x)
.def_readwrite("y", &dart::utils::c3d_frameSI_t::y)
.def_readwrite("z", &dart::utils::c3d_frameSI_t::z)
.def_readwrite("cam_byte", &dart::utils::c3d_frameSI_t::cam_byte)
.def_readwrite("residual", &dart::utils::c3d_frameSI_t::residual)
;
}

/* footer */
