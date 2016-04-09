#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart6common13RequiresAddonIJNS_8dynamics6detail15EulerJointAddonEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::RequiresAddon<dart::dynamics::detail::EulerJointAddon>, ::boost::noncopyable, ::boost::python::bases<dart::common::SpecializedForAddon<dart::dynamics::detail::EulerJointAddon> > >("RequiresEulerJointAddon", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::RequiresAddon<dart::dynamics::detail::EulerJointAddon> * { return new dart::common::RequiresAddon<dart::dynamics::detail::EulerJointAddon>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
