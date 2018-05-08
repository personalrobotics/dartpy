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

void _ZN4dart6common17ResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ResourceRetriever, ::boost::noncopyable, std::shared_ptr<dart::common::ResourceRetriever> >("ResourceRetriever", boost::python::no_init)
.def("exists", [](dart::common::ResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::common::ResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, (::boost::python::arg("_uri")))
.def("readAll", [](dart::common::ResourceRetriever *self, const dart::common::Uri & uri) -> std::string { return self->readAll(uri); }, (::boost::python::arg("uri")))
.def("getFilePath", [](dart::common::ResourceRetriever *self, const dart::common::Uri & uri) -> std::string { return self->getFilePath(uri); }, (::boost::python::arg("uri")))
;
}

/* footer */
