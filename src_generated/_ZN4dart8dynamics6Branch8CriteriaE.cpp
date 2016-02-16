#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6Branch8CriteriaE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Branch"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Branch::Criteria, ::boost::noncopyable >("Criteria", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *>((::boost::python::arg("_start"))))
.def("satisfy", static_cast<std::vector<dart::dynamics::BodyNode *> (dart::dynamics::Branch::Criteria::*)() const>(&dart::dynamics::Branch::Criteria::satisfy))
.def("convert", static_cast<dart::dynamics::Linkage::Criteria (dart::dynamics::Branch::Criteria::*)() const>(&dart::dynamics::Branch::Criteria::convert))
.def_readwrite("mStart", &dart::dynamics::Branch::Criteria::mStart)
;
}

/* footer */
