#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail21SupportPropertiesDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SupportPropertiesData >("SupportPropertiesData", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::SupportPropertiesData * { return new dart::dynamics::detail::SupportPropertiesData(); }, ::boost::python::default_call_policies()))
.def_readwrite("mGeometry", &dart::dynamics::detail::SupportPropertiesData::mGeometry)
;
}

/* footer */
