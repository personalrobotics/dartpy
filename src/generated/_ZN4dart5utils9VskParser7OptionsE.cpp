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

void _ZN4dart5utils9VskParser7OptionsE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("VskParser"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::VskParser::Options >("Options", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize, double thicknessRatio) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize, thicknessRatio); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize, double thicknessRatio, double density) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize, thicknessRatio, density); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio"), ::boost::python::arg("density"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize, double thicknessRatio, double density, double jointPositionLowerLimit) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize, thicknessRatio, density, jointPositionLowerLimit); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio"), ::boost::python::arg("density"), ::boost::python::arg("jointPositionLowerLimit"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize, double thicknessRatio, double density, double jointPositionLowerLimit, double jointPositionUpperLimit) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize, thicknessRatio, density, jointPositionLowerLimit, jointPositionUpperLimit); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio"), ::boost::python::arg("density"), ::boost::python::arg("jointPositionLowerLimit"), ::boost::python::arg("jointPositionUpperLimit"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize, double thicknessRatio, double density, double jointPositionLowerLimit, double jointPositionUpperLimit, double jointDampingCoefficient) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize, thicknessRatio, density, jointPositionLowerLimit, jointPositionUpperLimit, jointDampingCoefficient); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio"), ::boost::python::arg("density"), ::boost::python::arg("jointPositionLowerLimit"), ::boost::python::arg("jointPositionUpperLimit"), ::boost::python::arg("jointDampingCoefficient"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize, double thicknessRatio, double density, double jointPositionLowerLimit, double jointPositionUpperLimit, double jointDampingCoefficient, double jointFriction) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize, thicknessRatio, density, jointPositionLowerLimit, jointPositionUpperLimit, jointDampingCoefficient, jointFriction); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio"), ::boost::python::arg("density"), ::boost::python::arg("jointPositionLowerLimit"), ::boost::python::arg("jointPositionUpperLimit"), ::boost::python::arg("jointDampingCoefficient"), ::boost::python::arg("jointFriction"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & retrieverOrNullptr, const Eigen::Vector3d & defaultEllipsoidSize, double thicknessRatio, double density, double jointPositionLowerLimit, double jointPositionUpperLimit, double jointDampingCoefficient, double jointFriction, bool removeEndBodyNodes) -> dart::utils::VskParser::Options * { return new dart::utils::VskParser::Options(retrieverOrNullptr, defaultEllipsoidSize, thicknessRatio, density, jointPositionLowerLimit, jointPositionUpperLimit, jointDampingCoefficient, jointFriction, removeEndBodyNodes); }, ::boost::python::default_call_policies(), (::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio"), ::boost::python::arg("density"), ::boost::python::arg("jointPositionLowerLimit"), ::boost::python::arg("jointPositionUpperLimit"), ::boost::python::arg("jointDampingCoefficient"), ::boost::python::arg("jointFriction"), ::boost::python::arg("removeEndBodyNodes"))))
.def_readwrite("retrieverOrNullptr", &dart::utils::VskParser::Options::retrieverOrNullptr)
.def_readwrite("defaultEllipsoidSize", &dart::utils::VskParser::Options::defaultEllipsoidSize)
.def_readwrite("thicknessRatio", &dart::utils::VskParser::Options::thicknessRatio)
.def_readwrite("density", &dart::utils::VskParser::Options::density)
.def_readwrite("jointPositionLowerLimit", &dart::utils::VskParser::Options::jointPositionLowerLimit)
.def_readwrite("jointPositionUpperLimit", &dart::utils::VskParser::Options::jointPositionUpperLimit)
.def_readwrite("jointDampingCoefficient", &dart::utils::VskParser::Options::jointDampingCoefficient)
.def_readwrite("jointFriction", &dart::utils::VskParser::Options::jointFriction)
.def_readwrite("removeEndBodyNodes", &dart::utils::VskParser::Options::removeEndBodyNodes)
;
}

/* footer */
