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

void _ZN4dart6common7VirtualINS_8dynamics22SkeletonSpecializedForIJNS2_9ShapeNodeEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> > >("VirtualSkeletonSpecializedForShapeNode", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> > * { return new dart::common::Virtual<dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
