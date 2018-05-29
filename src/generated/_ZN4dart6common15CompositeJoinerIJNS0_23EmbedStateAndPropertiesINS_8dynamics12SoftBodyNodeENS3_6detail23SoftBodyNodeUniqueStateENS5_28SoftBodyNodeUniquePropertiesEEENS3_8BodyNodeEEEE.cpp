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

void _ZN4dart6common15CompositeJoinerIJNS0_23EmbedStateAndPropertiesINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEENS3_8BodyNodeEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::CompositeJoiner<dart::common::EmbedStateAndProperties<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, dart::dynamics::BodyNode>, ::boost::noncopyable, ::boost::python::bases<dart::common::EmbedStateAndProperties<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, dart::dynamics::BodyNode > >("_ZN4dart6common15CompositeJoinerIJNS0_23EmbedStateAndPropertiesINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEENS3_8BodyNodeEEEE", boost::python::no_init)
;
}

/* footer */
