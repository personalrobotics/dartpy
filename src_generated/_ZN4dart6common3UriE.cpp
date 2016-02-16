#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common3UriE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Uri >("Uri", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const std::string &>((::boost::python::arg("_input"))))
.def(::boost::python::init<const char *>((::boost::python::arg("_input"))))
.def("clear", static_cast<void (dart::common::Uri::*)()>(&dart::common::Uri::clear))
.def("fromString", static_cast<bool (dart::common::Uri::*)(const std::string &)>(&dart::common::Uri::fromString), (::boost::python::arg("_input")))
.def("fromPath", static_cast<bool (dart::common::Uri::*)(const std::string &)>(&dart::common::Uri::fromPath), (::boost::python::arg("_path")))
.def("fromStringOrPath", static_cast<bool (dart::common::Uri::*)(const std::string &)>(&dart::common::Uri::fromStringOrPath), (::boost::python::arg("_input")))
.def("fromRelativeUri", static_cast<bool (dart::common::Uri::*)(const std::string &, const std::string &, bool)>(&dart::common::Uri::fromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("fromRelativeUri", static_cast<bool (dart::common::Uri::*)(const char *, const char *, bool)>(&dart::common::Uri::fromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("fromRelativeUri", static_cast<bool (dart::common::Uri::*)(const dart::common::Uri &, const std::string &, bool)>(&dart::common::Uri::fromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("fromRelativeUri", static_cast<bool (dart::common::Uri::*)(const dart::common::Uri &, const char *, bool)>(&dart::common::Uri::fromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("fromRelativeUri", static_cast<bool (dart::common::Uri::*)(const dart::common::Uri &, const dart::common::Uri &, bool)>(&dart::common::Uri::fromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("toString", static_cast<std::string (dart::common::Uri::*)() const>(&dart::common::Uri::toString))
.def("createFromString", static_cast<dart::common::Uri (*)(const std::string &)>(&dart::common::Uri::createFromString), (::boost::python::arg("_input")))
.def("createFromPath", static_cast<dart::common::Uri (*)(const std::string &)>(&dart::common::Uri::createFromPath), (::boost::python::arg("_path")))
.def("createFromStringOrPath", static_cast<dart::common::Uri (*)(const std::string &)>(&dart::common::Uri::createFromStringOrPath), (::boost::python::arg("_input")))
.def("createFromRelativeUri", static_cast<dart::common::Uri (*)(const std::string &, const std::string &, bool)>(&dart::common::Uri::createFromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("createFromRelativeUri", static_cast<dart::common::Uri (*)(const dart::common::Uri &, const std::string &, bool)>(&dart::common::Uri::createFromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("createFromRelativeUri", static_cast<dart::common::Uri (*)(const dart::common::Uri &, const dart::common::Uri &, bool)>(&dart::common::Uri::createFromRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("getUri", static_cast<std::string (*)(const std::string &)>(&dart::common::Uri::getUri), (::boost::python::arg("_input")))
.def("getRelativeUri", static_cast<std::string (*)(const std::string &, const std::string &, bool)>(&dart::common::Uri::getRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("getRelativeUri", static_cast<std::string (*)(const dart::common::Uri &, const std::string &, bool)>(&dart::common::Uri::getRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("getRelativeUri", static_cast<std::string (*)(const dart::common::Uri &, const dart::common::Uri &, bool)>(&dart::common::Uri::getRelativeUri), (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict") = false))
.def("getPath", static_cast<std::string (dart::common::Uri::*)() const>(&dart::common::Uri::getPath))
.def("getFilesystemPath", static_cast<std::string (dart::common::Uri::*)() const>(&dart::common::Uri::getFilesystemPath))
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
