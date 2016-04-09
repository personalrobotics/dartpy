#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics22MutexedWeakSkeletonPtrE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::MutexedWeakSkeletonPtr, ::boost::noncopyable >("MutexedWeakSkeletonPtr", boost::python::no_init)
.def_readwrite("mSkeleton", &dart::dynamics::MutexedWeakSkeletonPtr::mSkeleton)
;
}

/* footer */
