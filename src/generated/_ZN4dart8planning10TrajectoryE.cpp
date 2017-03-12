#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8planning10TrajectoryE()
{
::boost::python::object parent_object(::boost::python::scope().attr("planning"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::planning::Trajectory, ::boost::noncopyable >("Trajectory", boost::python::no_init)
.def("getDuration", [](const dart::planning::Trajectory *self) -> double { return self->getDuration(); })
.def("getPosition", [](const dart::planning::Trajectory *self, double time) -> Eigen::VectorXd { return self->getPosition(time); }, (::boost::python::arg("time")))
.def("getVelocity", [](const dart::planning::Trajectory *self, double time) -> Eigen::VectorXd { return self->getVelocity(time); }, (::boost::python::arg("time")))
;
}

/* footer */