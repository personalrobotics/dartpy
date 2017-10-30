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

void _ZN4dart8dynamics35AssimpInputResourceRetrieverAdaptorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::AssimpInputResourceRetrieverAdaptor >("AssimpInputResourceRetrieverAdaptor", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::AssimpInputResourceRetrieverAdaptor * { return new dart::dynamics::AssimpInputResourceRetrieverAdaptor(_resourceRetriever); }, ::boost::python::default_call_policies(), (::boost::python::arg("_resourceRetriever"))))
.def("Exists", [](const dart::dynamics::AssimpInputResourceRetrieverAdaptor *self, const char * pFile) -> bool { return self->Exists(pFile); }, (::boost::python::arg("pFile")))
.def("getOsSeparator", [](const dart::dynamics::AssimpInputResourceRetrieverAdaptor *self) -> char { return self->getOsSeparator(); })
.def("Close", [](dart::dynamics::AssimpInputResourceRetrieverAdaptor *self, Assimp::IOStream * pFile) -> void { return self->Close(pFile); }, (::boost::python::arg("pFile")))
;
}

/* footer */
