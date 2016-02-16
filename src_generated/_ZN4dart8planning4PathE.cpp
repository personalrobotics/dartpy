#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8planning4PathE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::Path >("Path", boost::python::no_init)
.def(::boost::python::init<const std::list<Eigen::VectorXd> &, double>((::boost::python::arg("path"), ::boost::python::arg("maxDeviation") = 0.000000e+00)))
.def("getLength", static_cast<double (dart::planning::Path::*)() const>(&dart::planning::Path::getLength))
.def("getConfig", static_cast<Eigen::VectorXd (dart::planning::Path::*)(double) const>(&dart::planning::Path::getConfig), (::boost::python::arg("s")))
.def("getTangent", static_cast<Eigen::VectorXd (dart::planning::Path::*)(double) const>(&dart::planning::Path::getTangent), (::boost::python::arg("s")))
.def("getCurvature", static_cast<Eigen::VectorXd (dart::planning::Path::*)(double) const>(&dart::planning::Path::getCurvature), (::boost::python::arg("s")))
.def("getNextSwitchingPoint", static_cast<double (dart::planning::Path::*)(double, bool &) const>(&dart::planning::Path::getNextSwitchingPoint), (::boost::python::arg("s"), ::boost::python::arg("discontinuity")))
.def("getSwitchingPoints", static_cast<std::list<std::pair<double, bool> > (dart::planning::Path::*)() const>(&dart::planning::Path::getSwitchingPoints))
;
}

/* footer */
