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

void _ZN4dart5utils12urdf_parsing6EntityE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("urdf_parsing"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::urdf_parsing::Entity >("Entity", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::urdf_parsing::Entity * { return new dart::utils::urdf_parsing::Entity(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const urdf::Entity & urdfEntity) -> dart::utils::urdf_parsing::Entity * { return new dart::utils::urdf_parsing::Entity(urdfEntity); }, ::boost::python::default_call_policies(), (::boost::python::arg("urdfEntity"))))
.def_readwrite("model", &dart::utils::urdf_parsing::Entity::model)
.def_readwrite("origin", &dart::utils::urdf_parsing::Entity::origin)
.def_readwrite("twist", &dart::utils::urdf_parsing::Entity::twist)
.def_readwrite("uri", &dart::utils::urdf_parsing::Entity::uri)
;
}

/* footer */
