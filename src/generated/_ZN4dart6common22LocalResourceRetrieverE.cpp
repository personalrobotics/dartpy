#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common22LocalResourceRetrieverE_docstring[] = R"CHIMERA_STRING( LocalResourceRetriever provides access to local resources specified by
 file:// URIs by wrapping the standard C and C++ file manipulation routines.
)CHIMERA_STRING";

constexpr char _ZN4dart6common22LocalResourceRetriever6existsERKNS0_3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart6common22LocalResourceRetriever8retrieveERKNS0_3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common22LocalResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::LocalResourceRetriever, ::boost::noncopyable, std::shared_ptr<dart::common::LocalResourceRetriever>, ::boost::python::bases<dart::common::ResourceRetriever > >("LocalResourceRetriever", _ZN4dart6common22LocalResourceRetrieverE_docstring, boost::python::no_init)
.def("exists", [](dart::common::LocalResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, _ZN4dart6common22LocalResourceRetriever6existsERKNS0_3UriE_docstring, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::common::LocalResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, _ZN4dart6common22LocalResourceRetriever8retrieveERKNS0_3UriE_docstring, (::boost::python::arg("_uri")))
;
}

/* footer */
