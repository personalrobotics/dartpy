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

void _ZN4dart9collision18FCLCollisionObjectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLCollisionObject, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionObject > >("FCLCollisionObject", boost::python::no_init)
.def("getFCLCollisionObject", [](dart::collision::FCLCollisionObject *self) -> fcl::CollisionObject * { return self->getFCLCollisionObject(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
;
}

/* footer */
