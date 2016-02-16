#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart11integration15EulerIntegratorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("integration"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::integration::EulerIntegrator, ::boost::noncopyable, ::boost::python::bases<dart::integration::Integrator > >("EulerIntegrator", boost::python::no_init)
.def(::boost::python::init<>())
.def("integrate", static_cast<void (dart::integration::EulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::EulerIntegrator::integrate), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integratePos", static_cast<void (dart::integration::EulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::EulerIntegrator::integratePos), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integrateVel", static_cast<void (dart::integration::EulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::EulerIntegrator::integrateVel), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
;
}

/* footer */
