#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common16ScopedConnectionE()
{
::boost::python::class_<dart::common::ScopedConnection, ::boost::noncopyable, ::boost::python::bases<dart::common::Connection > >("ScopedConnection", boost::python::no_init)
.def(::boost::python::init<const dart::common::Connection &>((::boost::python::arg("_other"))))
;
}

/* footer */
