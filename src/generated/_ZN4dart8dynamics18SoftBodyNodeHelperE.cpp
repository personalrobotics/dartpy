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

void _ZN4dart8dynamics18SoftBodyNodeHelperE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SoftBodyNodeHelper, ::boost::noncopyable >("SoftBodyNodeHelper", boost::python::no_init)
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _totalMass); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass")))
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass, double _vertexStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _totalMass, _vertexStiffness); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _totalMass); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass, double _vertexStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _totalMass, _vertexStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _frags, _totalMass); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass")))
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass, double _vertexStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _frags, _totalMass, _vertexStiffness); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _frags, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("makeBoxProperties", [](const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeBoxProperties(_size, _localTransform, _frags, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _frags, _totalMass); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass, double _vertexStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _frags, _totalMass, _vertexStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _frags, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("setBox", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, const Eigen::Isometry3d & _localTransform, const Eigen::Vector3i & _frags, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> void { return dart::dynamics::SoftBodyNodeHelper::setBox(_softBodyNode, _size, _localTransform, _frags, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("makeSinglePointMassProperties", [](double _totalMass) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSinglePointMassProperties(_totalMass); }, (::boost::python::arg("_totalMass")))
.def("makeSinglePointMassProperties", [](double _totalMass, double _vertexStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSinglePointMassProperties(_totalMass, _vertexStiffness); }, (::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("makeSinglePointMassProperties", [](double _totalMass, double _vertexStiffness, double _edgeStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSinglePointMassProperties(_totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("makeSinglePointMassProperties", [](double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSinglePointMassProperties(_totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("setSinglePointMass", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _totalMass) -> void { return dart::dynamics::SoftBodyNodeHelper::setSinglePointMass(_softBodyNode, _totalMass); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_totalMass")))
.def("setSinglePointMass", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _totalMass, double _vertexStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setSinglePointMass(_softBodyNode, _totalMass, _vertexStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("setSinglePointMass", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setSinglePointMass(_softBodyNode, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("setSinglePointMass", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> void { return dart::dynamics::SoftBodyNodeHelper::setSinglePointMass(_softBodyNode, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("makeSphereProperties", [](double _radius, std::size_t _nSlices, std::size_t _nStacks, double _totalMass) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSphereProperties(_radius, _nSlices, _nStacks, _totalMass); }, (::boost::python::arg("_radius"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass")))
.def("makeSphereProperties", [](double _radius, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSphereProperties(_radius, _nSlices, _nStacks, _totalMass, _vertexStiffness); }, (::boost::python::arg("_radius"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("makeSphereProperties", [](double _radius, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSphereProperties(_radius, _nSlices, _nStacks, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_radius"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("makeSphereProperties", [](double _radius, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeSphereProperties(_radius, _nSlices, _nStacks, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_radius"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("makeEllipsoidProperties", [](const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeEllipsoidProperties(_size, _nSlices, _nStacks, _totalMass); }, (::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass")))
.def("makeEllipsoidProperties", [](const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeEllipsoidProperties(_size, _nSlices, _nStacks, _totalMass, _vertexStiffness); }, (::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("makeEllipsoidProperties", [](const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeEllipsoidProperties(_size, _nSlices, _nStacks, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("makeEllipsoidProperties", [](const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeEllipsoidProperties(_size, _nSlices, _nStacks, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("setEllipsoid", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass) -> void { return dart::dynamics::SoftBodyNodeHelper::setEllipsoid(_softBodyNode, _size, _nSlices, _nStacks, _totalMass); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass")))
.def("setEllipsoid", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setEllipsoid(_softBodyNode, _size, _nSlices, _nStacks, _totalMass, _vertexStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("setEllipsoid", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setEllipsoid(_softBodyNode, _size, _nSlices, _nStacks, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("setEllipsoid", [](dart::dynamics::SoftBodyNode * _softBodyNode, const Eigen::Vector3d & _size, std::size_t _nSlices, std::size_t _nStacks, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> void { return dart::dynamics::SoftBodyNodeHelper::setEllipsoid(_softBodyNode, _size, _nSlices, _nStacks, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("makeCylinderProperties", [](double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeCylinderProperties(_radius, _height, _nSlices, _nStacks, _nRings, _totalMass); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass")))
.def("makeCylinderProperties", [](double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass, double _vertexStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeCylinderProperties(_radius, _height, _nSlices, _nStacks, _nRings, _totalMass, _vertexStiffness); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("makeCylinderProperties", [](double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeCylinderProperties(_radius, _height, _nSlices, _nStacks, _nRings, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("makeCylinderProperties", [](double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> dart::dynamics::SoftBodyNode::UniqueProperties { return dart::dynamics::SoftBodyNodeHelper::makeCylinderProperties(_radius, _height, _nSlices, _nStacks, _nRings, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.def("setCylinder", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass) -> void { return dart::dynamics::SoftBodyNodeHelper::setCylinder(_softBodyNode, _radius, _height, _nSlices, _nStacks, _nRings, _totalMass); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass")))
.def("setCylinder", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass, double _vertexStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setCylinder(_softBodyNode, _radius, _height, _nSlices, _nStacks, _nRings, _totalMass, _vertexStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness")))
.def("setCylinder", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass, double _vertexStiffness, double _edgeStiffness) -> void { return dart::dynamics::SoftBodyNodeHelper::setCylinder(_softBodyNode, _radius, _height, _nSlices, _nStacks, _nRings, _totalMass, _vertexStiffness, _edgeStiffness); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness")))
.def("setCylinder", [](dart::dynamics::SoftBodyNode * _softBodyNode, double _radius, double _height, std::size_t _nSlices, std::size_t _nStacks, std::size_t _nRings, double _totalMass, double _vertexStiffness, double _edgeStiffness, double _dampingCoeff) -> void { return dart::dynamics::SoftBodyNodeHelper::setCylinder(_softBodyNode, _radius, _height, _nSlices, _nStacks, _nRings, _totalMass, _vertexStiffness, _edgeStiffness, _dampingCoeff); }, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness"), ::boost::python::arg("_edgeStiffness"), ::boost::python::arg("_dampingCoeff")))
.staticmethod("makeBoxProperties")
.staticmethod("makeCylinderProperties")
.staticmethod("makeEllipsoidProperties")
.staticmethod("makeSinglePointMassProperties")
.staticmethod("makeSphereProperties")
.staticmethod("setBox")
.staticmethod("setCylinder")
.staticmethod("setEllipsoid")
.staticmethod("setSinglePointMass")
;
}

/* footer */
