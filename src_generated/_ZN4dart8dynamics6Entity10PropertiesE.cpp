#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6Entity10PropertiesE()
{
::boost::python::class_<dart::dynamics::Entity::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::vector<dart::dynamics::ShapePtr> &>((::boost::python::arg("_name"), ::boost::python::arg("_vizShapes"))))
.def_readwrite("mName", &dart::dynamics::Entity::Properties::mName)
.def_readwrite("mVizShapes", &dart::dynamics::Entity::Properties::mVizShapes)
;
}

/* footer */
