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

void _ZN4dart6common15EmbedPropertiesINS_8dynamics10FixedFrameENS2_6detail20FixedFramePropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedProperties<dart::dynamics::FixedFrame, dart::dynamics::detail::FixedFrameProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::RequiresAspect<dart::common::EmbeddedPropertiesAspect<dart::dynamics::FixedFrame, dart::dynamics::detail::FixedFrameProperties> > > >("EmbedProperties_FixedFrame_FixedFrameProperties", boost::python::no_init)
.def("getAspectProperties", [](const dart::common::EmbedProperties<dart::dynamics::FixedFrame, dart::dynamics::detail::FixedFrameProperties> *self) -> const dart::common::EmbedProperties<dart::dynamics::FixedFrame, dart::dynamics::detail::FixedFrameProperties>::AspectProperties & { return self->getAspectProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
