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

void _ZN4dart6common11make_uniqueINS0_24EmbeddedPropertiesAspectINS_8dynamics10EulerJointENS3_6detail26EulerJointUniquePropertiesEEEJRKNS0_13MakeCloneableINS0_6Aspect10PropertiesES6_EEEEESt10unique_ptrIT_St14default_deleteISF_EEDpOT0_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("make_unique", [](const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::EulerJointUniqueProperties> & _arg0_) -> std::unique_ptr<dart::common::EmbeddedPropertiesAspect<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties> > { return dart::common::make_unique<dart::common::EmbeddedPropertiesAspect<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties>, const dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::EulerJointUniqueProperties> &>(_arg0_); }, (::boost::python::arg("_arg0_")));

}

/* footer */
