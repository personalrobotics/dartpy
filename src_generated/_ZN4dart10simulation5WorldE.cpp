#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10simulation5WorldE()
{
::boost::python::object parent_object(::boost::python::scope().attr("simulation"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::simulation::World, ::boost::python::bases<dart::common::Subject > >("World", boost::python::no_init)
.def(::boost::python::init<const std::string &>((::boost::python::arg("_name"))))
.def("clone", static_cast<std::shared_ptr<dart::simulation::World> (dart::simulation::World::*)() const>(&dart::simulation::World::clone))
.def("setName", static_cast<const std::string &(dart::simulation::World::*)(const std::string &)>(&dart::simulation::World::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_newName")))
.def("getName", static_cast<const std::string &(dart::simulation::World::*)() const>(&dart::simulation::World::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setGravity", static_cast<void (dart::simulation::World::*)(const Eigen::Vector3d &)>(&dart::simulation::World::setGravity), (::boost::python::arg("_gravity")))
.def("getGravity", static_cast<const Eigen::Vector3d &(dart::simulation::World::*)() const>(&dart::simulation::World::getGravity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setTimeStep", static_cast<void (dart::simulation::World::*)(double)>(&dart::simulation::World::setTimeStep), (::boost::python::arg("_timeStep")))
.def("getTimeStep", static_cast<double (dart::simulation::World::*)() const>(&dart::simulation::World::getTimeStep))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::simulation::World::*)(std::size_t) const>(&dart::simulation::World::getSkeleton), (::boost::python::arg("_index")))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::simulation::World::*)(const std::string &) const>(&dart::simulation::World::getSkeleton), (::boost::python::arg("_name")))
.def("getNumSkeletons", static_cast<std::size_t (dart::simulation::World::*)() const>(&dart::simulation::World::getNumSkeletons))
.def("addSkeleton", static_cast<std::string (dart::simulation::World::*)(dart::dynamics::SkeletonPtr)>(&dart::simulation::World::addSkeleton), (::boost::python::arg("_skeleton")))
.def("removeSkeleton", static_cast<void (dart::simulation::World::*)(dart::dynamics::SkeletonPtr)>(&dart::simulation::World::removeSkeleton), (::boost::python::arg("_skeleton")))
.def("removeAllSkeletons", static_cast<std::set<dart::dynamics::SkeletonPtr> (dart::simulation::World::*)()>(&dart::simulation::World::removeAllSkeletons))
.def("getIndex", static_cast<int (dart::simulation::World::*)(int) const>(&dart::simulation::World::getIndex), (::boost::python::arg("_index")))
.def("getSimpleFrame", static_cast<dart::dynamics::SimpleFramePtr (dart::simulation::World::*)(std::size_t) const>(&dart::simulation::World::getSimpleFrame), (::boost::python::arg("_index")))
.def("getSimpleFrame", static_cast<dart::dynamics::SimpleFramePtr (dart::simulation::World::*)(const std::string &) const>(&dart::simulation::World::getSimpleFrame), (::boost::python::arg("_name")))
.def("getNumSimpleFrames", static_cast<std::size_t (dart::simulation::World::*)() const>(&dart::simulation::World::getNumSimpleFrames))
.def("addSimpleFrame", static_cast<std::string (dart::simulation::World::*)(dart::dynamics::SimpleFramePtr)>(&dart::simulation::World::addSimpleFrame), (::boost::python::arg("_frame")))
.def("removeSimpleFrame", static_cast<void (dart::simulation::World::*)(dart::dynamics::SimpleFramePtr)>(&dart::simulation::World::removeSimpleFrame), (::boost::python::arg("_frame")))
.def("removeAllSimpleFrames", static_cast<std::set<dart::dynamics::SimpleFramePtr> (dart::simulation::World::*)()>(&dart::simulation::World::removeAllSimpleFrames))
.def("checkCollision", static_cast<bool (dart::simulation::World::*)(bool)>(&dart::simulation::World::checkCollision), (::boost::python::arg("_checkAllCollisions") = false))
.def("reset", static_cast<void (dart::simulation::World::*)()>(&dart::simulation::World::reset))
.def("step", static_cast<void (dart::simulation::World::*)(bool)>(&dart::simulation::World::step), (::boost::python::arg("_resetCommand") = true))
.def("setTime", static_cast<void (dart::simulation::World::*)(double)>(&dart::simulation::World::setTime), (::boost::python::arg("_time")))
.def("getTime", static_cast<double (dart::simulation::World::*)() const>(&dart::simulation::World::getTime))
.def("getSimFrames", static_cast<int (dart::simulation::World::*)() const>(&dart::simulation::World::getSimFrames))
.def("bake", static_cast<void (dart::simulation::World::*)()>(&dart::simulation::World::bake))
.def_readonly("onNameChanged", &dart::simulation::World::onNameChanged)
;
}

/* footer */
