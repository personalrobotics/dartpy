#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart5utils10DartLoaderE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::DartLoader >("DartLoader", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::DartLoader * { return new dart::utils::DartLoader(); }, ::boost::python::default_call_policies()))
.def("addPackageDirectory", [](dart::utils::DartLoader *self, const std::string & _packageName, const std::string & _packageDirectory) -> void { return self->addPackageDirectory(_packageName, _packageDirectory); }, (::boost::python::arg("_packageName"), ::boost::python::arg("_packageDirectory")))
.def("parseSkeleton", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri) -> dart::dynamics::SkeletonPtr { return self->parseSkeleton(_uri); }, (::boost::python::arg("_uri")))
.def("parseSkeleton", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::SkeletonPtr { return self->parseSkeleton(_uri, _resourceRetriever); }, (::boost::python::arg("_uri"), ::boost::python::arg("_resourceRetriever")))
.def("parseSkeletonString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri) -> dart::dynamics::SkeletonPtr { return self->parseSkeletonString(_urdfString, _baseUri); }, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri")))
.def("parseSkeletonString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::SkeletonPtr { return self->parseSkeletonString(_urdfString, _baseUri, _resourceRetriever); }, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri"), ::boost::python::arg("_resourceRetriever")))
.def("parseWorld", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri) -> dart::simulation::WorldPtr { return self->parseWorld(_uri); }, (::boost::python::arg("_uri")))
.def("parseWorld", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::simulation::WorldPtr { return self->parseWorld(_uri, _resourceRetriever); }, (::boost::python::arg("_uri"), ::boost::python::arg("_resourceRetriever")))
.def("parseWorldString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri) -> dart::simulation::WorldPtr { return self->parseWorldString(_urdfString, _baseUri); }, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri")))
.def("parseWorldString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::simulation::WorldPtr { return self->parseWorldString(_urdfString, _baseUri, _resourceRetriever); }, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri"), ::boost::python::arg("_resourceRetriever")))
;
}

/* footer */
