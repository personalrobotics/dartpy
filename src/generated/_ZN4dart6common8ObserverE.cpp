#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common8ObserverE_docstring[] = R"CHIMERA_STRING( The Observer class should be inherited by any class that wants to respond
 in a customized way to the destruction of a Subject. Simply override the
 Observer::handleDestructionNotification() function to customize how your
 class responds to the destruction of a Subject.
 dart::sub_ptr is a templated smart pointer that will change itself into a
 nullptr when its Subject is destroyed. It offers one of the easiest ways to
 take advantage of the Subject/Observer pattern.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common8ObserverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Observer >("Observer", _ZN4dart6common8ObserverE_docstring, boost::python::no_init)
;
}

/* footer */
