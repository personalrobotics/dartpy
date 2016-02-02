#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils11openXMLFileERN8tinyxml211XMLDocumentERKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE()
{
boost::python::def("openXMLFile", static_cast<void (*)(tinyxml2::XMLDocument &, const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::openXMLFile), (::boost::python::arg("doc"), ::boost::python::arg("uri"), ::boost::python::arg("retriever")))
;}

/* footer */
