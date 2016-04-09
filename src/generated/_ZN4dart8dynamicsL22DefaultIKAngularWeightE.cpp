#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamicsL22DefaultIKAngularWeightE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::scope().attr("DefaultIKAngularWeight") = dart::dynamics::DefaultIKAngularWeight;
}

/* footer */
