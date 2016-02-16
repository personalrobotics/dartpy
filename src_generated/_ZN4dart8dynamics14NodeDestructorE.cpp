#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics14NodeDestructorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::NodeDestructor, ::boost::noncopyable >("NodeDestructor", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Node *>((::boost::python::arg("_node"))))
.def("getNode", static_cast<dart::dynamics::Node *(dart::dynamics::NodeDestructor::*)() const>(&dart::dynamics::NodeDestructor::getNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::NodePtr> >())
;
}

/* footer */
