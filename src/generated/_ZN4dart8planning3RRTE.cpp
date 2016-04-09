#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8planning3RRTE_docstring[] = R"CHIMERA_STRING( The rapidly-expanding random tree implementation
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT7connectEv_docstring[] = R"CHIMERA_STRING( Reach for a random node by repeatedly extending nodes from the nearest neighbor in the tree.
 Stop if there is a collision.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT7connectERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Reach for a target by repeatedly extending nodes from the nearest neighbor. Stop if collide.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT7tryStepEv_docstring[] = R"CHIMERA_STRING( Try a single step with the given "stepSize" to a random configuration. Fail if collide.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT7tryStepERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Try a single step with the given "stepSize" to the given configuration. Fail if collide.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT15tryStepFromNodeERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEi_docstring[] = R"CHIMERA_STRING( Tries to extend tree towards provided sample
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT9newConfigERSt4listIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEESaIS5_EERS5_RKS5_SB__docstring[] = R"CHIMERA_STRING( Checks if the given new configuration is in collision with an obstacle. Moreover, it is a
 an opportunity for child classes to change the new configuration if there is a need. For 
 instance, task constrained planners might want to sample around this point and replace it with
 a better (less erroroneous due to constraint) node.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT6getGapERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Returns the distance between the current active node and the given node.
 TODO This might mislead the users to thinking returning the distance between the given target
 and the nearest neighbor.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT9tracePathEiRSt4listIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEESaIS5_EEb_docstring[] = R"CHIMERA_STRING( Traces the path from some node to the initConfig node - useful in creating the full path
 after the goal is reached.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT7getSizeEv_docstring[] = R"CHIMERA_STRING( Returns the number of nodes in the tree.
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT15checkCollisionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Implementation-specific function for checking collisions 
)CHIMERA_STRING";

constexpr char _ZN4dart8planning3RRT15getRandomConfigEv_docstring[] = R"CHIMERA_STRING( Returns a random configuration with the specified node IDs 
)CHIMERA_STRING";


} // namespace

void _ZN4dart8planning3RRTE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::RRT, ::boost::noncopyable >("RRT", _ZN4dart8planning3RRTE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const Eigen::VectorXd & root) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, root); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("root"))))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const Eigen::VectorXd & root, double stepSize) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, root, stepSize); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("root"), ::boost::python::arg("stepSize"))))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const std::vector<Eigen::VectorXd> & roots) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, roots); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("roots"))))
.def("__init__", ::boost::python::make_constructor([](dart::simulation::WorldPtr world, dart::dynamics::SkeletonPtr robot, const std::vector<std::size_t> & dofs, const std::vector<Eigen::VectorXd> & roots, double stepSize) -> dart::planning::RRT * { return new dart::planning::RRT(world, robot, dofs, roots, stepSize); }, ::boost::python::default_call_policies(), (::boost::python::arg("world"), ::boost::python::arg("robot"), ::boost::python::arg("dofs"), ::boost::python::arg("roots"), ::boost::python::arg("stepSize"))))
.def("connect", [](dart::planning::RRT *self) -> bool { return self->connect(); }, _ZN4dart8planning3RRT7connectEv_docstring)
.def("connect", [](dart::planning::RRT *self, const Eigen::VectorXd & target) -> bool { return self->connect(target); }, _ZN4dart8planning3RRT7connectERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("target")))
.def("tryStep", [](dart::planning::RRT *self) -> dart::planning::RRT::StepResult { return self->tryStep(); }, _ZN4dart8planning3RRT7tryStepEv_docstring)
.def("tryStep", [](dart::planning::RRT *self, const Eigen::VectorXd & qtry) -> dart::planning::RRT::StepResult { return self->tryStep(qtry); }, _ZN4dart8planning3RRT7tryStepERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("qtry")))
.def("tryStepFromNode", [](dart::planning::RRT *self, const Eigen::VectorXd & qtry, int NNidx) -> dart::planning::RRT::StepResult { return self->tryStepFromNode(qtry, NNidx); }, _ZN4dart8planning3RRT15tryStepFromNodeERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEi_docstring, (::boost::python::arg("qtry"), ::boost::python::arg("NNidx")))
.def("newConfig", [](dart::planning::RRT *self, std::list<Eigen::VectorXd> & intermediatePoints, Eigen::VectorXd & qnew, const Eigen::VectorXd & qnear, const Eigen::VectorXd & qtarget) -> bool { return self->newConfig(intermediatePoints, qnew, qnear, qtarget); }, _ZN4dart8planning3RRT9newConfigERSt4listIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEESaIS5_EERS5_RKS5_SB__docstring, (::boost::python::arg("intermediatePoints"), ::boost::python::arg("qnew"), ::boost::python::arg("qnear"), ::boost::python::arg("qtarget")))
.def("getGap", [](dart::planning::RRT *self, const Eigen::VectorXd & target) -> double { return self->getGap(target); }, _ZN4dart8planning3RRT6getGapERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("target")))
.def("tracePath", [](dart::planning::RRT *self, int node, std::list<Eigen::VectorXd> & path) -> void { return self->tracePath(node, path); }, _ZN4dart8planning3RRT9tracePathEiRSt4listIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEESaIS5_EEb_docstring, (::boost::python::arg("node"), ::boost::python::arg("path")))
.def("tracePath", [](dart::planning::RRT *self, int node, std::list<Eigen::VectorXd> & path, bool reverse) -> void { return self->tracePath(node, path, reverse); }, _ZN4dart8planning3RRT9tracePathEiRSt4listIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEESaIS5_EEb_docstring, (::boost::python::arg("node"), ::boost::python::arg("path"), ::boost::python::arg("reverse")))
.def("getSize", [](dart::planning::RRT *self) -> std::size_t { return self->getSize(); }, _ZN4dart8planning3RRT7getSizeEv_docstring)
.def("checkCollisions", [](dart::planning::RRT *self, const Eigen::VectorXd & c) -> bool { return self->checkCollisions(c); }, _ZN4dart8planning3RRT15checkCollisionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("c")))
.def("getRandomConfig", [](dart::planning::RRT *self) -> Eigen::VectorXd { return self->getRandomConfig(); }, _ZN4dart8planning3RRT15getRandomConfigEv_docstring)
.def_readonly("ndim", &dart::planning::RRT::ndim)
.def_readonly("stepSize", &dart::planning::RRT::stepSize)
.def_readwrite("activeNode", &dart::planning::RRT::activeNode)
.def_readwrite("parentVector", &dart::planning::RRT::parentVector)
.def_readwrite("configVector", &dart::planning::RRT::configVector)
;
}

/* footer */
