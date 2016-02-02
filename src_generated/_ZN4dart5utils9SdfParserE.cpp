#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils9SdfParserE()
{
::boost::python::class_<dart::utils::SdfParser, ::boost::noncopyable >("SdfParser", boost::python::no_init)
.def("readSdfFile", static_cast<dart::simulation::WorldPtr (*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SdfParser::readSdfFile), (::boost::python::arg("_fileUri"), ::boost::python::arg("_retriever")))
.def("readSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(const dart::common::Uri &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SdfParser::readSkeleton), (::boost::python::arg("_fileUri"), ::boost::python::arg("_retriever")))
.def("readWorld", static_cast<dart::simulation::WorldPtr (*)(tinyxml2::XMLElement *, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SdfParser::readWorld), (::boost::python::arg("_worldElement"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever")))
.def("readPhysics", static_cast<void (*)(tinyxml2::XMLElement *, dart::simulation::WorldPtr)>(&dart::utils::SdfParser::readPhysics), (::boost::python::arg("_physicsElement"), ::boost::python::arg("_world")))
.def("readSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(tinyxml2::XMLElement *, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SdfParser::readSkeleton), (::boost::python::arg("_skeletonElement"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever")))
.def("createPair", static_cast<bool (*)(dart::dynamics::SkeletonPtr, dart::dynamics::BodyNode *, const dart::utils::SdfParser::SDFJoint &, const dart::utils::SdfParser::SDFBodyNode &)>(&dart::utils::SdfParser::createPair), (::boost::python::arg("skeleton"), ::boost::python::arg("parent"), ::boost::python::arg("newJoint"), ::boost::python::arg("newBody")))
.def("makeSkeleton", static_cast<dart::dynamics::SkeletonPtr (*)(tinyxml2::XMLElement *, Eigen::Isometry3d &)>(&dart::utils::SdfParser::makeSkeleton), (::boost::python::arg("_skeletonElement"), ::boost::python::arg("skeletonFrame")))
.def("readAllBodyNodes", static_cast<dart::utils::SdfParser::BodyMap (*)(tinyxml2::XMLElement *, const std::string &, const dart::common::ResourceRetrieverPtr &, const Eigen::Isometry3d &)>(&dart::utils::SdfParser::readAllBodyNodes), (::boost::python::arg("_skeletonElement"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever"), ::boost::python::arg("skeletonFrame")))
.def("readBodyNode", static_cast<dart::utils::SdfParser::SDFBodyNode (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SdfParser::readBodyNode), (::boost::python::arg("_bodyNodeElement"), ::boost::python::arg("_skeletonFrame"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever")))
.def("readShape", static_cast<dart::dynamics::ShapePtr (*)(tinyxml2::XMLElement *, const std::string &, const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SdfParser::readShape), (::boost::python::arg("_shapelement"), ::boost::python::arg("_skelPath"), ::boost::python::arg("_retriever")))
.def("readAllJoints", static_cast<dart::utils::SdfParser::JointMap (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const dart::utils::SdfParser::BodyMap &)>(&dart::utils::SdfParser::readAllJoints), (::boost::python::arg("_skeletonElement"), ::boost::python::arg("skeletonFrame"), ::boost::python::arg("sdfBodyNodes")))
.def("readJoint", static_cast<dart::utils::SdfParser::SDFJoint (*)(tinyxml2::XMLElement *, const dart::utils::SdfParser::BodyMap &, const Eigen::Isometry3d &)>(&dart::utils::SdfParser::readJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_bodies"), ::boost::python::arg("_skeletonFrame")))
.def("readWeldJoint", static_cast<dart::dynamics::WeldJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readWeldJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("readRevoluteJoint", static_cast<dart::dynamics::RevoluteJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readRevoluteJoint), (::boost::python::arg("_revoluteJointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("readPrismaticJoint", static_cast<dart::dynamics::PrismaticJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readPrismaticJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("readScrewJoint", static_cast<dart::dynamics::ScrewJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readScrewJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("readUniversalJoint", static_cast<dart::dynamics::UniversalJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readUniversalJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("readBallJoint", static_cast<dart::dynamics::BallJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readBallJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("readTranslationalJoint", static_cast<dart::dynamics::TranslationalJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readTranslationalJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("readFreeJoint", static_cast<dart::dynamics::FreeJoint::Properties (*)(tinyxml2::XMLElement *, const Eigen::Isometry3d &, const std::string &)>(&dart::utils::SdfParser::readFreeJoint), (::boost::python::arg("_jointElement"), ::boost::python::arg("_parentModelFrame"), ::boost::python::arg("_name")))
.def("getResourceRetriever", static_cast<dart::common::ResourceRetrieverPtr (*)(const dart::common::ResourceRetrieverPtr &)>(&dart::utils::SdfParser::getResourceRetriever), (::boost::python::arg("_retriever")))
.staticmethod("createPair")
.staticmethod("getResourceRetriever")
.staticmethod("makeSkeleton")
.staticmethod("readAllBodyNodes")
.staticmethod("readAllJoints")
.staticmethod("readBallJoint")
.staticmethod("readBodyNode")
.staticmethod("readFreeJoint")
.staticmethod("readJoint")
.staticmethod("readPhysics")
.staticmethod("readPrismaticJoint")
.staticmethod("readRevoluteJoint")
.staticmethod("readScrewJoint")
.staticmethod("readSdfFile")
.staticmethod("readShape")
.staticmethod("readSkeleton")
.staticmethod("readTranslationalJoint")
.staticmethod("readUniversalJoint")
.staticmethod("readWeldJoint")
.staticmethod("readWorld")
;
}

/* footer */
