#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint30JointCoulombFrictionConstraintE()
{
::boost::python::class_<dart::constraint::JointCoulombFrictionConstraint, ::boost::noncopyable, ::boost::python::bases<dart::constraint::ConstraintBase > >("JointCoulombFrictionConstraint", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Joint *>((::boost::python::arg("_joint"))))
.def("setConstraintForceMixing", static_cast<void (*)(double)>(&dart::constraint::JointCoulombFrictionConstraint::setConstraintForceMixing), (::boost::python::arg("_cfm")))
.def("getConstraintForceMixing", static_cast<double (*)()>(&dart::constraint::JointCoulombFrictionConstraint::getConstraintForceMixing))
.staticmethod("getConstraintForceMixing")
.staticmethod("setConstraintForceMixing")
;
}

/* footer */
