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

void _ZN4dart8dynamics5Joint18ExtendedPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Joint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Joint::ExtendedProperties, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::JointProperties > >("ExtendedProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Joint::ExtendedProperties * { return new dart::dynamics::Joint::ExtendedProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & standardProperties) -> dart::dynamics::Joint::ExtendedProperties * { return new dart::dynamics::Joint::ExtendedProperties(standardProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("standardProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & standardProperties, const dart::dynamics::Joint::CompositeProperties & aspectProperties) -> dart::dynamics::Joint::ExtendedProperties * { return new dart::dynamics::Joint::ExtendedProperties(standardProperties, aspectProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("standardProperties"), ::boost::python::arg("aspectProperties"))))
.def_readwrite("mCompositeProperties", &dart::dynamics::Joint::ExtendedProperties::mCompositeProperties)
;
}

/* footer */
