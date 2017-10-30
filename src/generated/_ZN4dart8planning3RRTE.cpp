#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8planning3RRTE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::RRT >("RRT", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const Eigen::VectorXd & root) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, root); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("root"))))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const Eigen::VectorXd & root, double stepSize) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, root, stepSize); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("root"), ::boost::python::arg("stepSize"))))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const std::vector<Eigen::VectorXd> & roots) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, roots); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("roots"))))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const std::vector<Eigen::VectorXd> & roots, double stepSize) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, roots, stepSize); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("roots"), ::boost::python::arg("stepSize"))))
.def("connect", [](dart::planning::RRT *self) -> bool { return self->connect(); })
.def("connect", [](dart::planning::RRT *self, const Eigen::VectorXd & target) -> bool { return self->connect(target); }, (::boost::python::arg("target")))
.def("tryStep", [](dart::planning::RRT *self) -> dart::planning::RRT::StepResult { return self->tryStep(); })
.def("tryStep", [](dart::planning::RRT *self, const Eigen::VectorXd & qtry) -> dart::planning::RRT::StepResult { return self->tryStep(qtry); }, (::boost::python::arg("qtry")))
.def("tryStepFromNode", [](dart::planning::RRT *self, const Eigen::VectorXd & qtry, int NNidx) -> dart::planning::RRT::StepResult { return self->tryStepFromNode(qtry, NNidx); }, (::boost::python::arg("qtry"), ::boost::python::arg("NNidx")))
.def("newConfig", [](dart::planning::RRT *self, std::list<Eigen::VectorXd> & intermediatePoints, Eigen::VectorXd & qnew, const Eigen::VectorXd & qnear, const Eigen::VectorXd & qtarget) -> bool { return self->newConfig(intermediatePoints, qnew, qnear, qtarget); }, (::boost::python::arg("intermediatePoints"), ::boost::python::arg("qnew"), ::boost::python::arg("qnear"), ::boost::python::arg("qtarget")))
.def("getGap", [](dart::planning::RRT *self, const Eigen::VectorXd & target) -> double { return self->getGap(target); }, (::boost::python::arg("target")))
.def("tracePath", [](dart::planning::RRT *self, int node, std::list<Eigen::VectorXd> & path) -> void { return self->tracePath(node, path); }, (::boost::python::arg("node"), ::boost::python::arg("path")))
.def("tracePath", [](dart::planning::RRT *self, int node, std::list<Eigen::VectorXd> & path, bool reverse) -> void { return self->tracePath(node, path, reverse); }, (::boost::python::arg("node"), ::boost::python::arg("path"), ::boost::python::arg("reverse")))
.def("getSize", [](dart::planning::RRT *self) -> std::size_t { return self->getSize(); })
.def("checkCollisions", [](dart::planning::RRT *self, const Eigen::VectorXd & c) -> bool { return self->checkCollisions(c); }, (::boost::python::arg("c")))
.def("getRandomConfig", [](dart::planning::RRT *self) -> Eigen::VectorXd { return self->getRandomConfig(); })
.def_readonly("ndim", &dart::planning::RRT::ndim)
.def_readonly("stepSize", &dart::planning::RRT::stepSize)
.def_readwrite("activeNode", &dart::planning::RRT::activeNode)
.def_readwrite("parentVector", &dart::planning::RRT::parentVector)
.def_readwrite("configVector", &dart::planning::RRT::configVector)
;
}

/* footer */
