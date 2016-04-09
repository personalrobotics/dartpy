#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart5utils10DartLoaderE_docstring[] = R"CHIMERA_STRING( 
 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils10DartLoader19addPackageDirectoryERKSsS3__docstring[] = R"CHIMERA_STRING( Specify the directory of a ROS package. In your URDF files, you may see
 strings with a package URI pattern such as:
 
 For us to successfully parse a URDF, we need to be told what the path
 to the package directory is, using addPackageDirectory(). In this case,
 suppose the path to the my_robot package is /path/to/my_robot. Then you
 should use addPackageDirectory("my_robot", "/path/to/my_robot").
 Altogether, this implies that a file named
 "/path/to/my_robot/meshes/mesh_for_my_robot.stl" exists. Whatever you
 specify as the package directory will end up replacing the 'package
 keyword' and 'package name' components of the URI string.
)CHIMERA_STRING";

constexpr char _ZN4dart5utils10DartLoader13parseSkeletonERKNS_6common3UriERKSt10shared_ptrINS2_17ResourceRetrieverEE_docstring[] = R"CHIMERA_STRING( Parse a file to produce a Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart5utils10DartLoader19parseSkeletonStringERKSsRKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE_docstring[] = R"CHIMERA_STRING( Parse a text string to produce a Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart5utils10DartLoader10parseWorldERKNS_6common3UriERKSt10shared_ptrINS2_17ResourceRetrieverEE_docstring[] = R"CHIMERA_STRING( Parse a file to produce a World
)CHIMERA_STRING";

constexpr char _ZN4dart5utils10DartLoader16parseWorldStringERKSsRKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE_docstring[] = R"CHIMERA_STRING( Parse a text string to produce a World
)CHIMERA_STRING";


} // namespace

void _ZN4dart5utils10DartLoaderE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::DartLoader, ::boost::noncopyable >("DartLoader", _ZN4dart5utils10DartLoaderE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::utils::DartLoader * { return new dart::utils::DartLoader(); }, ::boost::python::default_call_policies()))
.def("addPackageDirectory", [](dart::utils::DartLoader *self, const std::string & _packageName, const std::string & _packageDirectory) -> void { return self->addPackageDirectory(_packageName, _packageDirectory); }, _ZN4dart5utils10DartLoader19addPackageDirectoryERKSsS3__docstring, (::boost::python::arg("_packageName"), ::boost::python::arg("_packageDirectory")))
.def("parseSkeleton", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri) -> dart::dynamics::SkeletonPtr { return self->parseSkeleton(_uri); }, _ZN4dart5utils10DartLoader13parseSkeletonERKNS_6common3UriERKSt10shared_ptrINS2_17ResourceRetrieverEE_docstring, (::boost::python::arg("_uri")))
.def("parseSkeleton", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::SkeletonPtr { return self->parseSkeleton(_uri, _resourceRetriever); }, _ZN4dart5utils10DartLoader13parseSkeletonERKNS_6common3UriERKSt10shared_ptrINS2_17ResourceRetrieverEE_docstring, (::boost::python::arg("_uri"), ::boost::python::arg("_resourceRetriever")))
.def("parseSkeletonString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri) -> dart::dynamics::SkeletonPtr { return self->parseSkeletonString(_urdfString, _baseUri); }, _ZN4dart5utils10DartLoader19parseSkeletonStringERKSsRKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE_docstring, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri")))
.def("parseSkeletonString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::dynamics::SkeletonPtr { return self->parseSkeletonString(_urdfString, _baseUri, _resourceRetriever); }, _ZN4dart5utils10DartLoader19parseSkeletonStringERKSsRKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE_docstring, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri"), ::boost::python::arg("_resourceRetriever")))
.def("parseWorld", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri) -> dart::simulation::WorldPtr { return self->parseWorld(_uri); }, _ZN4dart5utils10DartLoader10parseWorldERKNS_6common3UriERKSt10shared_ptrINS2_17ResourceRetrieverEE_docstring, (::boost::python::arg("_uri")))
.def("parseWorld", [](dart::utils::DartLoader *self, const dart::common::Uri & _uri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::simulation::WorldPtr { return self->parseWorld(_uri, _resourceRetriever); }, _ZN4dart5utils10DartLoader10parseWorldERKNS_6common3UriERKSt10shared_ptrINS2_17ResourceRetrieverEE_docstring, (::boost::python::arg("_uri"), ::boost::python::arg("_resourceRetriever")))
.def("parseWorldString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri) -> dart::simulation::WorldPtr { return self->parseWorldString(_urdfString, _baseUri); }, _ZN4dart5utils10DartLoader16parseWorldStringERKSsRKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE_docstring, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri")))
.def("parseWorldString", [](dart::utils::DartLoader *self, const std::string & _urdfString, const dart::common::Uri & _baseUri, const dart::common::ResourceRetrieverPtr & _resourceRetriever) -> dart::simulation::WorldPtr { return self->parseWorldString(_urdfString, _baseUri, _resourceRetriever); }, _ZN4dart5utils10DartLoader16parseWorldStringERKSsRKNS_6common3UriERKSt10shared_ptrINS4_17ResourceRetrieverEE_docstring, (::boost::python::arg("_urdfString"), ::boost::python::arg("_baseUri"), ::boost::python::arg("_resourceRetriever")))
;
}

/* footer */
