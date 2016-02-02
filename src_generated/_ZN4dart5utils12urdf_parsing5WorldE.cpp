#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils12urdf_parsing5WorldE()
{
::boost::python::class_<dart::utils::urdf_parsing::World >("World", boost::python::no_init)
.def_readwrite("name", &dart::utils::urdf_parsing::World::name)
.def_readwrite("models", &dart::utils::urdf_parsing::World::models)
;
}

/* footer */
