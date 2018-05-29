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

void _ZN4dart6common6detail28DefaultGetEmbeddedPropertiesINS0_24EmbeddedPropertiesAspectINS_8dynamics10EntityNodeINS4_21TemplatedJacobianNodeINS4_17FixedJacobianNodeEEEEENS4_6detail20EntityNodePropertiesEEENS0_13MakeCloneableINS0_6Aspect10PropertiesESB_EEEERKT0_PKT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("DefaultGetEmbeddedProperties", [](const dart::common::EmbeddedPropertiesAspect<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, dart::dynamics::detail::EntityNodeProperties> * aspect) -> const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::EntityNodeProperties> & { return dart::common::detail::DefaultGetEmbeddedProperties<dart::common::EmbeddedPropertiesAspect<dart::dynamics::EntityNode<dart::dynamics::TemplatedJacobianNode<dart::dynamics::FixedJacobianNode> >, dart::dynamics::detail::EntityNodeProperties>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::EntityNodeProperties>>(aspect); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("aspect")));

}

/* footer */