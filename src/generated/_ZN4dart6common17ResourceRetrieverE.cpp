#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common17ResourceRetrieverE_docstring[] = R"CHIMERA_STRING( ResourceRetriever provides methods for testing for the existance of and
 accessing the content of a resource specified by URI.
)CHIMERA_STRING";

constexpr char _ZN4dart6common17ResourceRetriever6existsERKNS0_3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common17ResourceRetriever8retrieveERKNS0_3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common17ResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ResourceRetriever, ::boost::noncopyable, std::shared_ptr<dart::common::ResourceRetriever> >("ResourceRetriever", _ZN4dart6common17ResourceRetrieverE_docstring, boost::python::no_init)
.def("exists", [](dart::common::ResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, _ZN4dart6common17ResourceRetriever6existsERKNS0_3UriE_docstring, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::common::ResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, _ZN4dart6common17ResourceRetriever8retrieveERKNS0_3UriE_docstring, (::boost::python::arg("_uri")))
;
}

/* footer */
