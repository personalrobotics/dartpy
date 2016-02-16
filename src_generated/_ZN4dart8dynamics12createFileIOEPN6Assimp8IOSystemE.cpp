#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics12createFileIOEPN6Assimp8IOSystemE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("createFileIO", static_cast<aiFileIO (*)(Assimp::IOSystem *)>(&dart::dynamics::createFileIO), (::boost::python::arg("adaptor")))
;}

/* footer */
