#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics11EndEffector14PropertiesDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("EndEffector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector::PropertiesData, ::boost::python::bases<dart::dynamics::Entity::Properties, dart::dynamics::EndEffector::UniqueProperties > >("PropertiesData", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Entity::Properties &, const dart::dynamics::EndEffector::UniqueProperties &, const dart::common::AddonManager::Properties &>((::boost::python::arg("_entityProperties"), ::boost::python::arg("_effectorProperties"), ::boost::python::arg("_addonProperties"))))
.def_readwrite("mAddonProperties", &dart::dynamics::EndEffector::PropertiesData::mAddonProperties)
;
}

/* footer */
