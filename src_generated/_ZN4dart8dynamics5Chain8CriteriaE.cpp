#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics5Chain8CriteriaE()
{
::boost::python::class_<dart::dynamics::Chain::Criteria, ::boost::noncopyable >("Criteria", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::BodyNode *, dart::dynamics::BodyNode *, bool>((::boost::python::arg("_start"), ::boost::python::arg("_target"), ::boost::python::arg("_includeBoth") = false)))
.def("satisfy", static_cast<std::vector<dart::dynamics::BodyNode *> (dart::dynamics::Chain::Criteria::*)() const>(&dart::dynamics::Chain::Criteria::satisfy))
.def("convert", static_cast<dart::dynamics::Linkage::Criteria (dart::dynamics::Chain::Criteria::*)() const>(&dart::dynamics::Chain::Criteria::convert))
.def_readwrite("mStart", &dart::dynamics::Chain::Criteria::mStart)
.def_readwrite("mTarget", &dart::dynamics::Chain::Criteria::mTarget)
.def_readwrite("mIncludeBoth", &dart::dynamics::Chain::Criteria::mIncludeBoth)
;
}

/* footer */