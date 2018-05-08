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

void _ZN4dart6common6detail15AspectWithStateINS0_23CompositeTrackingAspectINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector> > >("AspectWithState_EndEffector_Support_SupportStateData_EndEffector_SupportUpdate", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>(state); }, ::boost::python::default_call_policies(), (::boost::python::arg("state"))))
.def("setAspectState", [](dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self, const dart::common::Aspect::State & otherState) -> void { return self->setAspectState(otherState); }, (::boost::python::arg("otherState")))
.def("setState", [](dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self, const dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> void { return self->setState(state); }, (::boost::python::arg("state")))
.def("getState", [](const dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self) -> const dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>::State & { return self->getState(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("cloneAspect", [](const dart::common::detail::AspectWithState<dart::common::CompositeTrackingAspect<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
