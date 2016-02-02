#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart11integration15EulerIntegratorE()
{
::boost::python::class_<dart::integration::EulerIntegrator, ::boost::noncopyable, ::boost::python::bases<dart::integration::Integrator > >("EulerIntegrator", boost::python::no_init)
.def(::boost::python::init<>())
.def("integrate", static_cast<void (dart::integration::EulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::EulerIntegrator::integrate), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integratePos", static_cast<void (dart::integration::EulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::EulerIntegrator::integratePos), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integrateVel", static_cast<void (dart::integration::EulerIntegrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::EulerIntegrator::integrateVel), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
;
}

/* footer */
