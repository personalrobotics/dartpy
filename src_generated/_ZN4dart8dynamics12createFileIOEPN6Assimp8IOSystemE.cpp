#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics12createFileIOEPN6Assimp8IOSystemE()
{
boost::python::def("createFileIO", static_cast<aiFileIO (*)(Assimp::IOSystem *)>(&dart::dynamics::createFileIO), (::boost::python::arg("adaptor")))
;}

/* footer */
