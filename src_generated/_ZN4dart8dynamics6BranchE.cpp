#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6BranchE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Branch, ::boost::noncopyable, dart::dynamics::BranchPtr, ::boost::python::bases<dart::dynamics::Linkage > >("Branch", boost::python::no_init)
.def("create", static_cast<dart::dynamics::BranchPtr (*)(const dart::dynamics::Branch::Criteria &, const std::string &)>(&dart::dynamics::Branch::create), (::boost::python::arg("_criteria"), ::boost::python::arg("_name") = "Branch"))
.def("isStillBranch", static_cast<bool (dart::dynamics::Branch::*)() const>(&dart::dynamics::Branch::isStillBranch))
.staticmethod("create")
;
}

/* footer */
