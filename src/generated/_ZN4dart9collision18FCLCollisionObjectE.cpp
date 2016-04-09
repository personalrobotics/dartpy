#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart9collision18FCLCollisionObject21getFCLCollisionObjectEv_docstring[] = R"CHIMERA_STRING( Return FCL collision object
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision18FCLCollisionObjectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLCollisionObject, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionObject > >("FCLCollisionObject", boost::python::no_init)
.def("getFCLCollisionObject", [](dart::collision::FCLCollisionObject *self) -> fcl::CollisionObject * { return self->getFCLCollisionObject(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart9collision18FCLCollisionObject21getFCLCollisionObjectEv_docstring)
;
}

/* footer */
