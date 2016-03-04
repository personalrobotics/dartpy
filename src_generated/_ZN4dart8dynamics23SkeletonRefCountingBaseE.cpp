#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics23SkeletonRefCountingBaseE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SkeletonRefCountingBase, ::boost::noncopyable, dart::dynamics::SkeletonRefCountingBase * >("SkeletonRefCountingBase", boost::python::no_init)
.def("getSkeleton", static_cast<std::shared_ptr<dart::dynamics::Skeleton> (dart::dynamics::SkeletonRefCountingBase::*)()>(&dart::dynamics::SkeletonRefCountingBase::getSkeleton))
;
}

/* footer */
