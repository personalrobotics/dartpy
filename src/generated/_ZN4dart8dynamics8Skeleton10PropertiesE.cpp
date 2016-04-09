#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics8Skeleton10PropertiesE_docstring[] = R"CHIMERA_STRING( The Properties of this Skeleton which are independent of the components
 within the Skeleton, such as its BodyNodes and Joints. This does not
 include any Properties of the Skeleton's Addons.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics8Skeleton10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Skeleton"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Skeleton::Properties >("Properties", _ZN4dart8dynamics8Skeleton10PropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile) -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(_name, _isMobile); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity) -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(_name, _isMobile, _gravity); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity, double _timeStep) -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(_name, _isMobile, _gravity, _timeStep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity, double _timeStep, bool _enabledSelfCollisionCheck) -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(_name, _isMobile, _gravity, _timeStep, _enabledSelfCollisionCheck); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep"), ::boost::python::arg("_enabledSelfCollisionCheck"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity, double _timeStep, bool _enabledSelfCollisionCheck, bool _enableAdjacentBodyCheck) -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(_name, _isMobile, _gravity, _timeStep, _enabledSelfCollisionCheck, _enableAdjacentBodyCheck); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep"), ::boost::python::arg("_enabledSelfCollisionCheck"), ::boost::python::arg("_enableAdjacentBodyCheck"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, bool _isMobile, const Eigen::Vector3d & _gravity, double _timeStep, bool _enabledSelfCollisionCheck, bool _enableAdjacentBodyCheck, std::size_t _version) -> dart::dynamics::Skeleton::Properties * { return new dart::dynamics::Skeleton::Properties(_name, _isMobile, _gravity, _timeStep, _enabledSelfCollisionCheck, _enableAdjacentBodyCheck, _version); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_isMobile"), ::boost::python::arg("_gravity"), ::boost::python::arg("_timeStep"), ::boost::python::arg("_enabledSelfCollisionCheck"), ::boost::python::arg("_enableAdjacentBodyCheck"), ::boost::python::arg("_version"))))
.def_readwrite("mName", &dart::dynamics::Skeleton::Properties::mName)
.def_readwrite("mIsMobile", &dart::dynamics::Skeleton::Properties::mIsMobile)
.def_readwrite("mGravity", &dart::dynamics::Skeleton::Properties::mGravity)
.def_readwrite("mTimeStep", &dart::dynamics::Skeleton::Properties::mTimeStep)
.def_readwrite("mEnabledSelfCollisionCheck", &dart::dynamics::Skeleton::Properties::mEnabledSelfCollisionCheck)
.def_readwrite("mEnabledAdjacentBodyCheck", &dart::dynamics::Skeleton::Properties::mEnabledAdjacentBodyCheck)
.def_readwrite("mVersion", &dart::dynamics::Skeleton::Properties::mVersion)
;
}

/* footer */
