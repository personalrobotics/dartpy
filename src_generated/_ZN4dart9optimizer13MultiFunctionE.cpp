#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9optimizer13MultiFunctionE()
{
::boost::python::class_<dart::optimizer::MultiFunction, ::boost::noncopyable >("MultiFunction", boost::python::no_init)
;
}

/* footer */
