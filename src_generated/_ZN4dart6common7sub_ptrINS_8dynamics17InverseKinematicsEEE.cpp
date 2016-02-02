#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common7sub_ptrINS_8dynamics17InverseKinematicsEEE()
{
::boost::python::class_<dart::common::sub_ptr<dart::dynamics::InverseKinematics>, ::boost::python::bases<dart::common::Observer > >("_ZN4dart6common7sub_ptrINS_8dynamics17InverseKinematicsEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<dart::dynamics::InverseKinematics *>((::boost::python::arg("_ptr"))))
.def("get", static_cast<dart::dynamics::InverseKinematics *(dart::common::sub_ptr<dart::dynamics::InverseKinematics>::*)() const>(&dart::common::sub_ptr<dart::dynamics::InverseKinematics>::get), ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("set", static_cast<void (dart::common::sub_ptr<dart::dynamics::InverseKinematics>::*)(dart::dynamics::InverseKinematics *)>(&dart::common::sub_ptr<dart::dynamics::InverseKinematics>::set), (::boost::python::arg("_ptr")))
.def("valid", static_cast<bool (dart::common::sub_ptr<dart::dynamics::InverseKinematics>::*)()>(&dart::common::sub_ptr<dart::dynamics::InverseKinematics>::valid))
;
}

/* footer */
