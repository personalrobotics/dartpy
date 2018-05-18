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

void _ZN4dart8dynamics6detail36TranslationalJoint2DUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::TranslationalJoint2DUniqueProperties >("TranslationalJoint2DUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::TranslationalJoint2DUniqueProperties * { return new dart::dynamics::detail::TranslationalJoint2DUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::detail::PlaneType planeType) -> dart::dynamics::detail::TranslationalJoint2DUniqueProperties * { return new dart::dynamics::detail::TranslationalJoint2DUniqueProperties(planeType); }, ::boost::python::default_call_policies(), (::boost::python::arg("planeType"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Matrix<double, 3, 2> & transAxes) -> dart::dynamics::detail::TranslationalJoint2DUniqueProperties * { return new dart::dynamics::detail::TranslationalJoint2DUniqueProperties(transAxes); }, ::boost::python::default_call_policies(), (::boost::python::arg("transAxes"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & transAxis1, const Eigen::Vector3d & transAxis2) -> dart::dynamics::detail::TranslationalJoint2DUniqueProperties * { return new dart::dynamics::detail::TranslationalJoint2DUniqueProperties(transAxis1, transAxis2); }, ::boost::python::default_call_policies(), (::boost::python::arg("transAxis1"), ::boost::python::arg("transAxis2"))))
.def("setXYPlane", [](dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self) -> void { return self->setXYPlane(); })
.def("setYZPlane", [](dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self) -> void { return self->setYZPlane(); })
.def("setZXPlane", [](dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self) -> void { return self->setZXPlane(); })
.def("setArbitraryPlane", [](dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self, const Eigen::Matrix<double, 3, 2> & transAxes) -> void { return self->setArbitraryPlane(transAxes); }, (::boost::python::arg("transAxes")))
.def("setArbitraryPlane", [](dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self, const Eigen::Vector3d & transAxis1, const Eigen::Vector3d & transAxis2) -> void { return self->setArbitraryPlane(transAxis1, transAxis2); }, (::boost::python::arg("transAxis1"), ::boost::python::arg("transAxis2")))
.def("getTranslationalAxis1", [](const dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self) -> Eigen::Vector3d { return self->getTranslationalAxis1(); })
.def("getTranslationalAxis2", [](const dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self) -> Eigen::Vector3d { return self->getTranslationalAxis2(); })
.def("getPlaneType", [](const dart::dynamics::detail::TranslationalJoint2DUniqueProperties *self) -> dart::dynamics::detail::PlaneType { return self->getPlaneType(); })
;
}

/* footer */
