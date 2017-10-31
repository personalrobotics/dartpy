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

void _ZN4dart6common22LocalResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::LocalResourceRetriever, ::boost::noncopyable, std::shared_ptr<dart::common::LocalResourceRetriever>, ::boost::python::bases<dart::common::ResourceRetriever > >("LocalResourceRetriever", boost::python::no_init)
.def("exists", [](dart::common::LocalResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::common::LocalResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, (::boost::python::arg("_uri")))
;
}

/* footer */
