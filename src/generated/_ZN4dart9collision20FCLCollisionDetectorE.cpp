#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart9collision20FCLCollisionDetector13getTypeStaticEv_docstring[] = R"CHIMERA_STRING( Return engine type "FCL"
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision20FCLCollisionDetector7getTypeEv_docstring[] = R"CHIMERA_STRING( Return collision detection engine type in std::string
)CHIMERA_STRING";

constexpr char _ZN4dart9collision20FCLCollisionDetector20createCollisionGroupEv_docstring[] = R"CHIMERA_STRING( Create a collision group
)CHIMERA_STRING";

constexpr char _ZN4dart9collision20FCLCollisionDetector7collideEPNS0_14CollisionGroupERKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection for group.
)CHIMERA_STRING";

constexpr char _ZN4dart9collision20FCLCollisionDetector7collideEPNS0_14CollisionGroupES3_RKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection for group1-group2.
)CHIMERA_STRING";

constexpr char _ZN4dart9collision20FCLCollisionDetector21setPrimitiveShapeTypeENS1_14PrimitiveShapeE_docstring[] = R"CHIMERA_STRING( Set primitive shape type
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision20FCLCollisionDetector21getPrimitiveShapeTypeEv_docstring[] = R"CHIMERA_STRING( Get primitive shape type
)CHIMERA_STRING";

constexpr char _ZN4dart9collision20FCLCollisionDetector32setContactPointComputationMethodENS1_29ContactPointComputationMethodE_docstring[] = R"CHIMERA_STRING( Set contact point computation method
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision20FCLCollisionDetector32getContactPointComputationMethodEv_docstring[] = R"CHIMERA_STRING( Get contact point computation method
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision20FCLCollisionDetectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLCollisionDetector, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionDetector > >("FCLCollisionDetector", boost::python::no_init)
.def("getType", [](const dart::collision::FCLCollisionDetector *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9collision20FCLCollisionDetector7getTypeEv_docstring)
.def("createCollisionGroup", [](dart::collision::FCLCollisionDetector *self) -> std::unique_ptr<dart::collision::CollisionGroup> { return self->createCollisionGroup(); }, _ZN4dart9collision20FCLCollisionDetector20createCollisionGroupEv_docstring)
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(group, option, result); }, _ZN4dart9collision20FCLCollisionDetector7collideEPNS0_14CollisionGroupERKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(group1, group2, option, result); }, _ZN4dart9collision20FCLCollisionDetector7collideEPNS0_14CollisionGroupES3_RKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("setPrimitiveShapeType", [](dart::collision::FCLCollisionDetector *self, dart::collision::FCLCollisionDetector::PrimitiveShape type) -> void { return self->setPrimitiveShapeType(type); }, _ZN4dart9collision20FCLCollisionDetector21setPrimitiveShapeTypeENS1_14PrimitiveShapeE_docstring, (::boost::python::arg("type")))
.def("getPrimitiveShapeType", [](const dart::collision::FCLCollisionDetector *self) -> dart::collision::FCLCollisionDetector::PrimitiveShape { return self->getPrimitiveShapeType(); }, _ZNK4dart9collision20FCLCollisionDetector21getPrimitiveShapeTypeEv_docstring)
.def("setContactPointComputationMethod", [](dart::collision::FCLCollisionDetector *self, dart::collision::FCLCollisionDetector::ContactPointComputationMethod method) -> void { return self->setContactPointComputationMethod(method); }, _ZN4dart9collision20FCLCollisionDetector32setContactPointComputationMethodENS1_29ContactPointComputationMethodE_docstring, (::boost::python::arg("method")))
.def("getContactPointComputationMethod", [](const dart::collision::FCLCollisionDetector *self) -> dart::collision::FCLCollisionDetector::ContactPointComputationMethod { return self->getContactPointComputationMethod(); }, _ZNK4dart9collision20FCLCollisionDetector32getContactPointComputationMethodEv_docstring)
.def("create", []() -> std::shared_ptr<dart::collision::FCLCollisionDetector> { return dart::collision::FCLCollisionDetector::create(); })
.def("getTypeStatic", []() -> const std::string & { return dart::collision::FCLCollisionDetector::getTypeStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("create")
.staticmethod("getTypeStatic")
;
}

/* footer */
