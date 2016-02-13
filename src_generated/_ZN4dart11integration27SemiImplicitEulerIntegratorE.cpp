#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart11integration27SemiImplicitEulerIntegratorE()
{
::boost::python::class_<dart::integration::SemiImplicitEulerIntegrator, ::boost::noncopyable, ::boost::python::bases<dart::integration::Integrator > >("SemiImplicitEulerIntegrator", boost::python::no_init)
.def(::boost::python::init<>())
.def("integrate", static_cast<void (dart::integration::SemiImplicitEulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::SemiImplicitEulerIntegrator::integrate), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integratePos", static_cast<void (dart::integration::SemiImplicitEulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::SemiImplicitEulerIntegrator::integratePos), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integrateVel", static_cast<void (dart::integration::SemiImplicitEulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::SemiImplicitEulerIntegrator::integrateVel), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
;
}

/* footer */
