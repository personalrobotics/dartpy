#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart11integration15EulerIntegratorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("integration"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::integration::EulerIntegrator, ::boost::noncopyable, ::boost::python::bases<dart::integration::Integrator > >("EulerIntegrator", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::integration::EulerIntegrator * { return new dart::integration::EulerIntegrator(); }, ::boost::python::default_call_policies()))
.def("integrate", [](dart::integration::EulerIntegrator *self, dart::integration::IntegrableSystem * _system, double _dt) -> void { return self->integrate(_system, _dt); }, (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integratePos", [](dart::integration::EulerIntegrator *self, dart::integration::IntegrableSystem * _system, double _dt) -> void { return self->integratePos(_system, _dt); }, (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integrateVel", [](dart::integration::EulerIntegrator *self, dart::integration::IntegrableSystem * _system, double _dt) -> void { return self->integrateVel(_system, _dt); }, (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
;
}

/* footer */
