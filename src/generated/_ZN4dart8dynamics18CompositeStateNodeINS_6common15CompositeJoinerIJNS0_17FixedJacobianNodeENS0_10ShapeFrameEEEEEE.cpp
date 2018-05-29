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

void _ZN4dart8dynamics18CompositeStateNodeINS_6common15CompositeJoinerIJNS0_17FixedJacobianNodeENS0_10ShapeFrameEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> >, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > >("_ZN4dart8dynamics18CompositeStateNodeINS_6common15CompositeJoinerIJNS0_17FixedJacobianNodeENS0_10ShapeFrameEEEEEE", boost::python::no_init)
.def("setNodeState", [](dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > *self, const dart::dynamics::Node::State & otherState) -> void { return self->setNodeState(otherState); }, (::boost::python::arg("otherState")))
.def("getNodeState", [](const dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > *self) -> std::unique_ptr<dart::dynamics::Node::State> { return self->getNodeState(); })
.def("copyNodeStateTo", [](const dart::dynamics::CompositeStateNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::dynamics::ShapeFrame> > *self, std::unique_ptr<dart::dynamics::Node::State> & outputState) -> void { return self->copyNodeStateTo(outputState); }, (::boost::python::arg("outputState")))
;
}

/* footer */
