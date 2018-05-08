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

void _ZN4dart8dynamics6detail24SkeletonAspectPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SkeletonAspectProperties, ::boost::noncopyable >("SkeletonAspectProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::SkeletonAspectProperties * { return new dart::dynamics::detail::SkeletonAspectProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::dynamics::detail::SkeletonAspectProperties * { return new dart::dynamics::detail::SkeletonAspectProperties(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile) -> dart::dynamics::detail::SkeletonAspectProperties * { return new dart::dynamics::detail::SkeletonAspectProperties(_name, _isMobile); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity) -> dart::dynamics::detail::SkeletonAspectProperties * { return new dart::dynamics::detail::SkeletonAspectProperties(_name, _isMobile, _gravity); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity, double _timeStep) -> dart::dynamics::detail::SkeletonAspectProperties * { return new dart::dynamics::detail::SkeletonAspectProperties(_name, _isMobile, _gravity, _timeStep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity, double _timeStep, bool _enabledSelfCollisionCheck) -> dart::dynamics::detail::SkeletonAspectProperties * { return new dart::dynamics::detail::SkeletonAspectProperties(_name, _isMobile, _gravity, _timeStep, _enabledSelfCollisionCheck); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep"), ::boost::python::arg("_enabledSelfCollisionCheck"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity, double _timeStep, bool _enabledSelfCollisionCheck, bool _enableAdjacentBodyCheck) -> dart::dynamics::detail::SkeletonAspectProperties * { return new dart::dynamics::detail::SkeletonAspectProperties(_name, _isMobile, _gravity, _timeStep, _enabledSelfCollisionCheck, _enableAdjacentBodyCheck); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep"), ::boost::python::arg("_enabledSelfCollisionCheck"), ::boost::python::arg("_enableAdjacentBodyCheck"))))
.def_readwrite("mName", &dart::dynamics::detail::SkeletonAspectProperties::mName)
.def_readwrite("mIsMobile", &dart::dynamics::detail::SkeletonAspectProperties::mIsMobile)
.def_readwrite("mGravity", &dart::dynamics::detail::SkeletonAspectProperties::mGravity)
.def_readwrite("mTimeStep", &dart::dynamics::detail::SkeletonAspectProperties::mTimeStep)
.def_readwrite("mEnabledSelfCollisionCheck", &dart::dynamics::detail::SkeletonAspectProperties::mEnabledSelfCollisionCheck)
.def_readwrite("mEnabledAdjacentBodyCheck", &dart::dynamics::detail::SkeletonAspectProperties::mEnabledAdjacentBodyCheck)
;
}

/* footer */
