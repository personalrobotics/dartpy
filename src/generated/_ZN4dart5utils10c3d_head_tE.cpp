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

void _ZN4dart5utils10c3d_head_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

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
