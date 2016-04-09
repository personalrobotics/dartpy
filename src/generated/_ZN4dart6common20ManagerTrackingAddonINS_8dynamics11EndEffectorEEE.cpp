#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart6common20ManagerTrackingAddonINS_8dynamics11EndEffectorEE10getManagerEv_docstring[] = R"CHIMERA_STRING( Get the Manager of this Addon
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics11EndEffectorEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, ::boost::noncopyable, ::boost::python::bases<dart::common::Addon > >("ManagerTrackingAddon_EndEffector", boost::python::no_init)
.def("getManager", [](dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector> *self) -> dart::dynamics::EndEffector * { return self->getManager(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), _ZN4dart6common20ManagerTrackingAddonINS_8dynamics11EndEffectorEE10getManagerEv_docstring)
;
}

/* footer */
