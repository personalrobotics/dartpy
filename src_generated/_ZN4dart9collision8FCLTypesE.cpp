#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision8FCLTypesE()
{
::boost::python::class_<dart::collision::FCLTypes, ::boost::noncopyable >("FCLTypes", boost::python::no_init)
.def("convertVector3", static_cast<Eigen::Vector3d (*)(const fcl::Vec3f &)>(&dart::collision::FCLTypes::convertVector3), (::boost::python::arg("_vec")))
.def("convertVector3", static_cast<fcl::Vec3f (*)(const Eigen::Vector3d &)>(&dart::collision::FCLTypes::convertVector3), (::boost::python::arg("_vec")))
.def("convertMatrix3x3", static_cast<fcl::Matrix3f (*)(const Eigen::Matrix3d &)>(&dart::collision::FCLTypes::convertMatrix3x3), (::boost::python::arg("_R")))
.def("convertTransform", static_cast<fcl::Transform3f (*)(const Eigen::Isometry3d &)>(&dart::collision::FCLTypes::convertTransform), (::boost::python::arg("_T")))
.staticmethod("convertMatrix3x3")
.staticmethod("convertTransform")
.staticmethod("convertVector3")
;
}

/* footer */
