#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("TaskSpaceRegion"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](bool computeErrorFromCenter) -> dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties(computeErrorFromCenter); }, ::boost::python::default_call_policies(), (::boost::python::arg("computeErrorFromCenter"))))
.def_readwrite("mComputeErrorFromCenter", &dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties::mComputeErrorFromCenter)
;
}

/* footer */
