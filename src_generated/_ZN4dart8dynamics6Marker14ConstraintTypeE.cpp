#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6Marker14ConstraintTypeE()
{
::boost::python::enum_<dart::dynamics::Marker::ConstraintType>("ConstraintType")
.value("NO", dart::dynamics::Marker::ConstraintType::NO)
.value("HARD", dart::dynamics::Marker::ConstraintType::HARD)
.value("SOFT", dart::dynamics::Marker::ConstraintType::SOFT)
;
}

/* footer */
