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

void _ZN4dart8dynamics17PointMassNotifierE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMassNotifier, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Entity > >("PointMassNotifier", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::SoftBodyNode * _parentSoftBody, const std::string & _name) -> dart::dynamics::PointMassNotifier * { return new dart::dynamics::PointMassNotifier(_parentSoftBody, _name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_parentSoftBody"), ::boost::python::arg("_name"))))
.def("needsPartialAccelerationUpdate", [](const dart::dynamics::PointMassNotifier *self) -> bool { return self->needsPartialAccelerationUpdate(); })
.def("clearTransformNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearTransformNotice(); })
.def("clearVelocityNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearVelocityNotice(); })
.def("clearPartialAccelerationNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearPartialAccelerationNotice(); })
.def("clearAccelerationNotice", [](dart::dynamics::PointMassNotifier *self) -> void { return self->clearAccelerationNotice(); })
.def("dirtyTransform", [](dart::dynamics::PointMassNotifier *self) -> void { return self->dirtyTransform(); })
.def("dirtyVelocity", [](dart::dynamics::PointMassNotifier *self) -> void { return self->dirtyVelocity(); })
.def("dirtyAcceleration", [](dart::dynamics::PointMassNotifier *self) -> void { return self->dirtyAcceleration(); })
.def("setName", [](dart::dynamics::PointMassNotifier *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::PointMassNotifier *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
