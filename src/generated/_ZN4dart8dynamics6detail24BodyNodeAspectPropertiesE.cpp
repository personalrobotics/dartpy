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

void _ZN4dart8dynamics6detail24BodyNodeAspectPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::BodyNodeAspectProperties >("BodyNodeAspectProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::BodyNodeAspectProperties * { return new dart::dynamics::detail::BodyNodeAspectProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & name) -> dart::dynamics::detail::BodyNodeAspectProperties * { return new dart::dynamics::detail::BodyNodeAspectProperties(name); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const dart::dynamics::Inertia & _inertia) -> dart::dynamics::detail::BodyNodeAspectProperties * { return new dart::dynamics::detail::BodyNodeAspectProperties(name, _inertia); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("_inertia"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const dart::dynamics::Inertia & _inertia, bool _isCollidable) -> dart::dynamics::detail::BodyNodeAspectProperties * { return new dart::dynamics::detail::BodyNodeAspectProperties(name, _inertia, _isCollidable); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const dart::dynamics::Inertia & _inertia, bool _isCollidable, double _frictionCoeff) -> dart::dynamics::detail::BodyNodeAspectProperties * { return new dart::dynamics::detail::BodyNodeAspectProperties(name, _inertia, _isCollidable, _frictionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"), ::boost::python::arg("_frictionCoeff"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const dart::dynamics::Inertia & _inertia, bool _isCollidable, double _frictionCoeff, double _restitutionCoeff) -> dart::dynamics::detail::BodyNodeAspectProperties * { return new dart::dynamics::detail::BodyNodeAspectProperties(name, _inertia, _isCollidable, _frictionCoeff, _restitutionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"), ::boost::python::arg("_frictionCoeff"), ::boost::python::arg("_restitutionCoeff"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const dart::dynamics::Inertia & _inertia, bool _isCollidable, double _frictionCoeff, double _restitutionCoeff, bool _gravityMode) -> dart::dynamics::detail::BodyNodeAspectProperties * { return new dart::dynamics::detail::BodyNodeAspectProperties(name, _inertia, _isCollidable, _frictionCoeff, _restitutionCoeff, _gravityMode); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"), ::boost::python::arg("_frictionCoeff"), ::boost::python::arg("_restitutionCoeff"), ::boost::python::arg("_gravityMode"))))
.def_readwrite("mName", &dart::dynamics::detail::BodyNodeAspectProperties::mName)
.def_readwrite("mInertia", &dart::dynamics::detail::BodyNodeAspectProperties::mInertia)
.def_readwrite("mIsCollidable", &dart::dynamics::detail::BodyNodeAspectProperties::mIsCollidable)
.def_readwrite("mFrictionCoeff", &dart::dynamics::detail::BodyNodeAspectProperties::mFrictionCoeff)
.def_readwrite("mRestitutionCoeff", &dart::dynamics::detail::BodyNodeAspectProperties::mRestitutionCoeff)
.def_readwrite("mGravityMode", &dart::dynamics::detail::BodyNodeAspectProperties::mGravityMode)
;
}

/* footer */
