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

void _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PlanarJointUniqueProperties >("PlanarJointUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::PlanarJointUniqueProperties * { return new dart::dynamics::detail::PlanarJointUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::detail::PlaneType _planeType) -> dart::dynamics::detail::PlanarJointUniqueProperties * { return new dart::dynamics::detail::PlanarJointUniqueProperties(_planeType); }, ::boost::python::default_call_policies(), (::boost::python::arg("_planeType"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2) -> dart::dynamics::detail::PlanarJointUniqueProperties * { return new dart::dynamics::detail::PlanarJointUniqueProperties(_transAxis1, _transAxis2); }, ::boost::python::default_call_policies(), (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2"))))
.def("setXYPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self) -> void { return self->setXYPlane(); })
.def("setYZPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self) -> void { return self->setYZPlane(); })
.def("setZXPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self) -> void { return self->setZXPlane(); })
.def("setArbitraryPlane", [](dart::dynamics::detail::PlanarJointUniqueProperties *self, const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2) -> void { return self->setArbitraryPlane(_transAxis1, _transAxis2); }, (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2")))
.def_readwrite("mPlaneType", &dart::dynamics::detail::PlanarJointUniqueProperties::mPlaneType)
.def_readwrite("mTransAxis1", &dart::dynamics::detail::PlanarJointUniqueProperties::mTransAxis1)
.def_readwrite("mTransAxis2", &dart::dynamics::detail::PlanarJointUniqueProperties::mTransAxis2)
.def_readwrite("mRotAxis", &dart::dynamics::detail::PlanarJointUniqueProperties::mRotAxis)
;
}

/* footer */
