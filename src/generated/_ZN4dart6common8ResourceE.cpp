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

void _ZN4dart6common8ResourceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Resource, ::boost::noncopyable >("Resource", boost::python::no_init)
.def("getSize", [](dart::common::Resource *self) -> std::size_t { return self->getSize(); })
.def("tell", [](dart::common::Resource *self) -> std::size_t { return self->tell(); })
.def("seek", [](dart::common::Resource *self, ptrdiff_t _offset, dart::common::Resource::SeekType _origin) -> bool { return self->seek(_offset, _origin); }, (::boost::python::arg("_offset"), ::boost::python::arg("_origin")))
.def("readAll", [](dart::common::Resource *self) -> std::string { return self->readAll(); })
;
}

/* footer */
