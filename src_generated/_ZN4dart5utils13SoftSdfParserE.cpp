#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils13SoftSdfParserE()
{
::boost::python::class_<dart::utils::SoftSdfParser, ::boost::noncopyable, ::boost::python::bases<dart::utils::SdfParser > >("SoftSdfParser", boost::python::no_init)
.def("readSoftSdfFile", static_cast<dart::simulation::WorldPtr (*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SoftSdfParser::readSoftSdfFile), (::boost::python::arg("_fileUri"), ::boost::python::arg("_retriever")))
.def("readSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SoftSdfParser::readSkeleton), (::boost::python::arg("_fileName"), ::boost::python::arg("_retriever")))
.def("createSoftPair", static_cast<bool (*)(dart::dynamics::SkeletonPtr, dart::dynamics::BodyNode *, const dart::utils::SdfParser::SDFJoint &, const dart::utils::SdfParser::SDFBodyNode &)>(&dart::utils::SoftSdfParser::createSoftPair), (::boost::python::arg("skeleton"), ::boost::python::arg("parent"), ::boost::python::arg("newJoint"), ::boost::python::arg("newBody")))
.def("readWorld", static_cast<dart::simulation::WorldPtr (*)(tinyxml2::XMLElement *, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SoftSdfParser::readWorld), (::boost::python::arg("_worldElement"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever")))
.def("readSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(tinyxml2::XMLElement *, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SoftSdfParser::readSkeleton), (::boost::python::arg("_skeletonElement"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever")))
.def("readSoftBodyNode", static_cast<dart::utils::SdfParser::SDFBodyNode (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SoftSdfParser::readSoftBodyNode), (::boost::python::arg("_softBodyNodeElement"), ::boost::python::arg("_skeletonFrame"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever")))
.staticmethod("createSoftPair")
.staticmethod("readSkeleton")
.staticmethod("readSoftBodyNode")
.staticmethod("readSoftSdfFile")
.staticmethod("readWorld")
;
}

/* footer */
