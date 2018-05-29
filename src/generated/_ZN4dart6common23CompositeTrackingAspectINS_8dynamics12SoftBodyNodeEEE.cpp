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

void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::CompositeTrackingAspect<dart::dynamics::SoftBodyNode>, ::boost::noncopyable, ::boost::python::bases<dart::common::Aspect > >("CompositeTrackingAspect_SoftBodyNode", boost::python::no_init)
.def("getComposite", [](dart::common::CompositeTrackingAspect<dart::dynamics::SoftBodyNode> *self) -> dart::dynamics::SoftBodyNode * { return self->getComposite(); }, ::boost::python::return_value_policy<::boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >())
.def("hasComposite", [](const dart::common::CompositeTrackingAspect<dart::dynamics::SoftBodyNode> *self) -> bool { return self->hasComposite(); })
;
}

/* footer */
