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

void _ZN4dart8dynamics10WorldFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WorldFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame > >("WorldFrame", boost::python::no_init)
.def("getRelativeTransform", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getRelativeSpatialVelocity", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPartialAcceleration", [](const dart::dynamics::WorldFrame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setName", [](dart::dynamics::WorldFrame *self, const std::string & name) -> const std::string & { return self->setName(name); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("name")))
.def("getName", [](const dart::dynamics::WorldFrame *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
