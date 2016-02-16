#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics4Node5StateE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Node"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Node::State, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::dynamics::Node::State> > >("State", boost::python::no_init)
;
}

/* footer */
