#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart5utils12urdf_parsing6EntityE_docstring[] = R"CHIMERA_STRING( We need a customized version of the Entity class, because we need to keep
 track of a Skeleton's uri in order to correctly handle relative file paths.
)CHIMERA_STRING";


} // namespace

void _ZN4dart5utils12urdf_parsing6EntityE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("urdf_parsing"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::urdf_parsing::Entity >("Entity", _ZN4dart5utils12urdf_parsing6EntityE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::urdf_parsing::Entity * { return new dart::utils::urdf_parsing::Entity(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const urdf::Entity & urdfEntity) -> dart::utils::urdf_parsing::Entity * { return new dart::utils::urdf_parsing::Entity(urdfEntity); }, ::boost::python::default_call_policies(), (::boost::python::arg("urdfEntity"))))
.def_readwrite("model", &dart::utils::urdf_parsing::Entity::model)
.def_readwrite("origin", &dart::utils::urdf_parsing::Entity::origin)
.def_readwrite("twist", &dart::utils::urdf_parsing::Entity::twist)
.def_readwrite("uri", &dart::utils::urdf_parsing::Entity::uri)
;
}

/* footer */
