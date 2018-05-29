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

void _ZN4dart8dynamics10FixedFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FixedFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame, dart::common::VersionCounter, dart::common::EmbedProperties<dart::dynamics::FixedFrame, dart::dynamics::detail::FixedFrameProperties> > >("FixedFrame", boost::python::no_init)
.def("setAspectProperties", [](dart::dynamics::FixedFrame *self, const dart::common::EmbedProperties<dart::dynamics::FixedFrame, dart::dynamics::detail::FixedFrameProperties>::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("setRelativeTransform", [](dart::dynamics::FixedFrame *self, const Eigen::Isometry3d & transform) -> void { return self->setRelativeTransform(transform); }, (::boost::python::arg("transform")))
.def("getRelativeTransform", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getRelativeSpatialVelocity", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPartialAcceleration", [](const dart::dynamics::FixedFrame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
