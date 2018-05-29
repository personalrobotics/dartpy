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

void _ZN4dart8dynamics17FixedJacobianNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FixedJacobianNode, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> > >("FixedJacobianNode", boost::python::no_init)
.def("setRelativeTransform", [](dart::dynamics::FixedJacobianNode *self, const Eigen::Isometry3d & newRelativeTf) -> void { return self->setRelativeTransform(newRelativeTf); }, (::boost::python::arg("newRelativeTf")))
.def("dependsOn", [](const dart::dynamics::FixedJacobianNode *self, std::size_t _genCoordIndex) -> bool { return self->dependsOn(_genCoordIndex); }, (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", [](const dart::dynamics::FixedJacobianNode *self) -> std::size_t { return self->getNumDependentGenCoords(); })
.def("getDependentGenCoordIndex", [](const dart::dynamics::FixedJacobianNode *self, std::size_t _arrayIndex) -> std::size_t { return self->getDependentGenCoordIndex(_arrayIndex); }, (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", [](const dart::dynamics::FixedJacobianNode *self) -> const std::vector<std::size_t> & { return self->getDependentGenCoordIndices(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getNumDependentDofs", [](const dart::dynamics::FixedJacobianNode *self) -> std::size_t { return self->getNumDependentDofs(); })
.def("getDependentDof", [](dart::dynamics::FixedJacobianNode *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDependentDof(_index); }, ::boost::python::return_value_policy<::boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("getDependentDofs", [](dart::dynamics::FixedJacobianNode *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDependentDofs(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getChainDofs", [](const dart::dynamics::FixedJacobianNode *self) -> const std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getChainDofs(); })
.def("getJacobian", [](const dart::dynamics::FixedJacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobian(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getWorldJacobian", [](const dart::dynamics::FixedJacobianNode *self) -> const dart::math::Jacobian & { return self->getWorldJacobian(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getJacobianSpatialDeriv", [](const dart::dynamics::FixedJacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobianSpatialDeriv(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getJacobianClassicDeriv", [](const dart::dynamics::FixedJacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobianClassicDeriv(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
;
}

/* footer */
