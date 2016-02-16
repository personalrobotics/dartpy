#include <dartpy/pointers.h>
#include <dart/dart.h>


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
