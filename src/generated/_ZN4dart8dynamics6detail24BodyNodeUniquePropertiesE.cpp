#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail24BodyNodeUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::BodyNodeUniqueProperties >("BodyNodeUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::BodyNodeUniqueProperties * { return new dart::dynamics::detail::BodyNodeUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Inertia & _inertia) -> dart::dynamics::detail::BodyNodeUniqueProperties * { return new dart::dynamics::detail::BodyNodeUniqueProperties(_inertia); }, ::boost::python::default_call_policies(), (::boost::python::arg("_inertia"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Inertia & _inertia, bool _isCollidable) -> dart::dynamics::detail::BodyNodeUniqueProperties * { return new dart::dynamics::detail::BodyNodeUniqueProperties(_inertia, _isCollidable); }, ::boost::python::default_call_policies(), (::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Inertia & _inertia, bool _isCollidable, double _frictionCoeff) -> dart::dynamics::detail::BodyNodeUniqueProperties * { return new dart::dynamics::detail::BodyNodeUniqueProperties(_inertia, _isCollidable, _frictionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"), ::boost::python::arg("_frictionCoeff"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Inertia & _inertia, bool _isCollidable, double _frictionCoeff, double _restitutionCoeff) -> dart::dynamics::detail::BodyNodeUniqueProperties * { return new dart::dynamics::detail::BodyNodeUniqueProperties(_inertia, _isCollidable, _frictionCoeff, _restitutionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"), ::boost::python::arg("_frictionCoeff"), ::boost::python::arg("_restitutionCoeff"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Inertia & _inertia, bool _isCollidable, double _frictionCoeff, double _restitutionCoeff, bool _gravityMode) -> dart::dynamics::detail::BodyNodeUniqueProperties * { return new dart::dynamics::detail::BodyNodeUniqueProperties(_inertia, _isCollidable, _frictionCoeff, _restitutionCoeff, _gravityMode); }, ::boost::python::default_call_policies(), (::boost::python::arg("_inertia"), ::boost::python::arg("_isCollidable"), ::boost::python::arg("_frictionCoeff"), ::boost::python::arg("_restitutionCoeff"), ::boost::python::arg("_gravityMode"))))
.def_readwrite("mInertia", &dart::dynamics::detail::BodyNodeUniqueProperties::mInertia)
.def_readwrite("mIsCollidable", &dart::dynamics::detail::BodyNodeUniqueProperties::mIsCollidable)
.def_readwrite("mFrictionCoeff", &dart::dynamics::detail::BodyNodeUniqueProperties::mFrictionCoeff)
.def_readwrite("mRestitutionCoeff", &dart::dynamics::detail::BodyNodeUniqueProperties::mRestitutionCoeff)
.def_readwrite("mGravityMode", &dart::dynamics::detail::BodyNodeUniqueProperties::mGravityMode)
.def_readwrite("mMarkerProperties", &dart::dynamics::detail::BodyNodeUniqueProperties::mMarkerProperties)
;
}

/* footer */
