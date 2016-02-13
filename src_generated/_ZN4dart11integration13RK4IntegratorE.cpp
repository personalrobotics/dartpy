#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart11integration13RK4IntegratorE()
{
::boost::python::class_<dart::integration::RK4Integrator, ::boost::noncopyable, ::boost::python::bases<dart::integration::Integrator > >("RK4Integrator", boost::python::no_init)
.def("integrate", static_cast<void (dart::integration::RK4Integrator::*)(dart::integration::IntegrableSystem *, double)>(&dart::integration::RK4Integrator::integrate), (::boost::python::arg("_system"), ::boost::python::arg("_dt")))
;
}

/* footer */
