#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8planning4PathE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::Path >("Path", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::list<Eigen::VectorXd> & path) -> dart::planning::Path * { return new dart::planning::Path(path); }, ::boost::python::default_call_policies(), (::boost::python::arg("path"))))
.def("__init__", ::boost::python::make_constructor([](const std::list<Eigen::VectorXd> & path, double maxDeviation) -> dart::planning::Path * { return new dart::planning::Path(path, maxDeviation); }, ::boost::python::default_call_policies(), (::boost::python::arg("path"), ::boost::python::arg("maxDeviation"))))
.def("getLength", [](const dart::planning::Path *self) -> double { return self->getLength(); })
.def("getConfig", [](const dart::planning::Path *self, double s) -> Eigen::VectorXd { return self->getConfig(s); }, (::boost::python::arg("s")))
.def("getTangent", [](const dart::planning::Path *self, double s) -> Eigen::VectorXd { return self->getTangent(s); }, (::boost::python::arg("s")))
.def("getCurvature", [](const dart::planning::Path *self, double s) -> Eigen::VectorXd { return self->getCurvature(s); }, (::boost::python::arg("s")))
.def("getNextSwitchingPoint", [](const dart::planning::Path *self, double s, bool & discontinuity) -> double { return self->getNextSwitchingPoint(s, discontinuity); }, (::boost::python::arg("s"), ::boost::python::arg("discontinuity")))
.def("getSwitchingPoints", [](const dart::planning::Path *self) -> std::list<std::pair<double, bool> > { return self->getSwitchingPoints(); })
;
}

/* footer */
