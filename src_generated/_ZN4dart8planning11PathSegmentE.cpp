#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8planning11PathSegmentE()
{
::boost::python::class_<dart::planning::PathSegment, ::boost::noncopyable >("PathSegment", boost::python::no_init)
.def("getLength", static_cast<double (dart::planning::PathSegment::*)() const>(&dart::planning::PathSegment::getLength))
.def("getConfig", static_cast<Eigen::VectorXd (dart::planning::PathSegment::*)(double) const>(&dart::planning::PathSegment::getConfig), (::boost::python::arg("s")))
.def("getTangent", static_cast<Eigen::VectorXd (dart::planning::PathSegment::*)(double) const>(&dart::planning::PathSegment::getTangent), (::boost::python::arg("s")))
.def("getCurvature", static_cast<Eigen::VectorXd (dart::planning::PathSegment::*)(double) const>(&dart::planning::PathSegment::getCurvature), (::boost::python::arg("s")))
.def("getSwitchingPoints", static_cast<std::list<double> (dart::planning::PathSegment::*)() const>(&dart::planning::PathSegment::getSwitchingPoints))
.def("clone", static_cast<dart::planning::PathSegment *(dart::planning::PathSegment::*)() const>(&dart::planning::PathSegment::clone), ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def_readwrite("position", &dart::planning::PathSegment::position)
;
}

/* footer */
