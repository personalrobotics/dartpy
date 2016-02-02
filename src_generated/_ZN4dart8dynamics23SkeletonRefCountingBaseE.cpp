#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics23SkeletonRefCountingBaseE()
{
::boost::python::class_<dart::dynamics::SkeletonRefCountingBase, ::boost::noncopyable, dart::dynamics::SkeletonRefCountingBase * >("SkeletonRefCountingBase", boost::python::no_init)
.def("getSkeleton", static_cast<std::shared_ptr<dart::dynamics::Skeleton> (dart::dynamics::SkeletonRefCountingBase::*)()>(&dart::dynamics::SkeletonRefCountingBase::getSkeleton))
.def("getSkeleton", static_cast<std::shared_ptr<const dart::dynamics::Skeleton> (dart::dynamics::SkeletonRefCountingBase::*)() const>(&dart::dynamics::SkeletonRefCountingBase::getSkeleton))
;
}

/* footer */