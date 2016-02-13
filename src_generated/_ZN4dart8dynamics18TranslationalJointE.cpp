#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics18TranslationalJointE()
{
::boost::python::class_<dart::dynamics::TranslationalJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<3> > >("TranslationalJoint", boost::python::no_init)
.def("getTranslationalJointProperties", static_cast<dart::dynamics::TranslationalJoint::Properties (dart::dynamics::TranslationalJoint::*)() const>(&dart::dynamics::TranslationalJoint::getTranslationalJointProperties))
.def("getType", static_cast<const std::string &(dart::dynamics::TranslationalJoint::*)() const>(&dart::dynamics::TranslationalJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::TranslationalJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::TranslationalJoint::*)(std::size_t) const>(&dart::dynamics::TranslationalJoint::isCyclic), (::boost::python::arg("_index")))
.def("getLocalJacobianStatic", static_cast<Eigen::Matrix<double, 6, 3> (dart::dynamics::TranslationalJoint::*)(const Eigen::Vector3d &) const>(&dart::dynamics::TranslationalJoint::getLocalJacobianStatic), (::boost::python::arg("_positions")))
.staticmethod("getStaticType")
;
}

/* footer */
