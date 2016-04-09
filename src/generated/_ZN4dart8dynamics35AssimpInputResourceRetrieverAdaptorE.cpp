#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZNK4dart8dynamics35AssimpInputResourceRetrieverAdaptor6ExistsEPKc_docstring[] = R"CHIMERA_STRING( 
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics35AssimpInputResourceRetrieverAdaptor14getOsSeparatorEv_docstring[] = R"CHIMERA_STRING(  
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptor5CloseEPN6Assimp8IOStreamE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::AssimpInputResourceRetrieverAdaptor, ::boost::noncopyable >("AssimpInputResourceRetrieverAdaptor", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::AssimpInputResourceRetrieverAdaptor * { return new dart::dynamics::AssimpInputResourceRetrieverAdaptor(_resourceRetriever); }, ::boost::python::default_call_policies(), (::boost::python::arg("_resourceRetriever"))))
.def("Exists", [](const dart::dynamics::AssimpInputResourceRetrieverAdaptor *self, const char * pFile) -> bool { return self->Exists(pFile); }, _ZNK4dart8dynamics35AssimpInputResourceRetrieverAdaptor6ExistsEPKc_docstring, (::boost::python::arg("pFile")))
.def("getOsSeparator", [](const dart::dynamics::AssimpInputResourceRetrieverAdaptor *self) -> char { return self->getOsSeparator(); }, _ZNK4dart8dynamics35AssimpInputResourceRetrieverAdaptor14getOsSeparatorEv_docstring)
.def("Close", [](dart::dynamics::AssimpInputResourceRetrieverAdaptor *self, Assimp::IOStream * pFile) -> void { return self->Close(pFile); }, _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptor5CloseEPN6Assimp8IOStreamE_docstring, (::boost::python::arg("pFile")))
;
}

/* footer */
