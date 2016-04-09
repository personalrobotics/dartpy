#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE_docstring[] = R"CHIMERA_STRING( The Properties struct contains settings that are commonly used by
 methods that compute error for inverse kinematics.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("ErrorMethod"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::ErrorMethod::Properties >("Properties", _ZN4dart8dynamics17InverseKinematics11ErrorMethod10PropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::ErrorMethod::Properties * { return new dart::dynamics::InverseKinematics::ErrorMethod::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::ErrorMethod::Bounds & _bounds) -> dart::dynamics::InverseKinematics::ErrorMethod::Properties * { return new dart::dynamics::InverseKinematics::ErrorMethod::Properties(_bounds); }, ::boost::python::default_call_policies(), (::boost::python::arg("_bounds"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::ErrorMethod::Bounds & _bounds, double _errorClamp) -> dart::dynamics::InverseKinematics::ErrorMethod::Properties * { return new dart::dynamics::InverseKinematics::ErrorMethod::Properties(_bounds, _errorClamp); }, ::boost::python::default_call_policies(), (::boost::python::arg("_bounds"), ::boost::python::arg("_errorClamp"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::ErrorMethod::Bounds & _bounds, double _errorClamp, const Eigen::Vector6d & _errorWeights) -> dart::dynamics::InverseKinematics::ErrorMethod::Properties * { return new dart::dynamics::InverseKinematics::ErrorMethod::Properties(_bounds, _errorClamp, _errorWeights); }, ::boost::python::default_call_policies(), (::boost::python::arg("_bounds"), ::boost::python::arg("_errorClamp"), ::boost::python::arg("_errorWeights"))))
.def_readwrite("mBounds", &dart::dynamics::InverseKinematics::ErrorMethod::Properties::mBounds)
.def_readwrite("mErrorLengthClamp", &dart::dynamics::InverseKinematics::ErrorMethod::Properties::mErrorLengthClamp)
.def_readwrite("mErrorWeights", &dart::dynamics::InverseKinematics::ErrorMethod::Properties::mErrorWeights)
;
}

/* footer */
