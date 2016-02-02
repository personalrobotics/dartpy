#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail13SupportUpdateEPNS0_7SupportE()
{
boost::python::def("SupportUpdate", static_cast<void (*)(dart::dynamics::Support *)>(&dart::dynamics::detail::SupportUpdate), (::boost::python::arg("support")))
;}

/* footer */
