#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEE10getManagerEv_docstring[] = R"CHIMERA_STRING( Get the Manager of this Addon
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, ::boost::noncopyable, ::boost::python::bases<dart::common::Addon > >("_ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEE", boost::python::no_init)
.def("getManager", [](dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> > *self) -> dart::dynamics::MultiDofJoint<3> * { return self->getManager(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart6common20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEE10getManagerEv_docstring)
;
}

/* footer */
