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

void _ZN4dart6common3UriE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Uri >("Uri", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Uri * { return new dart::common::Uri(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _input) -> dart::common::Uri * { return new dart::common::Uri(_input); }, ::boost::python::default_call_policies(), (::boost::python::arg("_input"))))
.def("__init__", ::boost::python::make_constructor([](const char * _input) -> dart::common::Uri * { return new dart::common::Uri(_input); }, ::boost::python::default_call_policies(), (::boost::python::arg("_input"))))
.def("clear", [](dart::common::Uri *self) -> void { return self->clear(); })
.def("fromString", [](dart::common::Uri *self, const std::string & _input) -> bool { return self->fromString(_input); }, (::boost::python::arg("_input")))
.def("fromPath", [](dart::common::Uri *self, const std::string & _path) -> bool { return self->fromPath(_path); }, (::boost::python::arg("_path")))
.def("fromStringOrPath", [](dart::common::Uri *self, const std::string & _input) -> bool { return self->fromStringOrPath(_input); }, (::boost::python::arg("_input")))
.def("fromRelativeUri", [](dart::common::Uri *self, const std::string & _base, const std::string & _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const std::string & _base, const std::string & _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const char * _base, const char * _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const char * _base, const char * _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const std::string & _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const std::string & _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const char * _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const char * _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const dart::common::Uri & _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const dart::common::Uri & _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("toString", [](const dart::common::Uri *self) -> std::string { return self->toString(); })
.def("getPath", [](const dart::common::Uri *self) -> std::string { return self->getPath(); })
.def("getFilesystemPath", [](const dart::common::Uri *self) -> std::string { return self->getFilesystemPath(); })
.def("createFromString", [](const std::string & _input) -> dart::common::Uri { return dart::common::Uri::createFromString(_input); }, (::boost::python::arg("_input")))
.def("createFromPath", [](const std::string & _path) -> dart::common::Uri { return dart::common::Uri::createFromPath(_path); }, (::boost::python::arg("_path")))
.def("createFromStringOrPath", [](const std::string & _input) -> dart::common::Uri { return dart::common::Uri::createFromStringOrPath(_input); }, (::boost::python::arg("_input")))
.def("createFromRelativeUri", [](const std::string & _base, const std::string & _relative) -> dart::common::Uri { return dart::common::Uri::createFromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("createFromRelativeUri", [](const std::string & _base, const std::string & _relative, bool _strict) -> dart::common::Uri { return dart::common::Uri::createFromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("createFromRelativeUri", [](const dart::common::Uri & _base, const std::string & _relative) -> dart::common::Uri { return dart::common::Uri::createFromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("createFromRelativeUri", [](const dart::common::Uri & _base, const std::string & _relative, bool _strict) -> dart::common::Uri { return dart::common::Uri::createFromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("createFromRelativeUri", [](const dart::common::Uri & _base, const dart::common::Uri & _relative) -> dart::common::Uri { return dart::common::Uri::createFromRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("createFromRelativeUri", [](const dart::common::Uri & _base, const dart::common::Uri & _relative, bool _strict) -> dart::common::Uri { return dart::common::Uri::createFromRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("getUri", [](const std::string & _input) -> std::string { return dart::common::Uri::getUri(_input); }, (::boost::python::arg("_input")))
.def("getRelativeUri", [](const std::string & _base, const std::string & _relative) -> std::string { return dart::common::Uri::getRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("getRelativeUri", [](const std::string & _base, const std::string & _relative, bool _strict) -> std::string { return dart::common::Uri::getRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("getRelativeUri", [](const dart::common::Uri & _base, const std::string & _relative) -> std::string { return dart::common::Uri::getRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("getRelativeUri", [](const dart::common::Uri & _base, const std::string & _relative, bool _strict) -> std::string { return dart::common::Uri::getRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("getRelativeUri", [](const dart::common::Uri & _base, const dart::common::Uri & _relative) -> std::string { return dart::common::Uri::getRelativeUri(_base, _relative); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("getRelativeUri", [](const dart::common::Uri & _base, const dart::common::Uri & _relative, bool _strict) -> std::string { return dart::common::Uri::getRelativeUri(_base, _relative, _strict); }, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.staticmethod("createFromPath")
.staticmethod("createFromRelativeUri")
.staticmethod("createFromString")
.staticmethod("createFromStringOrPath")
.staticmethod("getRelativeUri")
.staticmethod("getUri")
.def_readwrite("mScheme", &dart::common::Uri::mScheme)
.def_readwrite("mAuthority", &dart::common::Uri::mAuthority)
.def_readwrite("mPath", &dart::common::Uri::mPath)
.def_readwrite("mQuery", &dart::common::Uri::mQuery)
.def_readwrite("mFragment", &dart::common::Uri::mFragment)
;
}

/* footer */
