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

void _ZN4dart9collision20FCLCollisionDetector29ContactPointComputationMethodE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision").attr("FCLCollisionDetector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::collision::FCLCollisionDetector::ContactPointComputationMethod>("ContactPointComputationMethod")
.value("FCL", dart::collision::FCLCollisionDetector::ContactPointComputationMethod::FCL)
.value("DART", dart::collision::FCLCollisionDetector::ContactPointComputationMethod::DART)
;
}

/* footer */
