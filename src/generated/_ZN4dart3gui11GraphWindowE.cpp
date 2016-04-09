#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart3gui11GraphWindowE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui11GraphWindow4drawEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui11GraphWindow8keyboardEhii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart3gui11GraphWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::GraphWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::Win2D > >("GraphWindow", _ZN4dart3gui11GraphWindowE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::GraphWindow * { return new dart::gui::GraphWindow(); }, ::boost::python::default_call_policies()))
.def("draw", [](dart::gui::GraphWindow *self) -> void { return self->draw(); }, _ZN4dart3gui11GraphWindow4drawEv_docstring)
.def("keyboard", [](dart::gui::GraphWindow *self, unsigned char _key, int _x, int _y) -> void { return self->keyboard(_key, _x, _y); }, _ZN4dart3gui11GraphWindow8keyboardEhii_docstring, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("setData", [](dart::gui::GraphWindow *self, Eigen::VectorXd _data) -> void { return self->setData(_data); }, (::boost::python::arg("_data")))
;
}

/* footer */
