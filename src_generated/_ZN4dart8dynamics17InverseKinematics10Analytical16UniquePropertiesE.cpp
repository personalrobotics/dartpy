#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t, double>((::boost::python::arg("extraDofUtilization"), ::boost::python::arg("extraErrorLengthClamp"))))
.def(::boost::python::init<dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t, double, dart::dynamics::InverseKinematics::Analytical::QualityComparison>((::boost::python::arg("extraDofUtilization"), ::boost::python::arg("extraErrorLengthClamp"), ::boost::python::arg("qualityComparator"))))
.def("resetQualityComparisonFunction", static_cast<void (dart::dynamics::InverseKinematics::Analytical::UniqueProperties::*)()>(&dart::dynamics::InverseKinematics::Analytical::UniqueProperties::resetQualityComparisonFunction))
.def_readwrite("mExtraDofUtilization", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mExtraDofUtilization)
.def_readwrite("mExtraErrorLengthClamp", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mExtraErrorLengthClamp)
.def_readwrite("mQualityComparator", &dart::dynamics::InverseKinematics::Analytical::UniqueProperties::mQualityComparator)
;
}

/* footer */
