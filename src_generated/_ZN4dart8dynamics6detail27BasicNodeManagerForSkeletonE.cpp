#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail27BasicNodeManagerForSkeletonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::BasicNodeManagerForSkeleton, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::detail::BasicNodeManagerForBodyNode > >("BasicNodeManagerForSkeleton", boost::python::no_init)
;
}

/* footer */
