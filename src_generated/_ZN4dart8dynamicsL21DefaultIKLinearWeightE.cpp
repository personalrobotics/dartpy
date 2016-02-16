#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamicsL21DefaultIKLinearWeightE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::scope().attr("DefaultIKLinearWeight") = dart::dynamics::DefaultIKLinearWeight;
}

/* footer */
