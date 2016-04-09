#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common7SubjectE_docstring[] = R"CHIMERA_STRING( The Subject class is a base class for any object that wants to report when
 it gets destroyed. This is useful for complex frameworks in which it is
 difficult or impossible to know when an object or resource might destroyed
 by some other part of the code, or when special cleanup might be needed
 upon the destruction of an object. Simply by inheriting the Subject class,
 any class can have the destruction notification feature.
 Note that the Subject class should ALWAYS be virtually inherited. No other
 special considerations are needed when virtually inheriting the Subject
 class.
 dart::sub_ptr is a templated smart pointer that will change itself into a
 nullptr when its Subject is destroyed. It offers one of the easiest ways to
 take advantage of the Subject/Observer pattern.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common7SubjectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Subject >("Subject", _ZN4dart6common7SubjectE_docstring, boost::python::no_init)
;
}

/* footer */
