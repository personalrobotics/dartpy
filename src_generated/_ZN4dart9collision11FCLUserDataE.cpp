#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision11FCLUserDataE()
{
::boost::python::class_<dart::collision::FCLUserData, ::boost::noncopyable >("FCLUserData", boost::python::no_init)
.def(::boost::python::init<dart::collision::FCLCollisionNode *, dart::dynamics::BodyNode *, dart::dynamics::Shape *>((::boost::python::arg("_fclCollNode"), ::boost::python::arg("_bodyNode"), ::boost::python::arg("_shape"))))
.def_readwrite("fclCollNode", &dart::collision::FCLUserData::fclCollNode)
.def_readwrite("bodyNode", &dart::collision::FCLUserData::bodyNode)
.def_readwrite("shape", &dart::collision::FCLUserData::shape)
;
}

/* footer */