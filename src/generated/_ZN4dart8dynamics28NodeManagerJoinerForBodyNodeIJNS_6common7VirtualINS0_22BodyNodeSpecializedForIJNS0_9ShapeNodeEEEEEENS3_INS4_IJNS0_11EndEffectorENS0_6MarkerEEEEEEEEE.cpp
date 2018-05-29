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

void _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorENS0_6MarkerEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector, dart::dynamics::Marker> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector, dart::dynamics::Marker> > > >("_ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22BodyNodeSpecializedForIJNS0_9ShapeNodeEEEEEENS3_INS4_IJNS0_11EndEffectorENS0_6MarkerEEEEEEEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector, dart::dynamics::Marker> > > * { return new dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode> >, dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector, dart::dynamics::Marker> > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
