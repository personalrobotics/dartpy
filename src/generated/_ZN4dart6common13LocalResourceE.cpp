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

void _ZN4dart6common13LocalResourceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::LocalResource, ::boost::noncopyable, ::boost::python::bases<dart::common::Resource > >("LocalResource", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::string & _path) -> dart::common::LocalResource * { return new dart::common::LocalResource(_path); }, ::boost::python::default_call_policies(), (::boost::python::arg("_path"))))
.def("isGood", [](const dart::common::LocalResource *self) -> bool { return self->isGood(); })
.def("getSize", [](dart::common::LocalResource *self) -> std::size_t { return self->getSize(); })
.def("tell", [](dart::common::LocalResource *self) -> std::size_t { return self->tell(); })
.def("seek", [](dart::common::LocalResource *self, ptrdiff_t _origin, dart::common::Resource::SeekType _mode) -> bool { return self->seek(_origin, _mode); }, (::boost::python::arg("_origin"), ::boost::python::arg("_mode")))
;
}

/* footer */
