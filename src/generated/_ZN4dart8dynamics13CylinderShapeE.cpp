#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics13CylinderShapeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13CylinderShape9getRadiusEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13CylinderShape9setRadiusEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13CylinderShape9getHeightEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13CylinderShape9setHeightEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13CylinderShape13computeVolumeEdd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13CylinderShape14computeInertiaEddd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13CylinderShape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics13CylinderShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CylinderShape, std::shared_ptr<dart::dynamics::CylinderShape>, ::boost::python::bases<dart::dynamics::Shape > >("CylinderShape", _ZN4dart8dynamics13CylinderShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double _radius, double _height) -> dart::dynamics::CylinderShape * { return new dart::dynamics::CylinderShape(_radius, _height); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"), ::boost::python::arg("_height"))))
.def("getRadius", [](const dart::dynamics::CylinderShape *self) -> double { return self->getRadius(); }, _ZNK4dart8dynamics13CylinderShape9getRadiusEv_docstring)
.def("setRadius", [](dart::dynamics::CylinderShape *self, double _radius) -> void { return self->setRadius(_radius); }, _ZN4dart8dynamics13CylinderShape9setRadiusEd_docstring, (::boost::python::arg("_radius")))
.def("getHeight", [](const dart::dynamics::CylinderShape *self) -> double { return self->getHeight(); }, _ZNK4dart8dynamics13CylinderShape9getHeightEv_docstring)
.def("setHeight", [](dart::dynamics::CylinderShape *self, double _height) -> void { return self->setHeight(_height); }, _ZN4dart8dynamics13CylinderShape9setHeightEd_docstring, (::boost::python::arg("_height")))
.def("computeInertia", [](const dart::dynamics::CylinderShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics13CylinderShape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
.def("computeVolume", [](double radius, double height) -> double { return dart::dynamics::CylinderShape::computeVolume(radius, height); }, (::boost::python::arg("radius"), ::boost::python::arg("height")))
.def("computeInertia", [](double radius, double height, double mass) -> Eigen::Matrix3d { return dart::dynamics::CylinderShape::computeInertia(radius, height, mass); }, (::boost::python::arg("radius"), ::boost::python::arg("height"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
;
}

/* footer */
