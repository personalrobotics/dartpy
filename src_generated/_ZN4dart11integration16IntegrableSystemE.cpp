#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart11integration16IntegrableSystemE()
{
::boost::python::object parent_object(::boost::python::scope().attr("integration"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::integration::IntegrableSystem, ::boost::noncopyable >("IntegrableSystem", boost::python::no_init)
.def("setConfigs", static_cast<void (dart::integration::IntegrableSystem::*)(const Eigen::VectorXd &)>(&dart::integration::IntegrableSystem::setConfigs), (::boost::python::arg("_configs")))
.def("setGenVels", static_cast<void (dart::integration::IntegrableSystem::*)(const Eigen::VectorXd &)>(&dart::integration::IntegrableSystem::setGenVels), (::boost::python::arg("_genVels")))
.def("getConfigs", static_cast<Eigen::VectorXd (dart::integration::IntegrableSystem::*)() const>(&dart::integration::IntegrableSystem::getConfigs))
.def("getGenVels", static_cast<Eigen::VectorXd (dart::integration::IntegrableSystem::*)() const>(&dart::integration::IntegrableSystem::getGenVels))
.def("evalGenAccs", static_cast<Eigen::VectorXd (dart::integration::IntegrableSystem::*)()>(&dart::integration::IntegrableSystem::evalGenAccs))
.def("integrateConfigs", static_cast<void (dart::integration::IntegrableSystem::*)(const Eigen::VectorXd &, double)>(&dart::integration::IntegrableSystem::integrateConfigs), (::boost::python::arg("_genVels"), ::boost::python::arg("_dt")))
.def("integrateGenVels", static_cast<void (dart::integration::IntegrableSystem::*)(const Eigen::VectorXd &, double)>(&dart::integration::IntegrableSystem::integrateGenVels), (::boost::python::arg("_genVels"), ::boost::python::arg("_dt")))
;
}

/* footer */
