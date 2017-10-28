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

void _ZN4dart9collision14DistanceOptionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::DistanceOption >("DistanceOption", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::collision::DistanceOption * { return new dart::collision::DistanceOption(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](bool enableNearestPoints) -> dart::collision::DistanceOption * { return new dart::collision::DistanceOption(enableNearestPoints); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableNearestPoints"))))
.def("__init__", ::boost::python::make_constructor([](bool enableNearestPoints, double distanceLowerBound) -> dart::collision::DistanceOption * { return new dart::collision::DistanceOption(enableNearestPoints, distanceLowerBound); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableNearestPoints"), ::boost::python::arg("distanceLowerBound"))))
.def("__init__", ::boost::python::make_constructor([](bool enableNearestPoints, double distanceLowerBound, const std::shared_ptr<dart::collision::DistanceFilter> & distanceFilter) -> dart::collision::DistanceOption * { return new dart::collision::DistanceOption(enableNearestPoints, distanceLowerBound, distanceFilter); }, ::boost::python::default_call_policies(), (::boost::python::arg("enableNearestPoints"), ::boost::python::arg("distanceLowerBound"), ::boost::python::arg("distanceFilter"))))
.def_readwrite("enableNearestPoints", &dart::collision::DistanceOption::enableNearestPoints)
.def_readwrite("distanceLowerBound", &dart::collision::DistanceOption::distanceLowerBound)
.def_readwrite("distanceFilter", &dart::collision::DistanceOption::distanceFilter)
;
}

/* footer */
