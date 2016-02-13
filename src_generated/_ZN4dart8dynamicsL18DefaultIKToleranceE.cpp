#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamicsL18DefaultIKToleranceE()
{
::boost::python::scope().attr("DefaultIKTolerance") = dart::dynamics::DefaultIKTolerance;
}

/* footer */
