#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics13SoftMeshShapeE()
{
::boost::python::class_<dart::dynamics::SoftMeshShape, std::shared_ptr<dart::dynamics::SoftMeshShape>, ::boost::python::bases<dart::dynamics::Shape > >("SoftMeshShape", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::SoftBodyNode *>((::boost::python::arg("_softBodyNode"))))
.def("update", static_cast<void (dart::dynamics::SoftMeshShape::*)()>(&dart::dynamics::SoftMeshShape::update))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::SoftMeshShape::*)(double) const>(&dart::dynamics::SoftMeshShape::computeInertia), (::boost::python::arg("mass")))
.def("draw", static_cast<void (dart::dynamics::SoftMeshShape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::SoftMeshShape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_col"), ::boost::python::arg("_default") = true))
;
}

/* footer */
