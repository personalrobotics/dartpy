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

void _ZN4dart11integration16IntegrableSystemE()
{
::boost::python::object parent_object(::boost::python::scope().attr("integration"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::integration::IntegrableSystem, ::boost::noncopyable >("IntegrableSystem", boost::python::no_init)
.def("setConfigs", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _configs) -> void { return self->setConfigs(_configs); }, (::boost::python::arg("_configs")))
.def("setGenVels", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _genVels) -> void { return self->setGenVels(_genVels); }, (::boost::python::arg("_genVels")))
.def("getConfigs", [](const dart::integration::IntegrableSystem *self) -> Eigen::VectorXd { return self->getConfigs(); })
.def("getGenVels", [](const dart::integration::IntegrableSystem *self) -> Eigen::VectorXd { return self->getGenVels(); })
.def("evalGenAccs", [](dart::integration::IntegrableSystem *self) -> Eigen::VectorXd { return self->evalGenAccs(); })
.def("integrateConfigs", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _genVels, double _dt) -> void { return self->integrateConfigs(_genVels, _dt); }, (::boost::python::arg("_genVels"), ::boost::python::arg("_dt")))
.def("integrateGenVels", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _genVels, double _dt) -> void { return self->integrateGenVels(_genVels, _dt); }, (::boost::python::arg("_genVels"), ::boost::python::arg("_dt")))
;
}

/* footer */
