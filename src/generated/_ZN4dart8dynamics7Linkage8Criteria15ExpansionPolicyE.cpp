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

void _ZN4dart8dynamics7Linkage8Criteria15ExpansionPolicyE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Linkage").attr("Criteria"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::Linkage::Criteria::ExpansionPolicy>("ExpansionPolicy")
.value("INCLUDE", dart::dynamics::Linkage::Criteria::ExpansionPolicy::INCLUDE)
.value("EXCLUDE", dart::dynamics::Linkage::Criteria::ExpansionPolicy::EXCLUDE)
.value("DOWNSTREAM", dart::dynamics::Linkage::Criteria::ExpansionPolicy::DOWNSTREAM)
.value("UPSTREAM", dart::dynamics::Linkage::Criteria::ExpansionPolicy::UPSTREAM)
;
}

/* footer */
