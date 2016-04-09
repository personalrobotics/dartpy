#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart3gui5Win2DE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui5Win2D6resizeEii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui5Win2D6renderEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui5Win2D8keyboardEhii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui5Win2D5clickEiiii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui5Win2D4dragEii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui5Win2D6initGLEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui5Win2D4drawEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart3gui5Win2DE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::Win2D, ::boost::noncopyable, ::boost::python::bases<dart::gui::GlutWindow > >("Win2D", _ZN4dart3gui5Win2DE_docstring, boost::python::no_init)
.def("resize", [](dart::gui::Win2D *self, int _w, int _h) -> void { return self->resize(_w, _h); }, _ZN4dart3gui5Win2D6resizeEii_docstring, (::boost::python::arg("_w"), ::boost::python::arg("_h")))
.def("render", [](dart::gui::Win2D *self) -> void { return self->render(); }, _ZN4dart3gui5Win2D6renderEv_docstring)
.def("keyboard", [](dart::gui::Win2D *self, unsigned char _key, int _x, int _y) -> void { return self->keyboard(_key, _x, _y); }, _ZN4dart3gui5Win2D8keyboardEhii_docstring, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("click", [](dart::gui::Win2D *self, int _button, int _state, int _x, int _y) -> void { return self->click(_button, _state, _x, _y); }, _ZN4dart3gui5Win2D5clickEiiii_docstring, (::boost::python::arg("_button"), ::boost::python::arg("_state"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("drag", [](dart::gui::Win2D *self, int _x, int _y) -> void { return self->drag(_x, _y); }, _ZN4dart3gui5Win2D4dragEii_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("initGL", [](dart::gui::Win2D *self) -> void { return self->initGL(); }, _ZN4dart3gui5Win2D6initGLEv_docstring)
.def("draw", [](dart::gui::Win2D *self) -> void { return self->draw(); }, _ZN4dart3gui5Win2D4drawEv_docstring)
;
}

/* footer */
