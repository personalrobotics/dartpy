#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics13AccessoryNodeINS0_11EndEffectorEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>, ::boost::noncopyable >("EndEffectorAccessoryNode", boost::python::no_init)
.def("getIndexInBodyNode", static_cast<std::size_t (dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::*)() const>(&dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::getIndexInBodyNode))
.def("getIndexInSkeleton", static_cast<std::size_t (dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::*)() const>(&dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::getIndexInSkeleton))
.def("getIndexInTree", static_cast<std::size_t (dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::*)() const>(&dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::getIndexInTree))
.def("getTreeIndex", static_cast<std::size_t (dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::*)() const>(&dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::getTreeIndex))
.def("remove", static_cast<void (dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::*)()>(&dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::remove))
.def("reattach", static_cast<void (dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::*)()>(&dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>::reattach))
;
}

/* footer */
