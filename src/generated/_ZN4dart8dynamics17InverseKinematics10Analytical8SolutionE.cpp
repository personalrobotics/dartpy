#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics17InverseKinematics10Analytical8SolutionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical::Solution, ::boost::noncopyable >("Solution", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::Analytical::Solution * { return new dart::dynamics::InverseKinematics::Analytical::Solution(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const Eigen::VectorXd & _config) -> dart::dynamics::InverseKinematics::Analytical::Solution * { return new dart::dynamics::InverseKinematics::Analytical::Solution(_config); }, ::boost::python::default_call_policies(), (::boost::python::arg("_config"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::VectorXd & _config, int _validity) -> dart::dynamics::InverseKinematics::Analytical::Solution * { return new dart::dynamics::InverseKinematics::Analytical::Solution(_config, _validity); }, ::boost::python::default_call_policies(), (::boost::python::arg("_config"), ::boost::python::arg("_validity"))))
.def_readwrite("mConfig", &dart::dynamics::InverseKinematics::Analytical::Solution::mConfig)
.def_readwrite("mValidity", &dart::dynamics::InverseKinematics::Analytical::Solution::mValidity)
;
}

/* footer */
