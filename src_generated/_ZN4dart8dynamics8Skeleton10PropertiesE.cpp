#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics8Skeleton10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Skeleton"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Skeleton::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<const std::string &, bool, const Eigen::Vector3d &, double, bool, bool, std::size_t>((::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep") = 1.000000e-03, ::boost::python::arg("_enabledSelfCollisionCheck") = false, ::boost::python::arg("_enableAdjacentBodyCheck") = false, ::boost::python::arg("_version") = 0)))
.def_readwrite("mName", &dart::dynamics::Skeleton::Properties::mName)
.def_readwrite("mIsMobile", &dart::dynamics::Skeleton::Properties::mIsMobile)
.def_readwrite("mGravity", &dart::dynamics::Skeleton::Properties::mGravity)
.def_readwrite("mTimeStep", &dart::dynamics::Skeleton::Properties::mTimeStep)
.def_readwrite("mEnabledSelfCollisionCheck", &dart::dynamics::Skeleton::Properties::mEnabledSelfCollisionCheck)
.def_readwrite("mEnabledAdjacentBodyCheck", &dart::dynamics::Skeleton::Properties::mEnabledAdjacentBodyCheck)
.def_readwrite("mVersion", &dart::dynamics::Skeleton::Properties::mVersion)
;
}

/* footer */
