#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8planning13PathShortenerE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::PathShortener, ::boost::noncopyable >("PathShortener", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<dart::simulation::WorldPtr, dart::dynamics::SkeletonPtr, const std::vector<std::size_t> &, double>((::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("stepSize"))))
.def("shortenPath", static_cast<void (dart::planning::PathShortener::*)(std::list<Eigen::VectorXd> &)>(&dart::planning::PathShortener::shortenPath), (::boost::python::arg("rawPath")))
.def("segmentCollisionFree", static_cast<bool (dart::planning::PathShortener::*)(std::list<Eigen::VectorXd> &, const Eigen::VectorXd &, const Eigen::VectorXd &)>(&dart::planning::PathShortener::segmentCollisionFree), (::boost::python::arg("waypoints"), ::boost::python::arg("config1"), ::boost::python::arg("config2")))
;
}

/* footer */
