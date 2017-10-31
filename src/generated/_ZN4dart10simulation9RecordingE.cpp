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

void _ZN4dart10simulation9RecordingE()
{
::boost::python::object parent_object(::boost::python::scope().attr("simulation"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::simulation::Recording, ::boost::noncopyable >("Recording", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::vector<dart::dynamics::SkeletonPtr> & _skeletons) -> dart::simulation::Recording * { return new dart::simulation::Recording(_skeletons); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skeletons"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<int> & _skelDofs) -> dart::simulation::Recording * { return new dart::simulation::Recording(_skelDofs); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skelDofs"))))
.def("getNumFrames", [](const dart::simulation::Recording *self) -> int { return self->getNumFrames(); })
.def("getNumSkeletons", [](const dart::simulation::Recording *self) -> int { return self->getNumSkeletons(); })
.def("getNumDofs", [](const dart::simulation::Recording *self, int _skelIdx) -> int { return self->getNumDofs(_skelIdx); }, (::boost::python::arg("_skelIdx")))
.def("getNumContacts", [](const dart::simulation::Recording *self, int _frameIdx) -> int { return self->getNumContacts(_frameIdx); }, (::boost::python::arg("_frameIdx")))
.def("getConfig", [](const dart::simulation::Recording *self, int _frameIdx, int _skelIdx) -> Eigen::VectorXd { return self->getConfig(_frameIdx, _skelIdx); }, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_skelIdx")))
.def("getGenCoord", [](const dart::simulation::Recording *self, int _frameIdx, int _skelIdx, int _dofIdx) -> double { return self->getGenCoord(_frameIdx, _skelIdx, _dofIdx); }, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_skelIdx"), ::boost::python::arg("_dofIdx")))
.def("getContactPoint", [](const dart::simulation::Recording *self, int _frameIdx, int _contactIdx) -> Eigen::Vector3d { return self->getContactPoint(_frameIdx, _contactIdx); }, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_contactIdx")))
.def("getContactForce", [](const dart::simulation::Recording *self, int _frameIdx, int _contactIdx) -> Eigen::Vector3d { return self->getContactForce(_frameIdx, _contactIdx); }, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_contactIdx")))
.def("clear", [](dart::simulation::Recording *self) -> void { return self->clear(); })
.def("addState", [](dart::simulation::Recording *self, const Eigen::VectorXd & _state) -> void { return self->addState(_state); }, (::boost::python::arg("_state")))
.def("updateNumGenCoords", [](dart::simulation::Recording *self, const std::vector<dart::dynamics::SkeletonPtr> & _skeletons) -> void { return self->updateNumGenCoords(_skeletons); }, (::boost::python::arg("_skeletons")))
;
}

/* footer */
