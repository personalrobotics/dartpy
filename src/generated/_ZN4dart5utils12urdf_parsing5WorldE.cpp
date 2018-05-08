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

void _ZN4dart5utils12urdf_parsing5WorldE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("urdf_parsing"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::urdf_parsing::World, ::boost::noncopyable >("World", boost::python::no_init)
.def_readwrite("name", &dart::utils::urdf_parsing::World::name)
.def_readwrite("models", &dart::utils::urdf_parsing::World::models)
;
}

/* footer */
