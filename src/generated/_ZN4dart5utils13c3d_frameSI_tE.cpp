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

void _ZN4dart5utils13c3d_frameSI_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::c3d_frameSI_t, ::boost::noncopyable >("c3d_frameSI_t", boost::python::no_init)
.def_readwrite("x", &dart::utils::c3d_frameSI_t::x)
.def_readwrite("y", &dart::utils::c3d_frameSI_t::y)
.def_readwrite("z", &dart::utils::c3d_frameSI_t::z)
.def_readwrite("cam_byte", &dart::utils::c3d_frameSI_t::cam_byte)
.def_readwrite("residual", &dart::utils::c3d_frameSI_t::residual)
;
}

/* footer */
