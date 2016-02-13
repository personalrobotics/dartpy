#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart11integration10IntegratorE()
{
::boost::python::class_<dart::integration::Integrator, ::boost::noncopyable >("Integrator", boost::python::no_init)
.def("integrate", static_cast<void (dart::integration::Integrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::Integrator::integrate), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integratePos", static_cast<void (dart::integration::Integrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::Integrator::integratePos), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
.def("integrateVel", static_cast<void (dart::integration::Integrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::Integrator::integrateVel), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
;
}

/* footer */
