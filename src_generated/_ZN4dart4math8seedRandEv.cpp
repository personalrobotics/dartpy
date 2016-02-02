#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math8seedRandEv()
{
boost::python::def("seedRand", static_cast<unsigned int (*)()>(&dart::math::seedRand))
;}

/* footer */
