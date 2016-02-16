#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics11EndEffector16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("EndEffector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Isometry3d &>((::boost::python::arg("_defaultTransform"))))
.def_readwrite("mDefaultTransform", &dart::dynamics::EndEffector::UniqueProperties::mDefaultTransform)
;
}

/* footer */
