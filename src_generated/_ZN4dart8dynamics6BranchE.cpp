#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6BranchE()
{
::boost::python::class_<dart::dynamics::Branch, ::boost::noncopyable, dart::dynamics::Branch *, ::boost::python::bases<dart::dynamics::Linkage > >("Branch", boost::python::no_init)
.def("create", static_cast<dart::dynamics::BranchPtr (*)(const dart::dynamics::Branch::Criteria &, const std::string &)>(&dart::dynamics::Branch::create), (::boost::python::arg("_criteria"), ::boost::python::arg("_name")))
.def("isStillBranch", static_cast<bool (dart::dynamics::Branch::*)() const>(&dart::dynamics::Branch::isStillBranch))
.staticmethod("create")
;
}

/* footer */
