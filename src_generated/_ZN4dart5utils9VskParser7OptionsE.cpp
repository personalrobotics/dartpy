#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils9VskParser7OptionsE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("VskParser"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::VskParser::Options >("Options", boost::python::no_init)
.def(::boost::python::init<const dart::common::ResourceRetrieverPtr &, const Eigen::Vector3d &, double, double, double, double, double, double, bool>((::boost::python::arg("retrieverOrNullptr"), ::boost::python::arg("defaultEllipsoidSize"), ::boost::python::arg("thicknessRatio") = 3.500000e-01, ::boost::python::arg("density") = 1.000000e+03, ::boost::python::arg("jointPositionLowerLimit") = -3.141593e+00, ::boost::python::arg("jointPositionUpperLimit") = 3.141593e+00, ::boost::python::arg("jointDampingCoefficient") = 1.000000e-01, ::boost::python::arg("jointFriction") = 0.000000e+00, ::boost::python::arg("removeEndBodyNodes") = false)))
.def_readwrite("retrieverOrNullptr", &dart::utils::VskParser::Options::retrieverOrNullptr)
.def_readwrite("defaultEllipsoidSize", &dart::utils::VskParser::Options::defaultEllipsoidSize)
.def_readwrite("thicknessRatio", &dart::utils::VskParser::Options::thicknessRatio)
.def_readwrite("density", &dart::utils::VskParser::Options::density)
.def_readwrite("jointPositionLowerLimit", &dart::utils::VskParser::Options::jointPositionLowerLimit)
.def_readwrite("jointPositionUpperLimit", &dart::utils::VskParser::Options::jointPositionUpperLimit)
.def_readwrite("jointDampingCoefficient", &dart::utils::VskParser::Options::jointDampingCoefficient)
.def_readwrite("jointFriction", &dart::utils::VskParser::Options::jointFriction)
.def_readwrite("removeEndBodyNodes", &dart::utils::VskParser::Options::removeEndBodyNodes)
;
}

/* footer */
