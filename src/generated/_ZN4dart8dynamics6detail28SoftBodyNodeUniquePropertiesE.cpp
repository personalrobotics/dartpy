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

void _ZN4dart8dynamics6detail28SoftBodyNodeUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SoftBodyNodeUniqueProperties >("SoftBodyNodeUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::SoftBodyNodeUniqueProperties * { return new dart::dynamics::detail::SoftBodyNodeUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](double _Kv) -> dart::dynamics::detail::SoftBodyNodeUniqueProperties * { return new dart::dynamics::detail::SoftBodyNodeUniqueProperties(_Kv); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke) -> dart::dynamics::detail::SoftBodyNodeUniqueProperties * { return new dart::dynamics::detail::SoftBodyNodeUniqueProperties(_Kv, _Ke); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke, double _DampCoeff) -> dart::dynamics::detail::SoftBodyNodeUniqueProperties * { return new dart::dynamics::detail::SoftBodyNodeUniqueProperties(_Kv, _Ke, _DampCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"), ::boost::python::arg("_DampCoeff"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke, double _DampCoeff, const std::vector<dart::dynamics::PointMass::Properties> & _points) -> dart::dynamics::detail::SoftBodyNodeUniqueProperties * { return new dart::dynamics::detail::SoftBodyNodeUniqueProperties(_Kv, _Ke, _DampCoeff, _points); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"), ::boost::python::arg("_DampCoeff"), ::boost::python::arg("_points"))))
.def("__init__", ::boost::python::make_constructor([](double _Kv, double _Ke, double _DampCoeff, const std::vector<dart::dynamics::PointMass::Properties> & _points, const std::vector<Eigen::Vector3i> & _faces) -> dart::dynamics::detail::SoftBodyNodeUniqueProperties * { return new dart::dynamics::detail::SoftBodyNodeUniqueProperties(_Kv, _Ke, _DampCoeff, _points, _faces); }, ::boost::python::default_call_policies(), (::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"), ::boost::python::arg("_DampCoeff"), ::boost::python::arg("_points"), ::boost::python::arg("_faces"))))
.def("addPointMass", [](dart::dynamics::detail::SoftBodyNodeUniqueProperties *self, const dart::dynamics::PointMass::Properties & _properties) -> void { return self->addPointMass(_properties); }, (::boost::python::arg("_properties")))
.def("connectPointMasses", [](dart::dynamics::detail::SoftBodyNodeUniqueProperties *self, std::size_t i1, std::size_t i2) -> bool { return self->connectPointMasses(i1, i2); }, (::boost::python::arg("i1"), ::boost::python::arg("i2")))
.def("addFace", [](dart::dynamics::detail::SoftBodyNodeUniqueProperties *self, const Eigen::Vector3i & _newFace) -> void { return self->addFace(_newFace); }, (::boost::python::arg("_newFace")))
.def_readwrite("mKv", &dart::dynamics::detail::SoftBodyNodeUniqueProperties::mKv)
.def_readwrite("mKe", &dart::dynamics::detail::SoftBodyNodeUniqueProperties::mKe)
.def_readwrite("mDampCoeff", &dart::dynamics::detail::SoftBodyNodeUniqueProperties::mDampCoeff)
.def_readwrite("mPointProps", &dart::dynamics::detail::SoftBodyNodeUniqueProperties::mPointProps)
.def_readwrite("mFaces", &dart::dynamics::detail::SoftBodyNodeUniqueProperties::mFaces)
;
}

/* footer */
