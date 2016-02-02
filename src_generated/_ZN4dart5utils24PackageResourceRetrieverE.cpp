#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils24PackageResourceRetrieverE()
{
::boost::python::class_<dart::utils::PackageResourceRetriever, ::boost::python::bases<dart::common::ResourceRetriever > >("PackageResourceRetriever", boost::python::no_init)
.def(::boost::python::init<const dart::common::ResourceRetrieverPtr &>((::boost::python::arg("_localRetriever"))))
.def("addPackageDirectory", static_cast<void (dart::utils::PackageResourceRetriever::*)(const std::string &, const std::string &)>(&dart::utils::PackageResourceRetriever::addPackageDirectory), (::boost::python::arg("_packageName"), ::boost::python::arg("_packageDirectory")))
.def("exists", static_cast<bool (dart::utils::PackageResourceRetriever::*)(const dart::common::Uri &)>(&dart::utils::PackageResourceRetriever::exists), (::boost::python::arg("_uri")))
.def("retrieve", static_cast<dart::common::ResourcePtr (dart::utils::PackageResourceRetriever::*)(const dart::common::Uri &)>(&dart::utils::PackageResourceRetriever::retrieve), (::boost::python::arg("_uri")))
;
}

/* footer */
