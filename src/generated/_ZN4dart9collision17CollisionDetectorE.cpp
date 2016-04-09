#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZNK4dart9collision17CollisionDetector7getTypeEv_docstring[] = R"CHIMERA_STRING( Return collision detection engine type in std::string
)CHIMERA_STRING";

constexpr char _ZN4dart9collision17CollisionDetector20createCollisionGroupEv_docstring[] = R"CHIMERA_STRING( Create a collision group
)CHIMERA_STRING";

constexpr char _ZN4dart9collision17CollisionDetector31createCollisionGroupAsSharedPtrEv_docstring[] = R"CHIMERA_STRING( Helper function that creates and returns CollisionGroup as shared_ptr.
 Internally, this function creates shared_ptr from unique_ptr returned from
 createCollisionGroup() so the performance would be slighly worse than
 using std::make_unique.
)CHIMERA_STRING";

constexpr char _ZN4dart9collision17CollisionDetector7collideEPNS0_14CollisionGroupERKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection for group.
)CHIMERA_STRING";

constexpr char _ZN4dart9collision17CollisionDetector7collideEPNS0_14CollisionGroupES3_RKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection for group1-group2.
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision17CollisionDetectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionDetector, ::boost::noncopyable >("CollisionDetector", boost::python::no_init)
.def("getType", [](const dart::collision::CollisionDetector *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9collision17CollisionDetector7getTypeEv_docstring)
.def("createCollisionGroup", [](dart::collision::CollisionDetector *self) -> std::unique_ptr<dart::collision::CollisionGroup> { return self->createCollisionGroup(); }, _ZN4dart9collision17CollisionDetector20createCollisionGroupEv_docstring)
.def("createCollisionGroupAsSharedPtr", [](dart::collision::CollisionDetector *self) -> std::shared_ptr<dart::collision::CollisionGroup> { return self->createCollisionGroupAsSharedPtr(); }, _ZN4dart9collision17CollisionDetector31createCollisionGroupAsSharedPtrEv_docstring)
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(group, option, result); }, _ZN4dart9collision17CollisionDetector7collideEPNS0_14CollisionGroupERKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(group1, group2, option, result); }, _ZN4dart9collision17CollisionDetector7collideEPNS0_14CollisionGroupES3_RKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option"), ::boost::python::arg("result")))
;
}

/* footer */
