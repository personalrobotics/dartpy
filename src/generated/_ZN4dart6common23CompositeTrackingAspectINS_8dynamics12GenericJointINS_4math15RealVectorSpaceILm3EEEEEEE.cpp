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

void _ZN4dart6common23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm3EEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::Aspect > >("CompositeTrackingAspect_R3Joint", boost::python::no_init)
.def("getComposite", [](dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > > *self) -> dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > * { return self->getComposite(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("hasComposite", [](const dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > > *self) -> bool { return self->hasComposite(); })
;
}

/* footer */
