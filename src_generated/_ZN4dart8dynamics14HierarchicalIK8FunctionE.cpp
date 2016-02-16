#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics14HierarchicalIK8FunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("HierarchicalIK"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::HierarchicalIK::Function, ::boost::noncopyable >("Function", boost::python::no_init)
;
}

/* footer */
