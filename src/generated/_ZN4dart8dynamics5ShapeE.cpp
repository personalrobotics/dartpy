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

void _ZN4dart8dynamics5ShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Shape, ::boost::noncopyable, std::shared_ptr<dart::dynamics::Shape>, ::boost::python::bases<dart::common::Subject > >("Shape", boost::python::no_init)
.def("getType", [](const dart::dynamics::Shape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getBoundingBox", [](const dart::dynamics::Shape *self) -> const dart::math::BoundingBox & { return self->getBoundingBox(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("computeInertia", [](const dart::dynamics::Shape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getVolume", [](const dart::dynamics::Shape *self) -> double { return self->getVolume(); })
.def("getID", [](const dart::dynamics::Shape *self) -> int { return self->getID(); })
.def("getShapeType", [](const dart::dynamics::Shape *self) -> dart::dynamics::Shape::ShapeType { return self->getShapeType(); })
.def("setDataVariance", [](dart::dynamics::Shape *self, unsigned int _variance) -> void { return self->setDataVariance(_variance); }, (::boost::python::arg("_variance")))
.def("addDataVariance", [](dart::dynamics::Shape *self, unsigned int _variance) -> void { return self->addDataVariance(_variance); }, (::boost::python::arg("_variance")))
.def("removeDataVariance", [](dart::dynamics::Shape *self, unsigned int _variance) -> void { return self->removeDataVariance(_variance); }, (::boost::python::arg("_variance")))
.def("getDataVariance", [](const dart::dynamics::Shape *self) -> unsigned int { return self->getDataVariance(); })
.def("checkDataVariance", [](const dart::dynamics::Shape *self, dart::dynamics::Shape::DataVariance type) -> bool { return self->checkDataVariance(type); }, (::boost::python::arg("type")))
.def("refreshData", [](dart::dynamics::Shape *self) -> void { return self->refreshData(); })
.def("notifyAlphaUpdate", [](dart::dynamics::Shape *self, double alpha) -> void { return self->notifyAlphaUpdate(alpha); }, (::boost::python::arg("alpha")))
.def("notifyAlphaUpdated", [](dart::dynamics::Shape *self, double alpha) -> void { return self->notifyAlphaUpdated(alpha); }, (::boost::python::arg("alpha")))
.def("notifyColorUpdate", [](dart::dynamics::Shape *self, const Eigen::Vector4d & color) -> void { return self->notifyColorUpdate(color); }, (::boost::python::arg("color")))
.def("notifyColorUpdated", [](dart::dynamics::Shape *self, const Eigen::Vector4d & color) -> void { return self->notifyColorUpdated(color); }, (::boost::python::arg("color")))
;
}

/* footer */
