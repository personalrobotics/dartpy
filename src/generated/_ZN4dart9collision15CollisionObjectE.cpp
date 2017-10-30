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

void _ZN4dart9collision15CollisionObjectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionObject, ::boost::noncopyable >("CollisionObject", boost::python::no_init)
.def("getCollisionDetector", [](dart::collision::CollisionObject *self) -> dart::collision::CollisionDetector * { return self->getCollisionDetector(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getShape", [](const dart::collision::CollisionObject *self) -> dart::dynamics::ConstShapePtr { return self->getShape(); })
.def("getTransform", [](const dart::collision::CollisionObject *self) -> const Eigen::Isometry3d & { return self->getTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
