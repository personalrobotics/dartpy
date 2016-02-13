#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common5EmptyE()
{
::boost::python::class_<dart::common::Empty, ::boost::noncopyable >("Empty", boost::python::no_init)
;
}

/* footer */
