#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail18MultiDofJointAddonILm3EEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::RequiresAddon<dart::dynamics::detail::MultiDofJointAddon<3> >, ::boost::noncopyable, ::boost::python::bases<dart::common::SpecializedForAddon<dart::dynamics::detail::MultiDofJointAddon<3> > > >("RequiresThreeDofJointAddon", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::RequiresAddon<dart::dynamics::detail::MultiDofJointAddon<3> > * { return new dart::common::RequiresAddon<dart::dynamics::detail::MultiDofJointAddon<3> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
