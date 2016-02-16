#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common5Addon5StateE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("Addon"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Addon::State, ::boost::noncopyable, ::boost::python::bases<dart::common::Extensible<dart::common::Addon::State> > >("State", boost::python::no_init)
;
}

/* footer */
