#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics14NodeDestructorE()
{
::boost::python::class_<dart::dynamics::NodeDestructor, ::boost::noncopyable >("NodeDestructor", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Node *>((::boost::python::arg("_node"))))
;
}

/* footer */
