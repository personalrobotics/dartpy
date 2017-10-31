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

void _ZN4dart6common7VirtualINS0_20SpecializedForAspectIJNS_8dynamics12VisualAspectEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Virtual<dart::common::SpecializedForAspect<dart::dynamics::VisualAspect> >, ::boost::noncopyable, ::boost::python::bases<dart::common::SpecializedForAspect<dart::dynamics::VisualAspect> > >("VirtualSpecializedForAspectVisualAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Virtual<dart::common::SpecializedForAspect<dart::dynamics::VisualAspect> > * { return new dart::common::Virtual<dart::common::SpecializedForAspect<dart::dynamics::VisualAspect> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
