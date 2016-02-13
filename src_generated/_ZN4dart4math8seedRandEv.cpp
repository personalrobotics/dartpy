#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math8seedRandEv()
{
boost::python::def("seedRand", static_cast<unsigned int (*)()>(&dart::math::seedRand))
;}

/* footer */
