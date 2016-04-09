#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart3gui13SoftSimWindowE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui13SoftSimWindow8keyboardEhii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart3gui13SoftSimWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::SoftSimWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::SimWindow > >("SoftSimWindow", _ZN4dart3gui13SoftSimWindowE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::SoftSimWindow * { return new dart::gui::SoftSimWindow(); }, ::boost::python::default_call_policies()))
.def("keyboard", [](dart::gui::SoftSimWindow *self, unsigned char key, int x, int y) -> void { return self->keyboard(key, x, y); }, _ZN4dart3gui13SoftSimWindow8keyboardEhii_docstring, (::boost::python::arg("key"), ::boost::python::arg("x"), ::boost::python::arg("y")))
;
}

/* footer */
