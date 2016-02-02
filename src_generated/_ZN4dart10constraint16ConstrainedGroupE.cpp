#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint16ConstrainedGroupE()
{
::boost::python::class_<dart::constraint::ConstrainedGroup, ::boost::noncopyable >("ConstrainedGroup", boost::python::no_init)
.def(::boost::python::init<>())
.def("getNumConstraints", static_cast<std::size_t (dart::constraint::ConstrainedGroup::*)() const>(&dart::constraint::ConstrainedGroup::getNumConstraints))
.def("getConstraint", static_cast<dart::constraint::ConstraintBasePtr (dart::constraint::ConstrainedGroup::*)(std::size_t) const>(&dart::constraint::ConstrainedGroup::getConstraint), (::boost::python::arg("_index")))
.def("removeAllConstraints", static_cast<void (dart::constraint::ConstrainedGroup::*)()>(&dart::constraint::ConstrainedGroup::removeAllConstraints))
.def("getTotalDimension", static_cast<std::size_t (dart::constraint::ConstrainedGroup::*)() const>(&dart::constraint::ConstrainedGroup::getTotalDimension))
;
}

/* footer */
