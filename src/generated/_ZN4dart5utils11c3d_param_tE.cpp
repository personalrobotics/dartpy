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

void _ZN4dart5utils11c3d_param_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::c3d_param_t, ::boost::noncopyable >("c3d_param_t", boost::python::no_init)
.def_readonly("reserved", &dart::utils::c3d_param_t::reserved)
.def_readwrite("pblocks", &dart::utils::c3d_param_t::pblocks)
.def_readwrite("ftype", &dart::utils::c3d_param_t::ftype)
.def_readonly("stuff", &dart::utils::c3d_param_t::stuff)
;
}

/* footer */
