#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics10ArrowShape10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("ArrowShape"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ArrowShape::Properties >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::ArrowShape::Properties * { return new dart::dynamics::ArrowShape::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](double _radius) -> dart::dynamics::ArrowShape::Properties * { return new dart::dynamics::ArrowShape::Properties(_radius); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"))))
.def("__init__", ::boost::python::make_constructor([](double _radius, double _headRadiusScale) -> dart::dynamics::ArrowShape::Properties * { return new dart::dynamics::ArrowShape::Properties(_radius, _headRadiusScale); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"), ::boost::python::arg("_headRadiusScale"))))
.def("__init__", ::boost::python::make_constructor([](double _radius, double _headRadiusScale, double _headLengthScale) -> dart::dynamics::ArrowShape::Properties * { return new dart::dynamics::ArrowShape::Properties(_radius, _headRadiusScale, _headLengthScale); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"), ::boost::python::arg("_headRadiusScale"), ::boost::python::arg("_headLengthScale"))))
.def("__init__", ::boost::python::make_constructor([](double _radius, double _headRadiusScale, double _headLengthScale, double _minHeadLength) -> dart::dynamics::ArrowShape::Properties * { return new dart::dynamics::ArrowShape::Properties(_radius, _headRadiusScale, _headLengthScale, _minHeadLength); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"), ::boost::python::arg("_headRadiusScale"), ::boost::python::arg("_headLengthScale"), ::boost::python::arg("_minHeadLength"))))
.def("__init__", ::boost::python::make_constructor([](double _radius, double _headRadiusScale, double _headLengthScale, double _minHeadLength, double _maxHeadLength) -> dart::dynamics::ArrowShape::Properties * { return new dart::dynamics::ArrowShape::Properties(_radius, _headRadiusScale, _headLengthScale, _minHeadLength, _maxHeadLength); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"), ::boost::python::arg("_headRadiusScale"), ::boost::python::arg("_headLengthScale"), ::boost::python::arg("_minHeadLength"), ::boost::python::arg("_maxHeadLength"))))
.def("__init__", ::boost::python::make_constructor([](double _radius, double _headRadiusScale, double _headLengthScale, double _minHeadLength, double _maxHeadLength, bool _doubleArrow) -> dart::dynamics::ArrowShape::Properties * { return new dart::dynamics::ArrowShape::Properties(_radius, _headRadiusScale, _headLengthScale, _minHeadLength, _maxHeadLength, _doubleArrow); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"), ::boost::python::arg("_headRadiusScale"), ::boost::python::arg("_headLengthScale"), ::boost::python::arg("_minHeadLength"), ::boost::python::arg("_maxHeadLength"), ::boost::python::arg("_doubleArrow"))))
.def_readwrite("mRadius", &dart::dynamics::ArrowShape::Properties::mRadius)
.def_readwrite("mHeadRadiusScale", &dart::dynamics::ArrowShape::Properties::mHeadRadiusScale)
.def_readwrite("mHeadLengthScale", &dart::dynamics::ArrowShape::Properties::mHeadLengthScale)
.def_readwrite("mMinHeadLength", &dart::dynamics::ArrowShape::Properties::mMinHeadLength)
.def_readwrite("mMaxHeadLength", &dart::dynamics::ArrowShape::Properties::mMaxHeadLength)
.def_readwrite("mDoubleArrow", &dart::dynamics::ArrowShape::Properties::mDoubleArrow)
;
}

/* footer */
