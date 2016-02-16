#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils11openXMLFileERN8tinyxml211XMLDocumentERKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("openXMLFile", static_cast<void (*)(tinyxml2::XMLDocument &, const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::openXMLFile), (::boost::python::arg("doc"), ::boost::python::arg("uri"), ::boost::python::arg("retriever")))
;}

/* footer */
