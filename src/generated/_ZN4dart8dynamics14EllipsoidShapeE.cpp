#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics14EllipsoidShapeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14EllipsoidShape7setSizeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14EllipsoidShape7getSizeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14EllipsoidShape13computeVolumeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14EllipsoidShape14computeInertiaERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14EllipsoidShape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14EllipsoidShape8isSphereEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics14EllipsoidShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EllipsoidShape, std::shared_ptr<dart::dynamics::EllipsoidShape>, ::boost::python::bases<dart::dynamics::Shape > >("EllipsoidShape", _ZN4dart8dynamics14EllipsoidShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _size) -> dart::dynamics::EllipsoidShape * { return new dart::dynamics::EllipsoidShape(_size); }, ::boost::python::default_call_policies(), (::boost::python::arg("_size"))))
.def("setSize", [](dart::dynamics::EllipsoidShape *self, const Eigen::Vector3d & _size) -> void { return self->setSize(_size); }, _ZN4dart8dynamics14EllipsoidShape7setSizeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_size")))
.def("getSize", [](const dart::dynamics::EllipsoidShape *self) -> const Eigen::Vector3d & { return self->getSize(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics14EllipsoidShape7getSizeEv_docstring)
.def("computeInertia", [](const dart::dynamics::EllipsoidShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics14EllipsoidShape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
.def("isSphere", [](const dart::dynamics::EllipsoidShape *self) -> bool { return self->isSphere(); }, _ZNK4dart8dynamics14EllipsoidShape8isSphereEv_docstring)
.def("computeVolume", [](const Eigen::Vector3d & size) -> double { return dart::dynamics::EllipsoidShape::computeVolume(size); }, (::boost::python::arg("size")))
.def("computeInertia", [](const Eigen::Vector3d & size, double mass) -> Eigen::Matrix3d { return dart::dynamics::EllipsoidShape::computeInertia(size, mass); }, (::boost::python::arg("size"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
;
}

/* footer */
