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
.def(::boost::python::init<double, double, double, double, double, bool>((::boost::python::arg("_radius") = 1.000000e-02, ::boost::python::arg("_headRadiusScale") = 2.000000e+00, ::boost::python::arg("_headLengthScale") = 1.500000e-01, ::boost::python::arg("_minHeadLength") = 0.000000e+00, ::boost::python::arg("_maxHeadLength") = INFINITY, ::boost::python::arg("_doubleArrow") = false)))
.def_readwrite("mRadius", &dart::dynamics::ArrowShape::Properties::mRadius)
.def_readwrite("mHeadRadiusScale", &dart::dynamics::ArrowShape::Properties::mHeadRadiusScale)
.def_readwrite("mHeadLengthScale", &dart::dynamics::ArrowShape::Properties::mHeadLengthScale)
.def_readwrite("mMinHeadLength", &dart::dynamics::ArrowShape::Properties::mMinHeadLength)
.def_readwrite("mMaxHeadLength", &dart::dynamics::ArrowShape::Properties::mMaxHeadLength)
.def_readwrite("mDoubleArrow", &dart::dynamics::ArrowShape::Properties::mDoubleArrow)
;
}

/* footer */
