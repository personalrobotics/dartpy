#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils26CompositeResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::CompositeResourceRetriever, ::boost::python::bases<dart::common::ResourceRetriever > >("CompositeResourceRetriever", boost::python::no_init)
.def("addDefaultRetriever", static_cast<void (dart::utils::CompositeResourceRetriever::*)(const dart::common::ResourceRetrieverPtr &)>(&dart::utils::CompositeResourceRetriever::addDefaultRetriever), (::boost::python::arg("_resourceRetriever")))
.def("addSchemaRetriever", static_cast<bool (dart::utils::CompositeResourceRetriever::*)(const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::CompositeResourceRetriever::addSchemaRetriever), (::boost::python::arg("_schema"), ::boost::python::arg("_resourceRetriever")))
.def("exists", static_cast<bool (dart::utils::CompositeResourceRetriever::*)(const dart::common::Uri &)>(&dart::utils::CompositeResourceRetriever::exists), (::boost::python::arg("_uri")))
.def("retrieve", static_cast<dart::common::ResourcePtr (dart::utils::CompositeResourceRetriever::*)(const dart::common::Uri &)>(&dart::utils::CompositeResourceRetriever::retrieve), (::boost::python::arg("_uri")))
;
}

/* footer */
