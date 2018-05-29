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

void _ZN4dart8dynamics23CompositePropertiesNodeINS0_18CompositeStateNodeINS_6common15CompositeJoinerIJNS0_17FixedJacobianNodeENS0_10ShapeFrameEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CompositePropertiesNode<dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > > >("_ZN4dart8dynamics23CompositePropertiesNodeINS0_18CompositeStateNodeINS_6common15CompositeJoinerIJNS0_17FixedJacobianNodeENS0_10ShapeFrameEEEEEEEE", boost::python::no_init)
.def("setNodeProperties", [](dart::dynamics::CompositePropertiesNode<dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > > *self, const dart::dynamics::Node::Properties & otherProperties) -> void { return self->setNodeProperties(otherProperties); }, (::boost::python::arg("otherProperties")))
.def("getNodeProperties", [](const dart::dynamics::CompositePropertiesNode<dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > > *self) -> std::unique_ptr<dart::dynamics::Node::Properties> { return self->getNodeProperties(); })
.def("copyNodePropertiesTo", [](const dart::dynamics::CompositePropertiesNode<dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > > *self, std::unique_ptr<dart::dynamics::Node::Properties> & outputProperties) -> void { return self->copyNodePropertiesTo(outputProperties); }, (::boost::python::arg("outputProperties")))
;
}

/* footer */
