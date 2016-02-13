#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4mathL2CRE()
{
::boost::python::scope().attr("CR") = dart::math::CR;
}

/* footer */
