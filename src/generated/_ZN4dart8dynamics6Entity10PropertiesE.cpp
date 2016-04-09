#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6Entity10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Entity"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Entity::Properties >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Entity::Properties * { return new dart::dynamics::Entity::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::dynamics::Entity::Properties * { return new dart::dynamics::Entity::Properties(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def_readwrite("mName", &dart::dynamics::Entity::Properties::mName)
;
}

/* footer */
