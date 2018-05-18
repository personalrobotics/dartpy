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

void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics11EndEffectorENS4_6detail21EndEffectorPropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesES7_EEEERKT0_PKT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("DefaultGetEmbeddedProperties", [](const dart::common::EmbeddedPropertiesAspect<dart::dynamics::EndEffector, dart::dynamics::detail::EndEffectorProperties> * aspect) -> const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::EndEffectorProperties> & { return dart::common::detail::DefaultGetEmbeddedProperties<dart::common::EmbeddedPropertiesAspect<dart::dynamics::EndEffector, dart::dynamics::detail::EndEffectorProperties>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::EndEffectorProperties>>(aspect); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("aspect")));

}

/* footer */
