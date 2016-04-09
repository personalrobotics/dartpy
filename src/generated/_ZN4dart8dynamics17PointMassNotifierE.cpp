#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17PointMassNotifierE_docstring[] = R"CHIMERA_STRING( Entity class is a base class for any objects that exist in the kinematic
 tree structure of DART.
 Entities all share the following properties: they exist within a reference
 frame, have a name, and are visualizable. However, different Entity types
 may have different policies about how/if their reference frame or name
 can be changed. Use the Detachable class to create an Entity whose reference
 Frame can be changed arbitrarily.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17PointMassNotifier21notifyTransformUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Entity that its parent Frame's pose has changed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17PointMassNotifier20notifyVelocityUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Entity that its parent Frame's velocity has changed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17PointMassNotifier24notifyAccelerationUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Entity that its parent Frame's acceleration has changed
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17PointMassNotifierE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMassNotifier, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Entity > >("PointMassNotifier", _ZN4dart8dynamics17PointMassNotifierE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::SoftBodyNode * _parentSoftBody, const std::string & _name) -> dart::dynamics::PointMassNotifier * { return new dart::dynamics::PointMassNotifier(_parentSoftBody, _name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_parentSoftBody"), ::boost::python::arg("_name"))))
.def("needsPartialAccelerationUpdate", [](const dart::dynamics::PointMassNotifier *self) -> bool { return self->needsPartialAccelerationUpdate(); })
.def("clearTransformNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearTransformNotice(); })
.def("clearVelocityNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearVelocityNotice(); })
.def("clearPartialAccelerationNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearPartialAccelerationNotice(); })
.def("clearAccelerationNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearAccelerationNotice(); })
.def("notifyTransformUpdate", [](dart::dynamics::PointMassNotifier *self) -> void { return self->notifyTransformUpdate(); }, _ZN4dart8dynamics17PointMassNotifier21notifyTransformUpdateEv_docstring)
.def("notifyVelocityUpdate", [](dart::dynamics::PointMassNotifier *self) -> void { return self->notifyVelocityUpdate(); }, _ZN4dart8dynamics17PointMassNotifier20notifyVelocityUpdateEv_docstring)
.def("notifyAccelerationUpdate", [](dart::dynamics::PointMassNotifier *self) -> void { return self->notifyAccelerationUpdate(); }, _ZN4dart8dynamics17PointMassNotifier24notifyAccelerationUpdateEv_docstring)
;
}

/* footer */
