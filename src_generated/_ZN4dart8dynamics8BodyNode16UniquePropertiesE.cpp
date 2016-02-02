#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics8BodyNode16UniquePropertiesE()
{
::boost::python::class_<dart::dynamics::BodyNode::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Inertia &, const std::vector<dart::dynamics::ShapePtr> &, bool, double, double, bool>((::boost::python::arg("_inertia"), ::boost::python::arg("_collisionShapes"), ::boost::python::arg("_isCollidable") = true, ::boost::python::arg("_frictionCoeff") = 1.000000e+00, ::boost::python::arg("_restitutionCoeff") = 0.000000e+00, ::boost::python::arg("_gravityMode") = true)))
.def_readwrite("mInertia", &dart::dynamics::BodyNode::UniqueProperties::mInertia)
.def_readwrite("mColShapes", &dart::dynamics::BodyNode::UniqueProperties::mColShapes)
.def_readwrite("mIsCollidable", &dart::dynamics::BodyNode::UniqueProperties::mIsCollidable)
.def_readwrite("mFrictionCoeff", &dart::dynamics::BodyNode::UniqueProperties::mFrictionCoeff)
.def_readwrite("mRestitutionCoeff", &dart::dynamics::BodyNode::UniqueProperties::mRestitutionCoeff)
.def_readwrite("mGravityMode", &dart::dynamics::BodyNode::UniqueProperties::mGravityMode)
.def_readwrite("mMarkerProperties", &dart::dynamics::BodyNode::UniqueProperties::mMarkerProperties)
;
}

/* footer */
