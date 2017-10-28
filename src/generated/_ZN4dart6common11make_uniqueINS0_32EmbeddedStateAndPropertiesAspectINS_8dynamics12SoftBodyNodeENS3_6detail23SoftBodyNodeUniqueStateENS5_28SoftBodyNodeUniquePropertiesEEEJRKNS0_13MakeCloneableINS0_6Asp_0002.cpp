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

void _ZN4dart6common11make_uniqueINS0_32EmbeddedStateAndPropertiesAspectINS_8dynamics12SoftBodyNodeENS3_6detail23SoftBodyNodeUniqueStateENS5_28SoftBodyNodeUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect5StateES6_EERKNS9_INSA_10PropertiesES7_EEEEESt10unique_ptrIT_St14default_deleteISK_EEDpOT0_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("make_unique", [](const dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SoftBodyNodeUniqueState> & _arg0_, const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::SoftBodyNodeUniqueProperties> & _arg1_) -> std::unique_ptr<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties> > { return dart::common::make_unique<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, const dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SoftBodyNodeUniqueState> &, const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::SoftBodyNodeUniqueProperties> &>(_arg0_, _arg1_); }, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_")));

}

/* footer */
