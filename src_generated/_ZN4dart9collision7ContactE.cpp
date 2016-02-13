#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision7ContactE()
{
::boost::python::class_<dart::collision::Contact, ::boost::noncopyable >("Contact", boost::python::no_init)
.def_readwrite("point", &dart::collision::Contact::point)
.def_readwrite("normal", &dart::collision::Contact::normal)
.def_readwrite("force", &dart::collision::Contact::force)
.def_readwrite("bodyNode1", &dart::collision::Contact::bodyNode1)
.def_readwrite("bodyNode2", &dart::collision::Contact::bodyNode2)
.def_readwrite("shape1", &dart::collision::Contact::shape1)
.def_readwrite("shape2", &dart::collision::Contact::shape2)
.def_readwrite("penetrationDepth", &dart::collision::Contact::penetrationDepth)
.def_readwrite("triID1", &dart::collision::Contact::triID1)
.def_readwrite("triID2", &dart::collision::Contact::triID2)
.def_readwrite("userData", &dart::collision::Contact::userData)
;
}

/* footer */
