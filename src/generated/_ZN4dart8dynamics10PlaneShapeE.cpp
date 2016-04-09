#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10PlaneShapeE_docstring[] = R"CHIMERA_STRING( PlaneShape represents infinite plane has normal and offset as properties.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10PlaneShape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10PlaneShape9setNormalERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set plane normal
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10PlaneShape9getNormalEv_docstring[] = R"CHIMERA_STRING( Get plane normal
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10PlaneShape9setOffsetEd_docstring[] = R"CHIMERA_STRING( Set plane offset
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10PlaneShape9getOffsetEv_docstring[] = R"CHIMERA_STRING( Get plane offset
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10PlaneShape18setNormalAndOffsetERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEd_docstring[] = R"CHIMERA_STRING( Set plane normal and offset
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10PlaneShape17setNormalAndPointERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6__docstring[] = R"CHIMERA_STRING( Set plane normal and point
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10PlaneShape15computeDistanceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Compute distance between the plane and the given point
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10PlaneShape21computeSignedDistanceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Compute signed distance between the plane and the given point
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10PlaneShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PlaneShape, std::shared_ptr<dart::dynamics::PlaneShape>, ::boost::python::bases<dart::dynamics::Shape > >("PlaneShape", _ZN4dart8dynamics10PlaneShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _normal, double _offset) -> dart::dynamics::PlaneShape * { return new dart::dynamics::PlaneShape(_normal, _offset); }, ::boost::python::default_call_policies(), (::boost::python::arg("_normal"), ::boost::python::arg("_offset"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _normal, const Eigen::Vector3d & _point) -> dart::dynamics::PlaneShape * { return new dart::dynamics::PlaneShape(_normal, _point); }, ::boost::python::default_call_policies(), (::boost::python::arg("_normal"), ::boost::python::arg("_point"))))
.def("computeInertia", [](const dart::dynamics::PlaneShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics10PlaneShape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
.def("setNormal", [](dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _normal) -> void { return self->setNormal(_normal); }, _ZN4dart8dynamics10PlaneShape9setNormalERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_normal")))
.def("getNormal", [](const dart::dynamics::PlaneShape *self) -> const Eigen::Vector3d & { return self->getNormal(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10PlaneShape9getNormalEv_docstring)
.def("setOffset", [](dart::dynamics::PlaneShape *self, double _offset) -> void { return self->setOffset(_offset); }, _ZN4dart8dynamics10PlaneShape9setOffsetEd_docstring, (::boost::python::arg("_offset")))
.def("getOffset", [](const dart::dynamics::PlaneShape *self) -> double { return self->getOffset(); }, _ZNK4dart8dynamics10PlaneShape9getOffsetEv_docstring)
.def("setNormalAndOffset", [](dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _normal, double _offset) -> void { return self->setNormalAndOffset(_normal, _offset); }, _ZN4dart8dynamics10PlaneShape18setNormalAndOffsetERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEd_docstring, (::boost::python::arg("_normal"), ::boost::python::arg("_offset")))
.def("setNormalAndPoint", [](dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _normal, const Eigen::Vector3d & _point) -> void { return self->setNormalAndPoint(_normal, _point); }, _ZN4dart8dynamics10PlaneShape17setNormalAndPointERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6__docstring, (::boost::python::arg("_normal"), ::boost::python::arg("_point")))
.def("computeDistance", [](const dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _point) -> double { return self->computeDistance(_point); }, _ZNK4dart8dynamics10PlaneShape15computeDistanceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_point")))
.def("computeSignedDistance", [](const dart::dynamics::PlaneShape *self, const Eigen::Vector3d & _point) -> double { return self->computeSignedDistance(_point); }, _ZNK4dart8dynamics10PlaneShape21computeSignedDistanceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_point")))
;
}

/* footer */
