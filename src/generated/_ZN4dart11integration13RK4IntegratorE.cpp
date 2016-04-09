#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart11integration13RK4IntegratorE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart11integration13RK4Integrator9integrateEPNS0_16IntegrableSystemEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart11integration13RK4IntegratorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("integration"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::integration::RK4Integrator, ::boost::noncopyable, ::boost::python::bases<dart::integration::Integrator > >("RK4Integrator", _ZN4dart11integration13RK4IntegratorE_docstring, boost::python::no_init)
.def("integrate", [](dart::integration::RK4Integrator *self, dart::integration::IntegrableSystem * _system, double _dt) -> void { return self->integrate(_system, _dt); }, _ZN4dart11integration13RK4Integrator9integrateEPNS0_16IntegrableSystemEd_docstring, (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
;
}

/* footer */
