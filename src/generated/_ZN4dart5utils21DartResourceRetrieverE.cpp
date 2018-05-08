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

void _ZN4dart5utils21DartResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::DartResourceRetriever, ::boost::noncopyable, ::boost::python::bases<dart::common::ResourceRetriever > >("DartResourceRetriever", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::DartResourceRetriever * { return new dart::utils::DartResourceRetriever(); }, ::boost::python::default_call_policies()))
.def("exists", [](dart::utils::DartResourceRetriever *self, const dart::common::Uri & uri) -> bool { return self->exists(uri); }, (::boost::python::arg("uri")))
.def("retrieve", [](dart::utils::DartResourceRetriever *self, const dart::common::Uri & uri) -> dart::common::ResourcePtr { return self->retrieve(uri); }, (::boost::python::arg("uri")))
.def("getFilePath", [](dart::utils::DartResourceRetriever *self, const dart::common::Uri & uri) -> std::string { return self->getFilePath(uri); }, (::boost::python::arg("uri")))
;
}

/* footer */
