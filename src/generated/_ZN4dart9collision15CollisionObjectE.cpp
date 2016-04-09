#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart9collision15CollisionObject20getCollisionDetectorEv_docstring[] = R"CHIMERA_STRING( Return collision detection engine associated with this CollisionObject
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision15CollisionObject8getShapeEv_docstring[] = R"CHIMERA_STRING( Return the associated Shape
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision15CollisionObject12getTransformEv_docstring[] = R"CHIMERA_STRING( Return the transformation of this CollisionObject in world coordinates
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision15CollisionObjectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionObject, ::boost::noncopyable >("CollisionObject", boost::python::no_init)
.def("getCollisionDetector", [](dart::collision::CollisionObject *self) -> dart::collision::CollisionDetector * { return self->getCollisionDetector(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart9collision15CollisionObject20getCollisionDetectorEv_docstring)
.def("getShape", [](const dart::collision::CollisionObject *self) -> dart::dynamics::ConstShapePtr { return self->getShape(); }, _ZNK4dart9collision15CollisionObject8getShapeEv_docstring)
.def("getTransform", [](const dart::collision::CollisionObject *self) -> const Eigen::Isometry3d & { return self->getTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9collision15CollisionObject12getTransformEv_docstring)
;
}

/* footer */
