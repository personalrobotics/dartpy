#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17PointMassNotifierE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMassNotifier, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Entity > >("PointMassNotifier", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::SoftBodyNode *, const std::string &>((::boost::python::arg("_parentSoftBody"), ::boost::python::arg("_name"))))
.def("needsPartialAccelerationUpdate", static_cast<bool (dart::dynamics::PointMassNotifier::*)() const>(&dart::dynamics::PointMassNotifier::needsPartialAccelerationUpdate))
.def("clearTransformNotice", static_cast<void (dart::dynamics::PointMassNotifier::*)()>(&dart::dynamics::PointMassNotifier::clearTransformNotice))
.def("clearVelocityNotice", static_cast<void (dart::dynamics::PointMassNotifier::*)()>(&dart::dynamics::PointMassNotifier::clearVelocityNotice))
.def("clearPartialAccelerationNotice", static_cast<void (dart::dynamics::PointMassNotifier::*)()>(&dart::dynamics::PointMassNotifier::clearPartialAccelerationNotice))
.def("clearAccelerationNotice", static_cast<void (dart::dynamics::PointMassNotifier::*)()>(&dart::dynamics::PointMassNotifier::clearAccelerationNotice))
.def("notifyTransformUpdate", static_cast<void (dart::dynamics::PointMassNotifier::*)()>(&dart::dynamics::PointMassNotifier::notifyTransformUpdate))
.def("notifyVelocityUpdate", static_cast<void (dart::dynamics::PointMassNotifier::*)()>(&dart::dynamics::PointMassNotifier::notifyVelocityUpdate))
.def("notifyAccelerationUpdate", static_cast<void (dart::dynamics::PointMassNotifier::*)()>(&dart::dynamics::PointMassNotifier::notifyAccelerationUpdate))
;
}

/* footer */
