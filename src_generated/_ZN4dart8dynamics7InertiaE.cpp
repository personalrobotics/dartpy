#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics7InertiaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Inertia >("Inertia", boost::python::no_init)
.def(::boost::python::init<double, const Eigen::Vector3d &, const Eigen::Matrix3d &>((::boost::python::arg("_mass"), ::boost::python::arg("_com"), ::boost::python::arg("_momentOfInertia"))))
.def(::boost::python::init<const Eigen::Matrix6d &>((::boost::python::arg("_spatialInertiaTensor"))))
.def(::boost::python::init<double, double, double, double, double, double, double, double, double, double>((::boost::python::arg("_mass"), ::boost::python::arg("_comX"), ::boost::python::arg("_comY"), ::boost::python::arg("_comZ"), ::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz"))))
.def("setParameter", static_cast<void (dart::dynamics::Inertia::*)(dart::dynamics::Inertia::Param, double)>(&dart::dynamics::Inertia::setParameter), (::boost::python::arg("_param"), ::boost::python::arg("_value")))
.def("getParameter", static_cast<double (dart::dynamics::Inertia::*)(dart::dynamics::Inertia::Param) const>(&dart::dynamics::Inertia::getParameter), (::boost::python::arg("_param")))
.def("setMass", static_cast<void (dart::dynamics::Inertia::*)(double)>(&dart::dynamics::Inertia::setMass), (::boost::python::arg("_mass")))
.def("getMass", static_cast<double (dart::dynamics::Inertia::*)() const>(&dart::dynamics::Inertia::getMass))
.def("setLocalCOM", static_cast<void (dart::dynamics::Inertia::*)(const Eigen::Vector3d &)>(&dart::dynamics::Inertia::setLocalCOM), (::boost::python::arg("_com")))
.def("getLocalCOM", static_cast<const Eigen::Vector3d &(dart::dynamics::Inertia::*)() const>(&dart::dynamics::Inertia::getLocalCOM), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setMoment", static_cast<void (dart::dynamics::Inertia::*)(const Eigen::Matrix3d &)>(&dart::dynamics::Inertia::setMoment), (::boost::python::arg("_moment")))
.def("setMoment", static_cast<void (dart::dynamics::Inertia::*)(double, double, double, double, double, double)>(&dart::dynamics::Inertia::setMoment), (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getMoment", static_cast<Eigen::Matrix3d (dart::dynamics::Inertia::*)() const>(&dart::dynamics::Inertia::getMoment))
.def("setSpatialTensor", static_cast<void (dart::dynamics::Inertia::*)(const Eigen::Matrix6d &)>(&dart::dynamics::Inertia::setSpatialTensor), (::boost::python::arg("_spatial")))
.def("getSpatialTensor", static_cast<const Eigen::Matrix6d &(dart::dynamics::Inertia::*)() const>(&dart::dynamics::Inertia::getSpatialTensor), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("verifyMoment", static_cast<bool (*)(const Eigen::Matrix3d &, bool, double)>(&dart::dynamics::Inertia::verifyMoment), (::boost::python::arg("_moment"), ::boost::python::arg("_printWarnings"), ::boost::python::arg("_tolerance")))
.def("verifySpatialTensor", static_cast<bool (*)(const Eigen::Matrix6d &, bool, double)>(&dart::dynamics::Inertia::verifySpatialTensor), (::boost::python::arg("_spatial"), ::boost::python::arg("_printWarnings"), ::boost::python::arg("_tolerance")))
.def("verify", static_cast<bool (dart::dynamics::Inertia::*)(bool, double) const>(&dart::dynamics::Inertia::verify), (::boost::python::arg("_printWarnings"), ::boost::python::arg("_tolerance")))
.staticmethod("verifyMoment")
.staticmethod("verifySpatialTensor")
;
}

/* footer */
