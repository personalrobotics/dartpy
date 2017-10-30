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

void _ZN4dart9collision15CollisionResultE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionResult >("CollisionResult", boost::python::no_init)
.def("addContact", [](dart::collision::CollisionResult *self, const dart::collision::Contact & contact) -> void { return self->addContact(contact); }, (::boost::python::arg("contact")))
.def("getNumContacts", [](const dart::collision::CollisionResult *self) -> std::size_t { return self->getNumContacts(); })
.def("getContact", [](dart::collision::CollisionResult *self, std::size_t index) -> dart::collision::Contact & { return self->getContact(index); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("index")))
.def("inCollision", [](const dart::collision::CollisionResult *self, const dart::dynamics::BodyNode * bn) -> bool { return self->inCollision(bn); }, (::boost::python::arg("bn")))
.def("inCollision", [](const dart::collision::CollisionResult *self, const dart::dynamics::ShapeFrame * frame) -> bool { return self->inCollision(frame); }, (::boost::python::arg("frame")))
.def("isCollision", [](const dart::collision::CollisionResult *self) -> bool { return self->isCollision(); })
.def("clear", [](dart::collision::CollisionResult *self) -> void { return self->clear(); })
;
}

/* footer */
