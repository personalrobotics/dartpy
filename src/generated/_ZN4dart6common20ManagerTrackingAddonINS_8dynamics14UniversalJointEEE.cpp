#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14UniversalJointEE10getManagerEv_docstring[] = R"CHIMERA_STRING( Get the Manager of this Addon
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14UniversalJointEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ManagerTrackingAddon<dart::dynamics::UniversalJoint>, ::boost::noncopyable, ::boost::python::bases<dart::common::Addon > >("ManagerTrackingAddon_UniversalJoint", boost::python::no_init)
.def("getManager", [](dart::common::ManagerTrackingAddon<dart::dynamics::UniversalJoint> *self) -> dart::dynamics::UniversalJoint * { return self->getManager(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart6common20ManagerTrackingAddonINS_8dynamics14UniversalJointEE10getManagerEv_docstring)
;
}

/* footer */
