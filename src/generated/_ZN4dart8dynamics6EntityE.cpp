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

void _ZN4dart8dynamics6EntityE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Entity, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("Entity", boost::python::no_init)
.def("setName", [](dart::dynamics::Entity *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::Entity *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getParentFrame", [](dart::dynamics::Entity *self) -> dart::dynamics::Frame * { return self->getParentFrame(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("descendsFrom", [](const dart::dynamics::Entity *self, const dart::dynamics::Frame * _someFrame) -> bool { return self->descendsFrom(_someFrame); }, (::boost::python::arg("_someFrame")))
.def("isFrame", [](const dart::dynamics::Entity *self) -> bool { return self->isFrame(); })
.def("isQuiet", [](const dart::dynamics::Entity *self) -> bool { return self->isQuiet(); })
.def("notifyTransformUpdate", [](dart::dynamics::Entity *self) -> void { return self->notifyTransformUpdate(); })
.def("dirtyTransform", [](dart::dynamics::Entity *self) -> void { return self->dirtyTransform(); })
.def("needsTransformUpdate", [](const dart::dynamics::Entity *self) -> bool { return self->needsTransformUpdate(); })
.def("notifyVelocityUpdate", [](dart::dynamics::Entity *self) -> void { return self->notifyVelocityUpdate(); })
.def("dirtyVelocity", [](dart::dynamics::Entity *self) -> void { return self->dirtyVelocity(); })
.def("needsVelocityUpdate", [](const dart::dynamics::Entity *self) -> bool { return self->needsVelocityUpdate(); })
.def("notifyAccelerationUpdate", [](dart::dynamics::Entity *self) -> void { return self->notifyAccelerationUpdate(); })
.def("dirtyAcceleration", [](dart::dynamics::Entity *self) -> void { return self->dirtyAcceleration(); })
.def("needsAccelerationUpdate", [](const dart::dynamics::Entity *self) -> bool { return self->needsAccelerationUpdate(); })
;
}

/* footer */
