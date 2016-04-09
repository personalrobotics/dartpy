#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics8BoxShapeE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BoxShape7setSizeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BoxShape7getSizeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BoxShape13computeVolumeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BoxShape14computeInertiaERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BoxShape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics8BoxShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BoxShape, std::shared_ptr<dart::dynamics::BoxShape>, ::boost::python::bases<dart::dynamics::Shape > >("BoxShape", _ZN4dart8dynamics8BoxShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _size) -> dart::dynamics::BoxShape * { return new dart::dynamics::BoxShape(_size); }, ::boost::python::default_call_policies(), (::boost::python::arg("_size"))))
.def("setSize", [](dart::dynamics::BoxShape *self, const Eigen::Vector3d & _size) -> void { return self->setSize(_size); }, _ZN4dart8dynamics8BoxShape7setSizeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_size")))
.def("getSize", [](const dart::dynamics::BoxShape *self) -> const Eigen::Vector3d & { return self->getSize(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BoxShape7getSizeEv_docstring)
.def("computeInertia", [](const dart::dynamics::BoxShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics8BoxShape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
.def("computeVolume", [](const Eigen::Vector3d & size) -> double { return dart::dynamics::BoxShape::computeVolume(size); }, (::boost::python::arg("size")))
.def("computeInertia", [](const Eigen::Vector3d & size, double mass) -> Eigen::Matrix3d { return dart::dynamics::BoxShape::computeInertia(size, mass); }, (::boost::python::arg("size"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
;
}

/* footer */
