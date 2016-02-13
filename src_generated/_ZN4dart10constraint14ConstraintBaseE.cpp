#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint14ConstraintBaseE()
{
::boost::python::class_<dart::constraint::ConstraintBase, ::boost::noncopyable >("ConstraintBase", boost::python::no_init)
.def("getDimension", static_cast<std::size_t (dart::constraint::ConstraintBase::*)() const>(&dart::constraint::ConstraintBase::getDimension))
.def("update", static_cast<void (dart::constraint::ConstraintBase::*)()>(&dart::constraint::ConstraintBase::update))
.def("getInformation", static_cast<void (dart::constraint::ConstraintBase::*)(dart::constraint::ConstraintInfo *)>(&dart::constraint::ConstraintBase::getInformation), (::boost::python::arg("_info")))
.def("applyUnitImpulse", static_cast<void (dart::constraint::ConstraintBase::*)(std::size_t)>(&dart::constraint::ConstraintBase::applyUnitImpulse), (::boost::python::arg("_index")))
.def("getVelocityChange", static_cast<void (dart::constraint::ConstraintBase::*)(double *, bool)>(&dart::constraint::ConstraintBase::getVelocityChange), (::boost::python::arg("_vel"), ::boost::python::arg("_withCfm")))
.def("excite", static_cast<void (dart::constraint::ConstraintBase::*)()>(&dart::constraint::ConstraintBase::excite))
.def("unexcite", static_cast<void (dart::constraint::ConstraintBase::*)()>(&dart::constraint::ConstraintBase::unexcite))
.def("applyImpulse", static_cast<void (dart::constraint::ConstraintBase::*)(double *)>(&dart::constraint::ConstraintBase::applyImpulse), (::boost::python::arg("_lambda")))
.def("isActive", static_cast<bool (dart::constraint::ConstraintBase::*)() const>(&dart::constraint::ConstraintBase::isActive))
.def("getRootSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::constraint::ConstraintBase::*)() const>(&dart::constraint::ConstraintBase::getRootSkeleton))
.def("uniteSkeletons", static_cast<void (dart::constraint::ConstraintBase::*)()>(&dart::constraint::ConstraintBase::uniteSkeletons))
.def("compressPath", static_cast<dart::dynamics::SkeletonPtr (*)(dart::dynamics::SkeletonPtr)>(&dart::constraint::ConstraintBase::compressPath), (::boost::python::arg("_skeleton")))
.def("getRootSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(dart::dynamics::SkeletonPtr)>(&dart::constraint::ConstraintBase::getRootSkeleton), (::boost::python::arg("_skeleton")))
.staticmethod("compressPath")
.staticmethod("getRootSkeleton")
;
}

/* footer */
