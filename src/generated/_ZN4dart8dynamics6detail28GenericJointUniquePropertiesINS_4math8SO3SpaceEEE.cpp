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

void _ZN4dart8dynamics6detail28GenericJointUniquePropertiesINS_4math8SO3SpaceEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> >("SO3JointUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationUpperLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits, accelerationUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"), ::boost::python::arg("accelerationUpperLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceLowerLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits, accelerationUpperLimits, forceLowerLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"), ::boost::python::arg("accelerationUpperLimits"), ::boost::python::arg("forceLowerLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceUpperLimits) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits, accelerationUpperLimits, forceLowerLimits, forceUpperLimits); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"), ::boost::python::arg("accelerationUpperLimits"), ::boost::python::arg("forceLowerLimits"), ::boost::python::arg("forceUpperLimits"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & springStiffness) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits, accelerationUpperLimits, forceLowerLimits, forceUpperLimits, springStiffness); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"), ::boost::python::arg("accelerationUpperLimits"), ::boost::python::arg("forceLowerLimits"), ::boost::python::arg("forceUpperLimits"), ::boost::python::arg("springStiffness"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & springStiffness, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & restPosition) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits, accelerationUpperLimits, forceLowerLimits, forceUpperLimits, springStiffness, restPosition); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"), ::boost::python::arg("accelerationUpperLimits"), ::boost::python::arg("forceLowerLimits"), ::boost::python::arg("forceUpperLimits"), ::boost::python::arg("springStiffness"), ::boost::python::arg("restPosition"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & springStiffness, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & restPosition, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & dampingCoefficient) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits, accelerationUpperLimits, forceLowerLimits, forceUpperLimits, springStiffness, restPosition, dampingCoefficient); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"), ::boost::python::arg("accelerationUpperLimits"), ::boost::python::arg("forceLowerLimits"), ::boost::python::arg("forceUpperLimits"), ::boost::python::arg("springStiffness"), ::boost::python::arg("restPosition"), ::boost::python::arg("dampingCoefficient"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & positionUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & initialPositions, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & velocityUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & initialVelocities, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & accelerationUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceLowerLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & forceUpperLimits, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & springStiffness, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::EuclideanPoint & restPosition, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & dampingCoefficient, const dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::Vector & coulombFrictions) -> dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> * { return new dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>(positionLowerLimits, positionUpperLimits, initialPositions, velocityLowerLimits, velocityUpperLimits, initialVelocities, accelerationLowerLimits, accelerationUpperLimits, forceLowerLimits, forceUpperLimits, springStiffness, restPosition, dampingCoefficient, coulombFrictions); }, ::boost::python::default_call_policies(), (::boost::python::arg("positionLowerLimits"), ::boost::python::arg("positionUpperLimits"), ::boost::python::arg("initialPositions"), ::boost::python::arg("velocityLowerLimits"), ::boost::python::arg("velocityUpperLimits"), ::boost::python::arg("initialVelocities"), ::boost::python::arg("accelerationLowerLimits"), ::boost::python::arg("accelerationUpperLimits"), ::boost::python::arg("forceLowerLimits"), ::boost::python::arg("forceUpperLimits"), ::boost::python::arg("springStiffness"), ::boost::python::arg("restPosition"), ::boost::python::arg("dampingCoefficient"), ::boost::python::arg("coulombFrictions"))))
.def_readwrite("mPositionLowerLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mPositionLowerLimits)
.def_readwrite("mPositionUpperLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mPositionUpperLimits)
.def_readwrite("mInitialPositions", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mInitialPositions)
.def_readwrite("mVelocityLowerLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mVelocityLowerLimits)
.def_readwrite("mVelocityUpperLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mVelocityUpperLimits)
.def_readwrite("mInitialVelocities", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mInitialVelocities)
.def_readwrite("mAccelerationLowerLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mAccelerationLowerLimits)
.def_readwrite("mAccelerationUpperLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mAccelerationUpperLimits)
.def_readwrite("mForceLowerLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mForceLowerLimits)
.def_readwrite("mForceUpperLimits", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mForceUpperLimits)
.def_readwrite("mSpringStiffnesses", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mSpringStiffnesses)
.def_readwrite("mRestPositions", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mRestPositions)
.def_readwrite("mDampingCoefficients", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mDampingCoefficients)
.def_readwrite("mFrictions", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mFrictions)
.def_readwrite("mPreserveDofNames", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mPreserveDofNames)
.def_readwrite("mDofNames", &dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::mDofNames)
.add_static_property("NumDofs", ::boost::python::make_getter(dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space>::NumDofs))
;
}

/* footer */
