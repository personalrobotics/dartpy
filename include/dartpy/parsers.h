#ifndef DARTPY_PARSERS_H_
#define DARTPY_PARSERS_H_

#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
//#include <dart/optimizer/nlopt/ipopt.hpp> TODO: make this optional
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>
#include <dart/simulation/World.hpp>

namespace dart {
namespace utils {
namespace skel {

/// Read World from skel file
inline simulation::WorldPtr readWorld(
  const common::Uri& uri,
  const common::ResourceRetrieverPtr& retriever = nullptr)
{
  return SkelParser::readWorld(uri, retriever);
}

/// Read World from an xml-formatted string
inline simulation::WorldPtr readWorldXML(
  const std::string& xmlString,
  const common::Uri& baseUri = "",
  const common::ResourceRetrieverPtr& retriever = nullptr)
{
  return SkelParser::readWorldXML(xmlString, baseUri, retriever);
}

/// Read Skeleton from skel file
inline dynamics::SkeletonPtr readSkeleton(
  const common::Uri& uri,
  const common::ResourceRetrieverPtr& retriever = nullptr)
{
  return SkelParser::readSkeleton(uri, retriever);
}

} // namespace skel
} // namespace utils
} // namespace dart

#endif // DARTPY_PARSERS_H_
