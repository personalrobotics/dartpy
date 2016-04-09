#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart5utils12urdf_parsing5WorldE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("urdf_parsing"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::urdf_parsing::World >("World", boost::python::no_init)
.def_readwrite("name", &dart::utils::urdf_parsing::World::name)
.def_readwrite("models", &dart::utils::urdf_parsing::World::models)
;
}

/* footer */
