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

void _ZN4dart8dynamics13AccessoryNodeINS0_17FixedJacobianNodeEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> >("_ZN4dart8dynamics13AccessoryNodeINS0_17FixedJacobianNodeEEE", boost::python::no_init)
.def("getIndexInBodyNode", [](const dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> *self) -> std::size_t { return self->getIndexInBodyNode(); })
.def("getIndexInSkeleton", [](const dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> *self) -> std::size_t { return self->getIndexInSkeleton(); })
.def("getIndexInTree", [](const dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> *self) -> std::size_t { return self->getIndexInTree(); })
.def("getTreeIndex", [](const dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> *self) -> std::size_t { return self->getTreeIndex(); })
.def("remove", [](dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> *self) -> void { return self->remove(); })
.def("reattach", [](dart::dynamics::AccessoryNode<dart::dynamics::FixedJacobianNode> *self) -> void { return self->reattach(); })
;
}

/* footer */
