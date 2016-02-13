#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6MarkerE()
{
::boost::python::class_<dart::dynamics::Marker >("Marker", boost::python::no_init)
.def(::boost::python::init<const std::string &, const Eigen::Vector3d &, const Eigen::Vector4d &, dart::dynamics::BodyNode *, dart::dynamics::Marker::ConstraintType>((::boost::python::arg("name"), ::boost::python::arg("offset"), ::boost::python::arg("color"), ::boost::python::arg("bodyNode"), ::boost::python::arg("type") = 0)))
.def("draw", static_cast<void (dart::dynamics::Marker::*)(dart::renderer::RenderInterface *, bool, const Eigen::Vector4d &, bool) const>(&dart::dynamics::Marker::draw), (::boost::python::arg("ri"), ::boost::python::arg("offset"), ::boost::python::arg("color"), ::boost::python::arg("useDefaultColor") = true))
.def("getBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::Marker::*)()>(&dart::dynamics::Marker::getBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getLocalPosition", static_cast<const Eigen::Vector3d &(dart::dynamics::Marker::*)() const>(&dart::dynamics::Marker::getLocalPosition), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setLocalPosition", static_cast<void (dart::dynamics::Marker::*)(const Eigen::Vector3d &)>(&dart::dynamics::Marker::setLocalPosition), (::boost::python::arg("offset")))
.def("getWorldPosition", static_cast<Eigen::Vector3d (dart::dynamics::Marker::*)() const>(&dart::dynamics::Marker::getWorldPosition))
.def("setSkeletonIndex", static_cast<void (dart::dynamics::Marker::*)(int)>(&dart::dynamics::Marker::setSkeletonIndex), (::boost::python::arg("index")))
.def("setIndexInSkeleton", static_cast<void (dart::dynamics::Marker::*)(int)>(&dart::dynamics::Marker::setIndexInSkeleton), (::boost::python::arg("index")))
.def("getIndexInSkeleton", static_cast<int (dart::dynamics::Marker::*)() const>(&dart::dynamics::Marker::getIndexInSkeleton))
.def("getID", static_cast<int (dart::dynamics::Marker::*)() const>(&dart::dynamics::Marker::getID))
.def("setName", static_cast<void (dart::dynamics::Marker::*)(const std::string &)>(&dart::dynamics::Marker::setName), (::boost::python::arg("name")))
.def("getName", static_cast<const std::string &(dart::dynamics::Marker::*)() const>(&dart::dynamics::Marker::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setConstraintType", static_cast<void (dart::dynamics::Marker::*)(dart::dynamics::Marker::ConstraintType)>(&dart::dynamics::Marker::setConstraintType), (::boost::python::arg("type")))
.def("getConstraintType", static_cast<dart::dynamics::Marker::ConstraintType (dart::dynamics::Marker::*)() const>(&dart::dynamics::Marker::getConstraintType))
;
}

/* footer */
