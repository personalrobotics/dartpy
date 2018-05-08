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

void _ZN4dart6common13SharedLibraryE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SharedLibrary >("SharedLibrary", boost::python::no_init)
.def("isValid", [](const dart::common::SharedLibrary *self) -> bool { return self->isValid(); })
.def("create", [](const boost::filesystem::path & path) -> std::shared_ptr<dart::common::SharedLibrary> { return dart::common::SharedLibrary::create(path); }, (::boost::python::arg("path")))
.staticmethod("create")
;
}

/* footer */
