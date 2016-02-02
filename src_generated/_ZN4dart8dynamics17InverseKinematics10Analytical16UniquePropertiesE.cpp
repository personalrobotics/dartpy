#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t, double>((::boost::python::arg("extraDofUtilization") = 0, ::boost::python::arg("extraErrorLengthClamp") = 1.000000e+00)))
.def(::boost::python::init<dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t, double, dart::dynamics::InverseKinematics::Analytical::QualityComparison>((::boost::python::arg("extraDofUtilization"), ::boost::python::arg("extraErrorLengthClamp"), ::boost::python::arg("qualityComparator"))))
.def("resetQualityComparisonFunction", static_cast<void (dart::dynamics::InverseKinematics::Analytical::UniqueProperties::*)()>(&dart::dynamics::InverseKinematics::Analytical::UniqueProperties::resetQualityComparisonFunction))
.def_readwrite("mExtraDofUtilization", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mExtraDofUtilization)
.def_readwrite("mExtraErrorLengthClamp", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mExtraErrorLengthClamp)
.def_readwrite("mQualityComparator", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mQualityComparator)
;
}

/* footer */