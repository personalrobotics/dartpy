#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics33SpecializedNodeManagerForSkeletonIJNS0_11EndEffectorEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SpecializedNodeManagerForSkeleton<dart::dynamics::EndEffector>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::BasicNodeManagerForSkeleton, dart::dynamics::SpecializedNodeManagerForBodyNode<dart::dynamics::EndEffector> > >("_ZN4dart8dynamics33SpecializedNodeManagerForSkeletonIJNS0_11EndEffectorEEEE", boost::python::no_init)
.def(::boost::python::init<>())
;
}

/* footer */
