#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE_docstring[] = R"CHIMERA_STRING( AccessoryNode provides an interface for Nodes to get their index within the
 list of Nodes, as well as detach and reattach. This uses CRTP to get around
 the diamond of death problem.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE18getIndexInBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get the index of this Node within its BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE18getIndexInSkeletonEv_docstring[] = R"CHIMERA_STRING( Get the index of this Node within its Skeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE14getIndexInTreeEv_docstring[] = R"CHIMERA_STRING( Get the index of this Node within its tree.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE12getTreeIndexEv_docstring[] = R"CHIMERA_STRING( Get the index of this Node's tree within its Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE6removeEv_docstring[] = R"CHIMERA_STRING( Stage the Node for removal. When all strong references to the Node expire,
 the Node will be removed from its BodyNode and deleted.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE8reattachEv_docstring[] = R"CHIMERA_STRING( Undo the effectos of calling remove(). The Node will continue to exist,
 even when all the strong references to it expire.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>, ::boost::noncopyable >("EndEffectorAccessoryNode", _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE_docstring, boost::python::no_init)
.def("getIndexInBodyNode", [](const dart::dynamics::AccessoryNode<dart::dynamics::EndEffector> *self) -> std::size_t { return self->getIndexInBodyNode(); }, _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE18getIndexInBodyNodeEv_docstring)
.def("getIndexInSkeleton", [](const dart::dynamics::AccessoryNode<dart::dynamics::EndEffector> *self) -> std::size_t { return self->getIndexInSkeleton(); }, _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE18getIndexInSkeletonEv_docstring)
.def("getIndexInTree", [](const dart::dynamics::AccessoryNode<dart::dynamics::EndEffector> *self) -> std::size_t { return self->getIndexInTree(); }, _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE14getIndexInTreeEv_docstring)
.def("getTreeIndex", [](const dart::dynamics::AccessoryNode<dart::dynamics::EndEffector> *self) -> std::size_t { return self->getTreeIndex(); }, _ZNK4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE12getTreeIndexEv_docstring)
.def("remove", [](dart::dynamics::AccessoryNode<dart::dynamics::EndEffector> *self) -> void { return self->remove(); }, _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE6removeEv_docstring)
.def("reattach", [](dart::dynamics::AccessoryNode<dart::dynamics::EndEffector> *self) -> void { return self->reattach(); }, _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEE8reattachEv_docstring)
;
}

/* footer */
