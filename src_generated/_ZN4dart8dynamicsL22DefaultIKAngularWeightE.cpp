#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamicsL22DefaultIKAngularWeightE()
{
::boost::python::scope().attr("DefaultIKAngularWeight") = dart::dynamics::DefaultIKAngularWeight;
}

/* footer */
