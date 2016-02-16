#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8planning3RRTE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::RRT, ::boost::noncopyable >("RRT", boost::python::no_init)
.def(::boost::python::init<dart::simulation::WorldPtr, dart::dynamics::SkeletonPtr, const std::vector<std::size_t> &, const Eigen::VectorXd &, double>((::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("root"), ::boost::python::arg("stepSize") = 2.000000e-02)))
.def(::boost::python::init<dart::simulation::WorldPtr, dart::dynamics::SkeletonPtr, const std::vector<std::size_t> &, const std::vector<Eigen::VectorXd> &, double>((::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("roots"), ::boost::python::arg("stepSize") = 2.000000e-02)))
.def("connect", static_cast<bool (dart::planning::RRT::*)()>(&dart::planning::RRT::connect))
.def("connect", static_cast<bool (dart::planning::RRT::*)(const Eigen::VectorXd &)>(&dart::planning::RRT::connect), (::boost::python::arg("target")))
.def("tryStep", static_cast<dart::planning::RRT::StepResult (dart::planning::RRT::*)()>(&dart::planning::RRT::tryStep))
.def("tryStep", static_cast<dart::planning::RRT::StepResult (dart::planning::RRT::*)(const Eigen::VectorXd &)>(&dart::planning::RRT::tryStep), (::boost::python::arg("qtry")))
.def("tryStepFromNode", static_cast<dart::planning::RRT::StepResult (dart::planning::RRT::*)(const Eigen::VectorXd &, int)>(&dart::planning::RRT::tryStepFromNode), (::boost::python::arg("qtry"), ::boost::python::arg("NNidx")))
.def("newConfig", static_cast<bool (dart::planning::RRT::*)(std::list<Eigen::VectorXd> &, Eigen::VectorXd &, const Eigen::VectorXd &, const Eigen::VectorXd &)>(&dart::planning::RRT::newConfig), (::boost::python::arg("intermediatePoints"), ::boost::python::arg("qnew"), ::boost::python::arg("qnear"), ::boost::python::arg("qtarget")))
.def("getGap", static_cast<double (dart::planning::RRT::*)(const Eigen::VectorXd &)>(&dart::planning::RRT::getGap), (::boost::python::arg("target")))
.def("tracePath", static_cast<void (dart::planning::RRT::*)(int, std::list<Eigen::VectorXd> &, bool)>(&dart::planning::RRT::tracePath), (::boost::python::arg("node"), ::boost::python::arg("path"), ::boost::python::arg("reverse") = false))
.def("getSize", static_cast<std::size_t (dart::planning::RRT::*)()>(&dart::planning::RRT::getSize))
.def("checkCollisions", static_cast<bool (dart::planning::RRT::*)(const Eigen::VectorXd &)>(&dart::planning::RRT::checkCollisions), (::boost::python::arg("c")))
.def("getRandomConfig", static_cast<Eigen::VectorXd (dart::planning::RRT::*)()>(&dart::planning::RRT::getRandomConfig))
.def_readonly("ndim", &dart::planning::RRT::ndim)
.def_readonly("stepSize", &dart::planning::RRT::stepSize)
.def_readwrite("activeNode", &dart::planning::RRT::activeNode)
.def_readwrite("parentVector", &dart::planning::RRT::parentVector)
.def_readwrite("configVector", &dart::planning::RRT::configVector)
;
}

/* footer */
