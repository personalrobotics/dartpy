#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils10SkelParserE()
{
::boost::python::class_<dart::utils::SkelParser, ::boost::noncopyable >("SkelParser", boost::python::no_init)
.def("readWorld", static_cast<dart::simulation::WorldPtr (*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SkelParser::readWorld), (::boost::python::arg("_uri"), ::boost::python::arg("_retriever")))
.def("readWorldXML", static_cast<dart::simulation::WorldPtr (*)(const std::string &, const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SkelParser::readWorldXML), (::boost::python::arg("_xmlString"), ::boost::python::arg("_baseUri"), ::boost::python::arg("_retriever")))
.def("readSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SkelParser::readSkeleton), (::boost::python::arg("_fileUri"), ::boost::python::arg("_retriever")))
.staticmethod("readSkeleton")
.staticmethod("readWorld")
.staticmethod("readWorldXML")
;
}

/* footer */
