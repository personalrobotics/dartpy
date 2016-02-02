#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail27PlanarJointUniquePropertiesE()
{
::boost::python::class_<dart::dynamics::detail::PlanarJointUniqueProperties >("PlanarJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::detail::PlaneType>((::boost::python::arg("_planeType") = 0)))
.def(::boost::python::init<const Eigen::Vector3d &, const Eigen::Vector3d &>((::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2"))))
.def("setXYPlane", static_cast<void (dart::dynamics::detail::PlanarJointUniqueProperties::*)()>(&dart::dynamics::detail::PlanarJointUniqueProperties::setXYPlane))
.def("setYZPlane", static_cast<void (dart::dynamics::detail::PlanarJointUniqueProperties::*)()>(&dart::dynamics::detail::PlanarJointUniqueProperties::setYZPlane))
.def("setZXPlane", static_cast<void (dart::dynamics::detail::PlanarJointUniqueProperties::*)()>(&dart::dynamics::detail::PlanarJointUniqueProperties::setZXPlane))
.def("setArbitraryPlane", static_cast<void (dart::dynamics::detail::PlanarJointUniqueProperties::*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::dynamics::detail::PlanarJointUniqueProperties::setArbitraryPlane), (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2")))
.def_readwrite("mPlaneType", &dart::dynamics::detail::PlanarJointUniqueProperties::mPlaneType)
.def_readwrite("mTransAxis1", &dart::dynamics::detail::PlanarJointUniqueProperties::mTransAxis1)
.def_readwrite("mTransAxis2", &dart::dynamics::detail::PlanarJointUniqueProperties::mTransAxis2)
.def_readwrite("mRotAxis", &dart::dynamics::detail::PlanarJointUniqueProperties::mRotAxis)
;
}

/* footer */
