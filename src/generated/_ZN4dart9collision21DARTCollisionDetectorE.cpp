#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart9collision21DARTCollisionDetector13getTypeStaticEv_docstring[] = R"CHIMERA_STRING( Return engine type "DART"
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision21DARTCollisionDetector7getTypeEv_docstring[] = R"CHIMERA_STRING( Return collision detection engine type in std::string
)CHIMERA_STRING";

constexpr char _ZN4dart9collision21DARTCollisionDetector20createCollisionGroupEv_docstring[] = R"CHIMERA_STRING( Create a collision group
)CHIMERA_STRING";

constexpr char _ZN4dart9collision21DARTCollisionDetector7collideEPNS0_14CollisionGroupERKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection for group.
)CHIMERA_STRING";

constexpr char _ZN4dart9collision21DARTCollisionDetector7collideEPNS0_14CollisionGroupES3_RKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection for group1-group2.
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision21DARTCollisionDetectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::DARTCollisionDetector, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionDetector > >("DARTCollisionDetector", boost::python::no_init)
.def("getType", [](const dart::collision::DARTCollisionDetector *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9collision21DARTCollisionDetector7getTypeEv_docstring)
.def("createCollisionGroup", [](dart::collision::DARTCollisionDetector *self) -> std::unique_ptr<dart::collision::CollisionGroup> { return self->createCollisionGroup(); }, _ZN4dart9collision21DARTCollisionDetector20createCollisionGroupEv_docstring)
.def("collide", [](dart::collision::DARTCollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(group, option, result); }, _ZN4dart9collision21DARTCollisionDetector7collideEPNS0_14CollisionGroupERKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("collide", [](dart::collision::DARTCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(group1, group2, option, result); }, _ZN4dart9collision21DARTCollisionDetector7collideEPNS0_14CollisionGroupES3_RKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("create", []() -> std::shared_ptr<dart::collision::DARTCollisionDetector> { return dart::collision::DARTCollisionDetector::create(); })
.def("getTypeStatic", []() -> const std::string & { return dart::collision::DARTCollisionDetector::getTypeStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("create")
.staticmethod("getTypeStatic")
;
}

/* footer */
