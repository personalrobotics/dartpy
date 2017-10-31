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

/* postinclude */

void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS4_6detail13BodyNodeStateENS6_24BodyNodeAspectPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES8_EEEERKT0_PKT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("DefaultGetEmbeddedProperties", [](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> * aspect) -> const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties> & { return dart::common::detail::DefaultGetEmbeddedProperties<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>>(aspect); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("aspect")));

}

/* footer */
