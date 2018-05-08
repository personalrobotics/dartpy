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

void _ZN4dart8dynamics8Skeleton13ConfigurationE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Skeleton"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Skeleton::Configuration, ::boost::noncopyable >("Configuration", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::VectorXd & positions) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(positions); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(positions, velocities); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities, const Eigen::VectorXd & accelerations) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(positions, velocities, accelerations); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities, const Eigen::VectorXd & accelerations, const Eigen::VectorXd & forces) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(positions, velocities, accelerations, forces); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities, const Eigen::VectorXd & accelerations, const Eigen::VectorXd & forces, const Eigen::VectorXd & commands) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(positions, velocities, accelerations, forces, commands); }, ::boost::python::default_call_policies(), (::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"), ::boost::python::arg("commands"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<std::size_t> & indices) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(indices); }, ::boost::python::default_call_policies(), (::boost::python::arg("indices"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<std::size_t> & indices, const Eigen::VectorXd & positions) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(indices, positions); }, ::boost::python::default_call_policies(), (::boost::python::arg("indices"), ::boost::python::arg("positions"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<std::size_t> & indices, const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(indices, positions, velocities); }, ::boost::python::default_call_policies(), (::boost::python::arg("indices"), ::boost::python::arg("positions"), ::boost::python::arg("velocities"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<std::size_t> & indices, const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities, const Eigen::VectorXd & accelerations) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(indices, positions, velocities, accelerations); }, ::boost::python::default_call_policies(), (::boost::python::arg("indices"), ::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<std::size_t> & indices, const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities, const Eigen::VectorXd & accelerations, const Eigen::VectorXd & forces) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(indices, positions, velocities, accelerations, forces); }, ::boost::python::default_call_policies(), (::boost::python::arg("indices"), ::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<std::size_t> & indices, const Eigen::VectorXd & positions, const Eigen::VectorXd & velocities, const Eigen::VectorXd & accelerations, const Eigen::VectorXd & forces, const Eigen::VectorXd & commands) -> dart::dynamics::Skeleton::Configuration * { return new dart::dynamics::Skeleton::Configuration(indices, positions, velocities, accelerations, forces, commands); }, ::boost::python::default_call_policies(), (::boost::python::arg("indices"), ::boost::python::arg("positions"), ::boost::python::arg("velocities"), ::boost::python::arg("accelerations"), ::boost::python::arg("forces"), ::boost::python::arg("commands"))))
.def_readwrite("mIndices", &dart::dynamics::Skeleton::Configuration::mIndices)
.def_readwrite("mPositions", &dart::dynamics::Skeleton::Configuration::mPositions)
.def_readwrite("mVelocities", &dart::dynamics::Skeleton::Configuration::mVelocities)
.def_readwrite("mAccelerations", &dart::dynamics::Skeleton::Configuration::mAccelerations)
.def_readwrite("mForces", &dart::dynamics::Skeleton::Configuration::mForces)
.def_readwrite("mCommands", &dart::dynamics::Skeleton::Configuration::mCommands)
;
}

/* footer */
