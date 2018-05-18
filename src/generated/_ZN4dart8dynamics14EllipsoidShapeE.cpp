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

void _ZN4dart8dynamics14EllipsoidShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EllipsoidShape, std::shared_ptr<dart::dynamics::EllipsoidShape>, ::boost::python::bases<dart::dynamics::Shape > >("EllipsoidShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & diameters) -> dart::dynamics::EllipsoidShape * { return new dart::dynamics::EllipsoidShape(diameters); }, ::boost::python::default_call_policies(), (::boost::python::arg("diameters"))))
.def("getType", [](const dart::dynamics::EllipsoidShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setSize", [](dart::dynamics::EllipsoidShape *self, const Eigen::Vector3d & diameters) -> void { return self->setSize(diameters); }, (::boost::python::arg("diameters")))
.def("getSize", [](const dart::dynamics::EllipsoidShape *self) -> const Eigen::Vector3d & { return self->getSize(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setDiameters", [](dart::dynamics::EllipsoidShape *self, const Eigen::Vector3d & diameters) -> void { return self->setDiameters(diameters); }, (::boost::python::arg("diameters")))
.def("getDiameters", [](const dart::dynamics::EllipsoidShape *self) -> const Eigen::Vector3d & { return self->getDiameters(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRadii", [](dart::dynamics::EllipsoidShape *self, const Eigen::Vector3d & radii) -> void { return self->setRadii(radii); }, (::boost::python::arg("radii")))
.def("getRadii", [](const dart::dynamics::EllipsoidShape *self) -> const Eigen::Vector3d { return self->getRadii(); })
.def("computeInertia", [](const dart::dynamics::EllipsoidShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("isSphere", [](const dart::dynamics::EllipsoidShape *self) -> bool { return self->isSphere(); })
.def("getStaticType", []() -> const std::string & { return dart::dynamics::EllipsoidShape::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("computeVolume", [](const Eigen::Vector3d & diameters) -> double { return dart::dynamics::EllipsoidShape::computeVolume(diameters); }, (::boost::python::arg("diameters")))
.def("computeInertia", [](const Eigen::Vector3d & diameters, double mass) -> Eigen::Matrix3d { return dart::dynamics::EllipsoidShape::computeInertia(diameters, mass); }, (::boost::python::arg("diameters"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
.staticmethod("getStaticType")
;
}

/* footer */
