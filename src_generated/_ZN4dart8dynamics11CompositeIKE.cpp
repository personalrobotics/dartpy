#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics11CompositeIKE()
{
::boost::python::class_<dart::dynamics::CompositeIK, ::boost::python::bases<dart::dynamics::HierarchicalIK > >("CompositeIK", boost::python::no_init)
.def("create", static_cast<std::shared_ptr<dart::dynamics::CompositeIK> (*)(const dart::dynamics::SkeletonPtr &)>(&dart::dynamics::CompositeIK::create), (::boost::python::arg("_skel")))
.def("clone", static_cast<std::shared_ptr<dart::dynamics::HierarchicalIK> (dart::dynamics::CompositeIK::*)(const dart::dynamics::SkeletonPtr &) const>(&dart::dynamics::CompositeIK::clone), (::boost::python::arg("_newSkel")))
.def("cloneCompositeIK", static_cast<std::shared_ptr<dart::dynamics::CompositeIK> (dart::dynamics::CompositeIK::*)(const dart::dynamics::SkeletonPtr &) const>(&dart::dynamics::CompositeIK::cloneCompositeIK), (::boost::python::arg("_newSkel")))
.def("addModule", static_cast<bool (dart::dynamics::CompositeIK::*)(const std::shared_ptr<dart::dynamics::InverseKinematics> &)>(&dart::dynamics::CompositeIK::addModule), (::boost::python::arg("_ik")))
.def("getModuleSet", static_cast<dart::dynamics::CompositeIK::ConstModuleSet (dart::dynamics::CompositeIK::*)() const>(&dart::dynamics::CompositeIK::getModuleSet))
.def("refreshIKHierarchy", static_cast<void (dart::dynamics::CompositeIK::*)()>(&dart::dynamics::CompositeIK::refreshIKHierarchy))
.staticmethod("create")
;
}

/* footer */
