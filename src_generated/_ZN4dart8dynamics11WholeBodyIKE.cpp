#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics11WholeBodyIKE()
{
::boost::python::class_<dart::dynamics::WholeBodyIK, dart::dynamics::WholeBodyIK *, ::boost::python::bases<dart::dynamics::HierarchicalIK > >("WholeBodyIK", boost::python::no_init)
.def("create", static_cast<std::shared_ptr<dart::dynamics::WholeBodyIK> (*)(const dart::dynamics::SkeletonPtr &)>(&dart::dynamics::WholeBodyIK::create), (::boost::python::arg("_skel")))
.def("clone", static_cast<std::shared_ptr<dart::dynamics::HierarchicalIK> (dart::dynamics::WholeBodyIK::*)(const dart::dynamics::SkeletonPtr &) const>(&dart::dynamics::WholeBodyIK::clone), (::boost::python::arg("_newSkel")))
.def("cloneWholeBodyIK", static_cast<std::shared_ptr<dart::dynamics::WholeBodyIK> (dart::dynamics::WholeBodyIK::*)(const dart::dynamics::SkeletonPtr &) const>(&dart::dynamics::WholeBodyIK::cloneWholeBodyIK), (::boost::python::arg("_newSkel")))
.def("refreshIKHierarchy", static_cast<void (dart::dynamics::WholeBodyIK::*)()>(&dart::dynamics::WholeBodyIK::refreshIKHierarchy))
.staticmethod("create")
;
}

/* footer */
