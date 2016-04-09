#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8planning13PathShortenerE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::PathShortener, ::boost::noncopyable >("PathShortener", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::planning::PathShortener * { return new dart::planning::PathShortener(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs) -> dart::planning::PathShortener * { return new dart::planning::PathShortener(world, robot, dofs); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"))))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, double stepSize) -> dart::planning::PathShortener * { return new dart::planning::PathShortener(world, robot, dofs, stepSize); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("stepSize"))))
.def("shortenPath", [](dart::planning::PathShortener *self, std::list<Eigen::VectorXd> & rawPath) -> void { return self->shortenPath(rawPath); }, (::boost::python::arg("rawPath")))
.def("segmentCollisionFree", [](dart::planning::PathShortener *self, std::list<Eigen::VectorXd> & waypoints, const Eigen::VectorXd & config1, const Eigen::VectorXd & config2) -> bool { return self->segmentCollisionFree(waypoints, config1, config2); }, (::boost::python::arg("waypoints"), ::boost::python::arg("config1"), ::boost::python::arg("config2")))
;
}

/* footer */
