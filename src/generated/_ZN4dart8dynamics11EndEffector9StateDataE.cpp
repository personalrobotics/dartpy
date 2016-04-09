#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics11EndEffector9StateDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("EndEffector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector::StateData, ::boost::noncopyable >("StateData", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::EndEffector::StateData * { return new dart::dynamics::EndEffector::StateData(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Isometry3d & relativeTransform) -> dart::dynamics::EndEffector::StateData * { return new dart::dynamics::EndEffector::StateData(relativeTransform); }, ::boost::python::default_call_policies(), (::boost::python::arg("relativeTransform"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Isometry3d & relativeTransform, const dart::common::AddonManager::State & addonStates) -> dart::dynamics::EndEffector::StateData * { return new dart::dynamics::EndEffector::StateData(relativeTransform, addonStates); }, ::boost::python::default_call_policies(), (::boost::python::arg("relativeTransform"), ::boost::python::arg("addonStates"))))
.def_readwrite("mRelativeTransform", &dart::dynamics::EndEffector::StateData::mRelativeTransform)
.def_readwrite("mAddonStates", &dart::dynamics::EndEffector::StateData::mAddonStates)
;
}

/* footer */
