#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE_docstring[] = R"CHIMERA_STRING( The Properties struct contains settings that are commonly used by
 methods that compute error for inverse kinematics.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("TaskSpaceRegion"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties, ::boost::python::bases<dart::dynamics::InverseKinematics::ErrorMethod::Properties, dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties > >("Properties", _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::ErrorMethod::Properties & errorProperties) -> dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties(errorProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("errorProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::InverseKinematics::ErrorMethod::Properties & errorProperties, const dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties & taskSpaceProperties) -> dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties(errorProperties, taskSpaceProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("errorProperties"), ::boost::python::arg("taskSpaceProperties"))))
;
}

/* footer */
