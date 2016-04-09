#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common5EmptyE_docstring[] = R"CHIMERA_STRING( This is an empty structure which can be used as a template argument when a
 zero-cost placeholder is needed.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common5EmptyE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Empty, ::boost::noncopyable >("Empty", _ZN4dart6common5EmptyE_docstring, boost::python::no_init)
;
}

/* footer */
