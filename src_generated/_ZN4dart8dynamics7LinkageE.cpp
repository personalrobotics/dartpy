#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics7LinkageE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Linkage, ::boost::noncopyable, dart::dynamics::LinkagePtr, ::boost::python::bases<dart::dynamics::ReferentialSkeleton > >("Linkage", boost::python::no_init)
.def("create", static_cast<dart::dynamics::LinkagePtr (*)(const dart::dynamics::Linkage::Criteria &, const std::string &)>(&dart::dynamics::Linkage::create), (::boost::python::arg("_criteria"), ::boost::python::arg("_name") = "Linkage"))
.def("isAssembled", static_cast<bool (dart::dynamics::Linkage::*)() const>(&dart::dynamics::Linkage::isAssembled))
.def("reassemble", static_cast<void (dart::dynamics::Linkage::*)()>(&dart::dynamics::Linkage::reassemble))
.def("satisfyCriteria", static_cast<void (dart::dynamics::Linkage::*)()>(&dart::dynamics::Linkage::satisfyCriteria))
.staticmethod("create")
;
}

/* footer */
