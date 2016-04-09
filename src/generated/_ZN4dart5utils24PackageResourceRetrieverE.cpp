#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart5utils24PackageResourceRetrieverE_docstring[] = R"CHIMERA_STRING( Retrieve local resources specified by package:// URIs by: (1) resolving 
 the package path and (2) passing the resolved URI to another
 
 base URI of every package that you wish to resolve using the
 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils24PackageResourceRetriever19addPackageDirectoryERKSsS3__docstring[] = R"CHIMERA_STRING( Specify the directory of a ROS package. In your URDF files, you may see
 strings with a package URI pattern such as:
 
 For us to successfully parse a URDF, we need to be told what the path
 to the package directory is, using addPackageDirectory(). In this case,
 suppose the path to the my_robot package is /path/to/my_robot. Then you
 should use addPackageDirectory("my_robot", "/path/to/my_robot").
 Altogether, this implies that a file named
 "/path/to/my_robot/meshes/mesh_for_my_robot.stl" exists. Whatever you
 specify as the package directory will end up replacing the 'package
 keyword' and 'package name' components of the URI string.
 You can call this method multiple times with the same 
 to
 provide multiple candidates for resolution. This is necessarry if your
 resources are split between the Catkin devel and source spaces. Multiple
 candidates will be tested in the same order in which they were added.
 This class supports arbitrary URIs for 
 as long as
 they are supported by the 
 passed to the constructor.
)CHIMERA_STRING";

constexpr char _ZN4dart5utils24PackageResourceRetriever6existsERKNS_6common3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils24PackageResourceRetriever8retrieveERKNS_6common3UriE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart5utils24PackageResourceRetrieverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::PackageResourceRetriever, std::shared_ptr<dart::utils::PackageResourceRetriever>, ::boost::python::bases<dart::common::ResourceRetriever > >("PackageResourceRetriever", _ZN4dart5utils24PackageResourceRetrieverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::PackageResourceRetriever * { return new dart::utils::PackageResourceRetriever(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::ResourceRetrieverPtr & _localRetriever) -> dart::utils::PackageResourceRetriever * { return new dart::utils::PackageResourceRetriever(_localRetriever); }, ::boost::python::default_call_policies(), (::boost::python::arg("_localRetriever"))))
.def("addPackageDirectory", [](dart::utils::PackageResourceRetriever *self, const std::string & _packageName, const std::string & _packageDirectory) -> void { return self->addPackageDirectory(_packageName, _packageDirectory); }, _ZN4dart5utils24PackageResourceRetriever19addPackageDirectoryERKSsS3__docstring, (::boost::python::arg("_packageName"), ::boost::python::arg("_packageDirectory")))
.def("exists", [](dart::utils::PackageResourceRetriever *self, const dart::common::Uri & _uri) -> bool { return self->exists(_uri); }, _ZN4dart5utils24PackageResourceRetriever6existsERKNS_6common3UriE_docstring, (::boost::python::arg("_uri")))
.def("retrieve", [](dart::utils::PackageResourceRetriever *self, const dart::common::Uri & _uri) -> dart::common::ResourcePtr { return self->retrieve(_uri); }, _ZN4dart5utils24PackageResourceRetriever8retrieveERKNS_6common3UriE_docstring, (::boost::python::arg("_uri")))
;
}

/* footer */
