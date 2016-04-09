#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart9collision14CollisionGroup20getCollisionDetectorEv_docstring[] = R"CHIMERA_STRING( Return collision detection engine associated with this CollisionGroup
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision14CollisionGroup20getCollisionDetectorEv_docstring[] = R"CHIMERA_STRING( Return (const) collision detection engine associated with this
 CollisionGroup
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup13addShapeFrameEPKNS_8dynamics10ShapeFrameE_docstring[] = R"CHIMERA_STRING( Add a ShapeFrame to this CollisionGroup
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup14addShapeFramesERKSt6vectorIPKNS_8dynamics10ShapeFrameESaIS6_EE_docstring[] = R"CHIMERA_STRING( Add ShapeFrames to this CollisionGroup
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup16addShapeFramesOfEv_docstring[] = R"CHIMERA_STRING( Do nothing. This function is for terminating the recursive variadic
 template function template
<typename
...> addShapeFramesOf().
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup16removeShapeFrameEPKNS_8dynamics10ShapeFrameE_docstring[] = R"CHIMERA_STRING( Remove a ShapeFrame from this CollisionGroup
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup17removeShapeFramesERKSt6vectorIPKNS_8dynamics10ShapeFrameESaIS6_EE_docstring[] = R"CHIMERA_STRING( Remove ShapeFrames from this CollisionGroup
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup19removeShapeFramesOfEv_docstring[] = R"CHIMERA_STRING( Do nothing. This function is for terminating the recursive variadic
 template function template
<typename
...> removeShapeFramesOf().
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup20removeAllShapeFramesEv_docstring[] = R"CHIMERA_STRING( Remove all the ShapeFrames in this CollisionGroup
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision14CollisionGroup13hasShapeFrameEPKNS_8dynamics10ShapeFrameE_docstring[] = R"CHIMERA_STRING( Return true if this CollisionGroup contains shapeFrame
)CHIMERA_STRING";

constexpr char _ZNK4dart9collision14CollisionGroup17getNumShapeFramesEv_docstring[] = R"CHIMERA_STRING( Return number of ShapeFrames added to this CollisionGroup
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup7collideERKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection within this CollisionGroup.
)CHIMERA_STRING";

constexpr char _ZN4dart9collision14CollisionGroup7collideEPS1_RKNS0_6OptionERNS0_6ResultE_docstring[] = R"CHIMERA_STRING( Perform collision detection with other CollisionGroup.
 Return false if the engine type of the other CollisionGroup is different
 from this CollisionObject engine.
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision14CollisionGroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionGroup, ::boost::noncopyable >("CollisionGroup", boost::python::no_init)
.def("getCollisionDetector", [](dart::collision::CollisionGroup *self) -> dart::collision::CollisionDetectorPtr { return self->getCollisionDetector(); }, _ZN4dart9collision14CollisionGroup20getCollisionDetectorEv_docstring)
.def("getCollisionDetector", [](const dart::collision::CollisionGroup *self) -> dart::collision::ConstCollisionDetectorPtr { return self->getCollisionDetector(); }, _ZNK4dart9collision14CollisionGroup20getCollisionDetectorEv_docstring)
.def("addShapeFrame", [](dart::collision::CollisionGroup *self, const dart::dynamics::ShapeFrame * shapeFrame) -> void { return self->addShapeFrame(shapeFrame); }, _ZN4dart9collision14CollisionGroup13addShapeFrameEPKNS_8dynamics10ShapeFrameE_docstring, (::boost::python::arg("shapeFrame")))
.def("addShapeFrames", [](dart::collision::CollisionGroup *self, const std::vector<const dart::dynamics::ShapeFrame *> & shapeFrames) -> void { return self->addShapeFrames(shapeFrames); }, _ZN4dart9collision14CollisionGroup14addShapeFramesERKSt6vectorIPKNS_8dynamics10ShapeFrameESaIS6_EE_docstring, (::boost::python::arg("shapeFrames")))
.def("addShapeFramesOf", [](dart::collision::CollisionGroup *self) -> void { return self->addShapeFramesOf(); }, _ZN4dart9collision14CollisionGroup16addShapeFramesOfEv_docstring)
.def("removeShapeFrame", [](dart::collision::CollisionGroup *self, const dart::dynamics::ShapeFrame * shapeFrame) -> void { return self->removeShapeFrame(shapeFrame); }, _ZN4dart9collision14CollisionGroup16removeShapeFrameEPKNS_8dynamics10ShapeFrameE_docstring, (::boost::python::arg("shapeFrame")))
.def("removeShapeFrames", [](dart::collision::CollisionGroup *self, const std::vector<const dart::dynamics::ShapeFrame *> & shapeFrames) -> void { return self->removeShapeFrames(shapeFrames); }, _ZN4dart9collision14CollisionGroup17removeShapeFramesERKSt6vectorIPKNS_8dynamics10ShapeFrameESaIS6_EE_docstring, (::boost::python::arg("shapeFrames")))
.def("removeShapeFramesOf", [](dart::collision::CollisionGroup *self) -> void { return self->removeShapeFramesOf(); }, _ZN4dart9collision14CollisionGroup19removeShapeFramesOfEv_docstring)
.def("removeAllShapeFrames", [](dart::collision::CollisionGroup *self) -> void { return self->removeAllShapeFrames(); }, _ZN4dart9collision14CollisionGroup20removeAllShapeFramesEv_docstring)
.def("hasShapeFrame", [](const dart::collision::CollisionGroup *self, const dart::dynamics::ShapeFrame * shapeFrame) -> bool { return self->hasShapeFrame(shapeFrame); }, _ZNK4dart9collision14CollisionGroup13hasShapeFrameEPKNS_8dynamics10ShapeFrameE_docstring, (::boost::python::arg("shapeFrame")))
.def("getNumShapeFrames", [](const dart::collision::CollisionGroup *self) -> std::size_t { return self->getNumShapeFrames(); }, _ZNK4dart9collision14CollisionGroup17getNumShapeFramesEv_docstring)
.def("collide", [](dart::collision::CollisionGroup *self, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(option, result); }, _ZN4dart9collision14CollisionGroup7collideERKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("option"), ::boost::python::arg("result")))
.def("collide", [](dart::collision::CollisionGroup *self, dart::collision::CollisionGroup * group, const dart::collision::Option & option, dart::collision::Result & result) -> bool { return self->collide(group, option, result); }, _ZN4dart9collision14CollisionGroup7collideEPS1_RKNS0_6OptionERNS0_6ResultE_docstring, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
;
}

/* footer */
