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

void _ZN4dart8dynamics28NodeManagerJoinerForBodyNodeIJNS_6common7VirtualINS0_22SkeletonSpecializedForIJNS0_11EndEffectorEEEEEENS3_INS4_IJNS0_6MarkerEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::Marker> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::Marker> > > >("NodeManagerJoinerForBodyNode_VirtualSkeletonSpecializedForEndEffector_VirtualSkeletonSpecializedForMarker", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::Marker> > > * { return new dart::dynamics::NodeManagerJoinerForBodyNode<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::EndEffector> >, dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::Marker> > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
