#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail27BasicNodeManagerForBodyNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::BasicNodeManagerForBodyNode, ::boost::noncopyable >("BasicNodeManagerForBodyNode", boost::python::no_init)
.def(::boost::python::init<>())
;
}

/* footer */
