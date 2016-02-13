#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics4Node5StateE()
{
::boost::python::class_<dart::dynamics::Node::State, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::dynamics::Node::State> > >("State", boost::python::no_init)
;
}

/* footer */
