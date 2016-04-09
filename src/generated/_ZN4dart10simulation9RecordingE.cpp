#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10simulation9RecordingE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording12getNumFramesEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording15getNumSkeletonsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording10getNumDofsEi_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording14getNumContactsEi_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording9getConfigEii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording11getGenCoordEiii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording15getContactPointEii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation9Recording15getContactForceEii_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation9Recording5clearEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation9Recording8addStateERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation9Recording18updateNumGenCoordsERKSt6vectorISt10shared_ptrINS_8dynamics8SkeletonEESaIS6_EE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart10simulation9RecordingE()
{
::boost::python::object parent_object(::boost::python::scope().attr("simulation"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::simulation::Recording, ::boost::noncopyable >("Recording", _ZN4dart10simulation9RecordingE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::vector<dart::dynamics::SkeletonPtr> & _skeletons) -> dart::simulation::Recording * { return new dart::simulation::Recording(_skeletons); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skeletons"))))
.def("__init__", ::boost::python::make_constructor([](const std::vector<int> & _skelDofs) -> dart::simulation::Recording * { return new dart::simulation::Recording(_skelDofs); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skelDofs"))))
.def("getNumFrames", [](const dart::simulation::Recording *self) -> int { return self->getNumFrames(); }, _ZNK4dart10simulation9Recording12getNumFramesEv_docstring)
.def("getNumSkeletons", [](const dart::simulation::Recording *self) -> int { return self->getNumSkeletons(); }, _ZNK4dart10simulation9Recording15getNumSkeletonsEv_docstring)
.def("getNumDofs", [](const dart::simulation::Recording *self, int _skelIdx) -> int { return self->getNumDofs(_skelIdx); }, _ZNK4dart10simulation9Recording10getNumDofsEi_docstring, (::boost::python::arg("_skelIdx")))
.def("getNumContacts", [](const dart::simulation::Recording *self, int _frameIdx) -> int { return self->getNumContacts(_frameIdx); }, _ZNK4dart10simulation9Recording14getNumContactsEi_docstring, (::boost::python::arg("_frameIdx")))
.def("getConfig", [](const dart::simulation::Recording *self, int _frameIdx, int _skelIdx) -> Eigen::VectorXd { return self->getConfig(_frameIdx, _skelIdx); }, _ZNK4dart10simulation9Recording9getConfigEii_docstring, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_skelIdx")))
.def("getGenCoord", [](const dart::simulation::Recording *self, int _frameIdx, int _skelIdx, int _dofIdx) -> double { return self->getGenCoord(_frameIdx, _skelIdx, _dofIdx); }, _ZNK4dart10simulation9Recording11getGenCoordEiii_docstring, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_skelIdx"), ::boost::python::arg("_dofIdx")))
.def("getContactPoint", [](const dart::simulation::Recording *self, int _frameIdx, int _contactIdx) -> Eigen::Vector3d { return self->getContactPoint(_frameIdx, _contactIdx); }, _ZNK4dart10simulation9Recording15getContactPointEii_docstring, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_contactIdx")))
.def("getContactForce", [](const dart::simulation::Recording *self, int _frameIdx, int _contactIdx) -> Eigen::Vector3d { return self->getContactForce(_frameIdx, _contactIdx); }, _ZNK4dart10simulation9Recording15getContactForceEii_docstring, (::boost::python::arg("_frameIdx"), ::boost::python::arg("_contactIdx")))
.def("clear", [](dart::simulation::Recording *self) -> void { return self->clear(); }, _ZN4dart10simulation9Recording5clearEv_docstring)
.def("addState", [](dart::simulation::Recording *self, const Eigen::VectorXd & _state) -> void { return self->addState(_state); }, _ZN4dart10simulation9Recording8addStateERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_state")))
.def("updateNumGenCoords", [](dart::simulation::Recording *self, const std::vector<dart::dynamics::SkeletonPtr> & _skeletons) -> void { return self->updateNumGenCoords(_skeletons); }, _ZN4dart10simulation9Recording18updateNumGenCoordsERKSt6vectorISt10shared_ptrINS_8dynamics8SkeletonEESaIS6_EE_docstring, (::boost::python::arg("_skeletons")))
;
}

/* footer */
