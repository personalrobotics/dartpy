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

void _ZN4dart6common12UriComponentE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::UriComponent >("UriComponent", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::UriComponent * { return new dart::common::UriComponent(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::common::UriComponent::reference_const_type _value) -> dart::common::UriComponent * { return new dart::common::UriComponent(_value); }, ::boost::python::default_call_policies(), (::boost::python::arg("_value"))))
.def("assign", [](dart::common::UriComponent *self, dart::common::UriComponent::reference_const_type _value) -> void { return self->assign(_value); }, (::boost::python::arg("_value")))
.def("reset", [](dart::common::UriComponent *self) -> void { return self->reset(); })
.def("get", [](dart::common::UriComponent *self) -> dart::common::UriComponent::reference_type { return self->get(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("get", [](const dart::common::UriComponent *self) -> dart::common::UriComponent::reference_const_type { return self->get(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("get_value_or", [](dart::common::UriComponent *self, dart::common::UriComponent::reference_type _default) -> dart::common::UriComponent::reference_type { return self->get_value_or(_default); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >(), (::boost::python::arg("_default")))
.def("get_value_or", [](const dart::common::UriComponent *self, dart::common::UriComponent::reference_const_type _default) -> dart::common::UriComponent::reference_const_type { return self->get_value_or(_default); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("_default")))
;
}

/* footer */
