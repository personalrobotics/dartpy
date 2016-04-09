#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9collision7ContactE_docstring[] = R"CHIMERA_STRING( Contact information
)CHIMERA_STRING";


} // namespace

void _ZN4dart9collision7ContactE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::Contact, ::boost::noncopyable >("Contact", _ZN4dart9collision7ContactE_docstring, boost::python::no_init)
.def_readwrite("point", &dart::collision::Contact::point)
.def_readwrite("normal", &dart::collision::Contact::normal)
.def_readwrite("force", &dart::collision::Contact::force)
.def_readwrite("collisionObject1", &dart::collision::Contact::collisionObject1)
.def_readwrite("collisionObject2", &dart::collision::Contact::collisionObject2)
.def_readwrite("penetrationDepth", &dart::collision::Contact::penetrationDepth)
.def_readwrite("triID1", &dart::collision::Contact::triID1)
.def_readwrite("triID2", &dart::collision::Contact::triID2)
.def_readwrite("userData", &dart::collision::Contact::userData)
;
}

/* footer */
