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

void _ZN4dart8dynamics6detail21SupportPropertiesDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SupportPropertiesData >("SupportPropertiesData", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::SupportPropertiesData * { return new dart::dynamics::detail::SupportPropertiesData(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::math::SupportGeometry & geometry) -> dart::dynamics::detail::SupportPropertiesData * { return new dart::dynamics::detail::SupportPropertiesData(geometry); }, ::boost::python::default_call_policies(), (::boost::python::arg("geometry"))))
.def_readwrite("mGeometry", &dart::dynamics::detail::SupportPropertiesData::mGeometry)
;
}

/* footer */
