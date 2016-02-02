#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math5TsincEd()
{
boost::python::def("Tsinc", static_cast<double (*)(double)>(&dart::math::Tsinc), (::boost::python::arg("_theta")))
;}

/* footer */
