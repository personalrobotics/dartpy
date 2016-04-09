#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common3UriE_docstring[] = R"CHIMERA_STRING( The Uri struct provides URI parsing and merging functionality based on RFC
 3986.
 We have Uri as a struct rather than class to expose member variables. Many
 ResourceRetreiver classes rewrite URIs to other types of URIs (e.g, resolve
 'package://' URIs to 'file://' URIs), which is easier to implement if you
 have direct access to the URI components.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri5clearEv_docstring[] = R"CHIMERA_STRING( Clear the URI by reset()ing all components.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri10fromStringERKSs_docstring[] = R"CHIMERA_STRING( Parse a URI from a string; return success. All the components will be
 cleared on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri8fromPathERKSs_docstring[] = R"CHIMERA_STRING( Parse a local path (i.e. URI with no schema) from a string; return
 success. Note that the input path should be absolute path. All the
 components will be cleared on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri16fromStringOrPathERKSs_docstring[] = R"CHIMERA_STRING( Parse a URI or local path (i.e. URI with no schema) from a string; return
 success. We assume that any string without a scheme is a path. All the
 components will be cleared on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri15fromRelativeUriERKSsS3_b_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return success. All the components will
 be cleared on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri15fromRelativeUriEPKcS3_b_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return success. All the components will
 be cleared on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri15fromRelativeUriERKS1_RKSsb_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return success. All the components will
 be cleared on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri15fromRelativeUriERKS1_PKcb_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return success. All the components will
 be cleared on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri15fromRelativeUriERKS1_S3_b_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return success. All the components will
 be cleared on failure.
)CHIMERA_STRING";

constexpr char _ZNK4dart6common3Uri8toStringEv_docstring[] = R"CHIMERA_STRING( Combine the parts of the URI into a string.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri16createFromStringERKSs_docstring[] = R"CHIMERA_STRING( Create URI from a string; return an empty URI on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri14createFromPathERKSs_docstring[] = R"CHIMERA_STRING( Create file URI from a string; return an empty URI on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri22createFromStringOrPathERKSs_docstring[] = R"CHIMERA_STRING( Create general URI or file URI from a string; return an empty URI on
 failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri21createFromRelativeUriERKSsS3_b_docstring[] = R"CHIMERA_STRING( Create URI resolving a relative path reference; return an empty URI on
 failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri21createFromRelativeUriERKS1_RKSsb_docstring[] = R"CHIMERA_STRING( Create URI resolving a relative path reference; return an empty URI on
 failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri21createFromRelativeUriERKS1_S3_b_docstring[] = R"CHIMERA_STRING( Create URI resolving a relative path reference; return an empty URI on
 failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri6getUriERKSs_docstring[] = R"CHIMERA_STRING( Parse a URI from a string; return an empty string on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri14getRelativeUriERKSsS3_b_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return an empty string on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri14getRelativeUriERKS1_RKSsb_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return an empty string on failure.
)CHIMERA_STRING";

constexpr char _ZN4dart6common3Uri14getRelativeUriERKS1_S3_b_docstring[] = R"CHIMERA_STRING( Resolve a relative path reference; return an empty string on failure.
)CHIMERA_STRING";

constexpr char _ZNK4dart6common3Uri7getPathEv_docstring[] = R"CHIMERA_STRING( Get the path component of the URI as a string.
)CHIMERA_STRING";

constexpr char _ZNK4dart6common3Uri17getFilesystemPathEv_docstring[] = R"CHIMERA_STRING( Get the path in the local filesystem as a string. You should use this
 function rather than getPath() if you are trying to access a local file.
 Note that this function is identical to getPath() for Unix systems, but
 differ by the leading '/' on Windows.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common3UriE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Uri >("Uri", _ZN4dart6common3UriE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Uri * { return new dart::common::Uri(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _input) -> dart::common::Uri * { return new dart::common::Uri(_input); }, ::boost::python::default_call_policies(), (::boost::python::arg("_input"))))
.def("__init__", ::boost::python::make_constructor([](const char * _input) -> dart::common::Uri * { return new dart::common::Uri(_input); }, ::boost::python::default_call_policies(), (::boost::python::arg("_input"))))
.def("clear", [](dart::common::Uri *self) -> void { return self->clear(); }, _ZN4dart6common3Uri5clearEv_docstring)
.def("fromString", [](dart::common::Uri *self, const std::string & _input) -> bool { return self->fromString(_input); }, _ZN4dart6common3Uri10fromStringERKSs_docstring, (::boost::python::arg("_input")))
.def("fromPath", [](dart::common::Uri *self, const std::string & _path) -> bool { return self->fromPath(_path); }, _ZN4dart6common3Uri8fromPathERKSs_docstring, (::boost::python::arg("_path")))
.def("fromStringOrPath", [](dart::common::Uri *self, const std::string & _input) -> bool { return self->fromStringOrPath(_input); }, _ZN4dart6common3Uri16fromStringOrPathERKSs_docstring, (::boost::python::arg("_input")))
.def("fromRelativeUri", [](dart::common::Uri *self, const std::string & _base, const std::string & _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, _ZN4dart6common3Uri15fromRelativeUriERKSsS3_b_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const std::string & _base, const std::string & _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, _ZN4dart6common3Uri15fromRelativeUriERKSsS3_b_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const char * _base, const char * _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, _ZN4dart6common3Uri15fromRelativeUriEPKcS3_b_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const char * _base, const char * _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, _ZN4dart6common3Uri15fromRelativeUriEPKcS3_b_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const std::string & _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, _ZN4dart6common3Uri15fromRelativeUriERKS1_RKSsb_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const std::string & _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, _ZN4dart6common3Uri15fromRelativeUriERKS1_RKSsb_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const char * _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, _ZN4dart6common3Uri15fromRelativeUriERKS1_PKcb_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const char * _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, _ZN4dart6common3Uri15fromRelativeUriERKS1_PKcb_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const dart::common::Uri & _relative) -> bool { return self->fromRelativeUri(_base, _relative); }, _ZN4dart6common3Uri15fromRelativeUriERKS1_S3_b_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative")))
.def("fromRelativeUri", [](dart::common::Uri *self, const dart::common::Uri & _base, const dart::common::Uri & _relative, bool _strict) -> bool { return self->fromRelativeUri(_base, _relative, _strict); }, _ZN4dart6common3Uri15fromRelativeUriERKS1_S3_b_docstring, (::boost::python::arg("_base"), ::boost::python::arg("_relative"), ::boost::python::arg("_strict")))
.def("toString", [](const dart::common::Uri *self) -> std::string { return self->toString(); }, _ZNK4dart6common3Uri8toStringEv_docstring)
.def("getPath", [](const dart::common::Uri *self) -> std::string { return self->getPath(); }, _ZNK4dart6common3Uri7getPathEv_docstring)
.def("getFilesystemPath", [](const dart::common::Uri *self) -> std::string { return self->getFilesystemPath(); }, _ZNK4dart6common3Uri17getFilesystemPathEv_docstring)
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
