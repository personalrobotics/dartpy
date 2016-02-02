#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common12UriComponentE()
{
::boost::python::class_<dart::common::UriComponent >("UriComponent", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<dart::common::UriComponent::reference_const_type>((::boost::python::arg("_value"))))
.def("assign", static_cast<void (dart::common::UriComponent::*)(dart::common::UriComponent::reference_const_type)>(&dart::common::UriComponent::assign), (::boost::python::arg("_value")))
.def("reset", static_cast<void (dart::common::UriComponent::*)()>(&dart::common::UriComponent::reset))
.def("get", static_cast<dart::common::UriComponent::reference_const_type (dart::common::UriComponent::*)() const>(&dart::common::UriComponent::get), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("get_value_or", static_cast<dart::common::UriComponent::reference_const_type (dart::common::UriComponent::*)(dart::common::UriComponent::reference_const_type) const>(&dart::common::UriComponent::get_value_or), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_default")))
;
}

/* footer */
