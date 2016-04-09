#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart5utils26CompositeResourceRetrieverE_docstring[] = R"CHIMERA_STRING( CompositeResourceRetriever allows multiple 
 used interchangably by: (1) associating each 
 particular URI schema and/or (2) providing a precedence order for trying
 multiple retrievers.
)CHIMERA_STRING";

constexpr char _ZN4dart5utils26CompositeResourceRetriever19addDefaultRetrieverERKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring[] = R"CHIMERA_STRING( 
 This 
 ResourceRetrievers, if any, have failed. This method may be called
 multiple times. In that case, the ResourceRetrievers will be queried
 in the same order in which they were added.
)CHIMERA_STRING";

constexpr char _ZN4dart5utils26CompositeResourceRetriever18addSchemaRetrieverERKSsRKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring[] = R"CHIMERA_STRING( 
 This 
 specified schema. This method may be called multiple times. In that
 case, the ResourceRetrievers will be queried in the same order in which
 they were added.
)CHIMERA_STRING";

constexpr char _ZN4dart5utils26CompositeResourceRetriever6existsERKNS_6common3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils26CompositeResourceRetriever8retrieveERKNS_6common3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart5utils26CompositeResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::CompositeResourceRetriever, ::boost::python::bases<dart::common::ResourceRetriever > >("CompositeResourceRetriever", _ZN4dart5utils26CompositeResourceRetrieverE_docstring, boost::python::no_init)
.def("addDefaultRetriever", [](dart::utils::CompositeResourceRetriever *self, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> void { return self->addDefaultRetriever(_resourceRetriever); }, _ZN4dart5utils26CompositeResourceRetriever19addDefaultRetrieverERKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring, (::boost::python::arg("_resourceRetriever")))
.def("addSchemaRetriever", [](dart::utils::CompositeResourceRetriever *self, const std::string & _schema, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> bool { return self->addSchemaRetriever(_schema, _resourceRetriever); }, _ZN4dart5utils26CompositeResourceRetriever18addSchemaRetrieverERKSsRKSt10shared_ptrINS_6common17ResourceRetrieverEE_docstring, (::boost::python::arg("_schema"), ::boost::python::arg("_resourceRetriever")))
.def("exists", [](dart::utils::CompositeResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, _ZN4dart5utils26CompositeResourceRetriever6existsERKNS_6common3UriE_docstring, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::utils::CompositeResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, _ZN4dart5utils26CompositeResourceRetriever8retrieveERKNS_6common3UriE_docstring, (::boost::python::arg("_uri")))
;
}

/* footer */
