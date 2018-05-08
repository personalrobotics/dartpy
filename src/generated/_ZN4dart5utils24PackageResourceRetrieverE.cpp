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

void _ZN4dart5utils24PackageResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::PackageResourceRetriever, std::shared_ptr<dart::utils::PackageResourceRetriever>, ::boost::python::bases<dart::common::ResourceRetriever > >("PackageResourceRetriever", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::PackageResourceRetriever * { return new dart::utils::PackageResourceRetriever(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & _localRetriever) -> dart::utils::PackageResourceRetriever * { return new dart::utils::PackageResourceRetriever(_localRetriever); }, ::boost::python::default_call_policies(), (::boost::python::arg("_localRetriever"))))
.def("addPackageDirectory", [](dart::utils::PackageResourceRetriever *self, const std::string & _packageName, const std::string & _packageDirectory) -> void { return self->addPackageDirectory(_packageName, _packageDirectory); }, (::boost::python::arg("_packageName"), ::boost::python::arg("_packageDirectory")))
.def("exists", [](dart::utils::PackageResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::utils::PackageResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, (::boost::python::arg("_uri")))
.def("getFilePath", [](dart::utils::PackageResourceRetriever *self, const dart::common::Uri & uri) -> std::string { return self->getFilePath(uri); }, (::boost::python::arg("uri")))
;
}

/* footer */
