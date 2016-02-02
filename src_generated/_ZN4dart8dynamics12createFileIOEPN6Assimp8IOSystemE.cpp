#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics12createFileIOEPN6Assimp8IOSystemE()
{
boost::python::def("createFileIO", static_cast<aiFileIO (*)(Assimp::IOSystem *)>(&dart::dynamics::createFileIO), (::boost::python::arg("adaptor")))
;}

/* footer */
