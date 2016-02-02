#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics7Linkage8CriteriaE()
{
::boost::python::class_<dart::dynamics::Linkage::Criteria >("Criteria", boost::python::no_init)
.def("satisfy", static_cast<std::vector<dart::dynamics::BodyNode *> (dart::dynamics::Linkage::Criteria::*)() const>(&dart::dynamics::Linkage::Criteria::satisfy))
.def_readwrite("mStart", &dart::dynamics::Linkage::Criteria::mStart)
.def_readwrite("mTargets", &dart::dynamics::Linkage::Criteria::mTargets)
.def_readwrite("mTerminals", &dart::dynamics::Linkage::Criteria::mTerminals)
;
}

/* footer */
