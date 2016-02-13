#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamicsL13INVALID_INDEXE()
{
::boost::python::scope().attr("INVALID_INDEX") = dart::dynamics::INVALID_INDEX;
}

/* footer */
