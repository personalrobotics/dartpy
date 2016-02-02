#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8planning3RRT10StepResultE()
{
::boost::python::enum_<dart::planning::RRT::StepResult>("")
.value("STEP_COLLISION", dart::planning::RRT::StepResult::STEP_COLLISION)
.value("STEP_REACHED", dart::planning::RRT::StepResult::STEP_REACHED)
.value("STEP_PROGRESS", dart::planning::RRT::StepResult::STEP_PROGRESS)
;
}

/* footer */
