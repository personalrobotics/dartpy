#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics11EndEffector9StateDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("EndEffector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector::StateData, ::boost::noncopyable >("StateData", boost::python::no_init)
.def(::boost::python::init<const Eigen::Isometry3d &, const dart::common::AddonManager::State &>((::boost::python::arg("relativeTransform"), ::boost::python::arg("addonStates"))))
.def_readwrite("mRelativeTransform", &dart::dynamics::EndEffector::StateData::mRelativeTransform)
.def_readwrite("mAddonStates", &dart::dynamics::EndEffector::StateData::mAddonStates)
;
}

/* footer */
