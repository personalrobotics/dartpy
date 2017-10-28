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

void _ZN4dart5utils26CompositeResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::CompositeResourceRetriever, ::boost::python::bases<dart::common::ResourceRetriever > >("CompositeResourceRetriever", boost::python::no_init)
.def("addDefaultRetriever", [](dart::utils::CompositeResourceRetriever *self, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> void { return self->addDefaultRetriever(_resourceRetriever); }, (::boost::python::arg("_resourceRetriever")))
.def("addSchemaRetriever", [](dart::utils::CompositeResourceRetriever *self, const std::string & _schema, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> bool { return self->addSchemaRetriever(_schema, _resourceRetriever); }, (::boost::python::arg("_schema"), ::boost::python::arg("_resourceRetriever")))
.def("exists", [](dart::utils::CompositeResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::utils::CompositeResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, (::boost::python::arg("_uri")))
;
}

/* footer */
