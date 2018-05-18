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

void _ZN4dart6common6detail28DefaultSetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics14UniversalJointENS4_6detail30UniversalJointUniquePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEEvPT_RKT0_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("DefaultSetEmbeddedProperties", [](dart::common::EmbeddedPropertiesAspect<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties> * aspect, const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::UniversalJointUniqueProperties> & properties) -> void { return dart::common::detail::DefaultSetEmbeddedProperties<dart::common::EmbeddedPropertiesAspect<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::UniversalJointUniqueProperties>>(aspect, properties); }, (::boost::python::arg("aspect"), ::boost::python::arg("properties")));

}

/* footer */