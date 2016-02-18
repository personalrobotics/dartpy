#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10ArrowShape10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("ArrowShape"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ArrowShape::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<double, double, double, double, double, bool>((::boost::python::arg("_radius"), ::boost::python::arg("_headRadiusScale"), ::boost::python::arg("_headLengthScale"), ::boost::python::arg("_minHeadLength"), ::boost::python::arg("_maxHeadLength"), ::boost::python::arg("_doubleArrow"))))
.def_readwrite("mRadius", &dart::dynamics::ArrowShape::Properties::mRadius)
.def_readwrite("mHeadRadiusScale", &dart::dynamics::ArrowShape::Properties::mHeadRadiusScale)
.def_readwrite("mHeadLengthScale", &dart::dynamics::ArrowShape::Properties::mHeadLengthScale)
.def_readwrite("mMinHeadLength", &dart::dynamics::ArrowShape::Properties::mMinHeadLength)
.def_readwrite("mMaxHeadLength", &dart::dynamics::ArrowShape::Properties::mMaxHeadLength)
.def_readwrite("mDoubleArrow", &dart::dynamics::ArrowShape::Properties::mDoubleArrow)
;
}

/* footer */
