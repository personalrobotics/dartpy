#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart3gui9SimWindowE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9SimWindow12timeSteppingEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9SimWindow12displayTimerEi_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9SimWindow4drawEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9SimWindow8keyboardEhii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9SimWindow8setWorldESt10shared_ptrINS_10simulation5WorldEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9SimWindow9saveWorldEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart3gui9SimWindow4plotERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart3gui9SimWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::SimWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::Win3D > >("SimWindow", _ZN4dart3gui9SimWindowE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::SimWindow * { return new dart::gui::SimWindow(); }, ::boost::python::default_call_policies()))
.def("timeStepping", [](dart::gui::SimWindow *self) -> void { return self->timeStepping(); }, _ZN4dart3gui9SimWindow12timeSteppingEv_docstring)
.def("drawWorld", [](const dart::gui::SimWindow *self) -> void { return self->drawWorld(); })
.def("drawSkeletons", [](const dart::gui::SimWindow *self) -> void { return self->drawSkeletons(); })
.def("drawSkels", [](dart::gui::SimWindow *self) -> void { return self->drawSkels(); })
.def("drawEntities", [](dart::gui::SimWindow *self) -> void { return self->drawEntities(); })
.def("displayTimer", [](dart::gui::SimWindow *self, int _val) -> void { return self->displayTimer(_val); }, _ZN4dart3gui9SimWindow12displayTimerEi_docstring, (::boost::python::arg("_val")))
.def("draw", [](dart::gui::SimWindow *self) -> void { return self->draw(); }, _ZN4dart3gui9SimWindow4drawEv_docstring)
.def("keyboard", [](dart::gui::SimWindow *self, unsigned char _key, int _x, int _y) -> void { return self->keyboard(_key, _x, _y); }, _ZN4dart3gui9SimWindow8keyboardEhii_docstring, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("setWorld", [](dart::gui::SimWindow *self, dart::simulation::WorldPtr _world) -> void { return self->setWorld(_world); }, _ZN4dart3gui9SimWindow8setWorldESt10shared_ptrINS_10simulation5WorldEE_docstring, (::boost::python::arg("_world")))
.def("saveWorld", [](dart::gui::SimWindow *self) -> void { return self->saveWorld(); }, _ZN4dart3gui9SimWindow9saveWorldEv_docstring)
.def("plot", [](dart::gui::SimWindow *self, Eigen::VectorXd & _data) -> void { return self->plot(_data); }, _ZN4dart3gui9SimWindow4plotERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_data")))
;
}

/* footer */
