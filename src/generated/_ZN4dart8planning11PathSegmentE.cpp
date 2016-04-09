#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8planning11PathSegmentE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::PathSegment, ::boost::noncopyable >("PathSegment", boost::python::no_init)
.def("getLength", [](const dart::planning::PathSegment *self) -> double { return self->getLength(); })
.def("getConfig", [](const dart::planning::PathSegment *self, double s) -> Eigen::VectorXd { return self->getConfig(s); }, (::boost::python::arg("s")))
.def("getTangent", [](const dart::planning::PathSegment *self, double s) -> Eigen::VectorXd { return self->getTangent(s); }, (::boost::python::arg("s")))
.def("getCurvature", [](const dart::planning::PathSegment *self, double s) -> Eigen::VectorXd { return self->getCurvature(s); }, (::boost::python::arg("s")))
.def("getSwitchingPoints", [](const dart::planning::PathSegment *self) -> std::list<double> { return self->getSwitchingPoints(); })
.def("clone", [](const dart::planning::PathSegment *self) -> dart::planning::PathSegment * { return self->clone(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def_readwrite("position", &dart::planning::PathSegment::position)
;
}

/* footer */
