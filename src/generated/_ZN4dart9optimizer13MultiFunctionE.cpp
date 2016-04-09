#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer13MultiFunctionE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer13MultiFunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::MultiFunction, ::boost::noncopyable >("MultiFunction", _ZN4dart9optimizer13MultiFunctionE_docstring, boost::python::no_init)
;
}

/* footer */
