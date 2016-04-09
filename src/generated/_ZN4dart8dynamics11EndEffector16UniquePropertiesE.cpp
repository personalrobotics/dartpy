#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics11EndEffector16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("EndEffector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::EndEffector::UniqueProperties * { return new dart::dynamics::EndEffector::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Isometry3d & _defaultTransform) -> dart::dynamics::EndEffector::UniqueProperties * { return new dart::dynamics::EndEffector::UniqueProperties(_defaultTransform); }, ::boost::python::default_call_policies(), (::boost::python::arg("_defaultTransform"))))
.def_readwrite("mDefaultTransform", &dart::dynamics::EndEffector::UniqueProperties::mDefaultTransform)
;
}

/* footer */
