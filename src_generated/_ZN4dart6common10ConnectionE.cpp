#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common10ConnectionE()
{
::boost::python::class_<dart::common::Connection >("Connection", boost::python::no_init)
.def(::boost::python::init<>())
.def("isConnected", static_cast<bool (dart::common::Connection::*)() const>(&dart::common::Connection::isConnected))
.def("disconnect", static_cast<void (dart::common::Connection::*)() const>(&dart::common::Connection::disconnect))
;
}

/* footer */
