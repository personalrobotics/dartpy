#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10DartLoaderE()
{
::boost::python::class_<dart::utils::DartLoader, ::boost::noncopyable >("DartLoader", boost::python::no_init)
.def(::boost::python::init<>())
.def("addPackageDirectory", static_cast<void (dart::utils::DartLoader::*)(const std::string &, const std::string &)>(&dart::utils::DartLoader::addPackageDirectory), (::boost::python::arg("_packageName"), ::boost::python::arg("_packageDirectory")))
.def("parseSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::utils::DartLoader::*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::DartLoader::parseSkeleton), (::boost::python::arg("_uri"), ::boost::python::arg("_resourceRetriever")))
.def("parseSkeletonString", static_cast<dart::dynamics::SkeletonPtr (dart::utils::DartLoader::*)(const std::string &, const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::DartLoader::parseSkeletonString), (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri"), ::boost::python::arg("_resourceRetriever")))
.def("parseWorld", static_cast<dart::simulation::WorldPtr (dart::utils::DartLoader::*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::DartLoader::parseWorld), (::boost::python::arg("_uri"), ::boost::python::arg("_resourceRetriever")))
.def("parseWorldString", static_cast<dart::simulation::WorldPtr (dart::utils::DartLoader::*)(const std::string &, const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::DartLoader::parseWorldString), (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri"), ::boost::python::arg("_resourceRetriever")))
;
}

/* footer */
