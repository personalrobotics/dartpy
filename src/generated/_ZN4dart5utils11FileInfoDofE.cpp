#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart5utils11FileInfoDofE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils11FileInfoDof8loadFileEPKc_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils11FileInfoDof8saveFileEPKcmmd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils11FileInfoDof6addDofERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart5utils11FileInfoDof8getDofAtEmm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart5utils11FileInfoDof14getPoseAtFrameEi_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart5utils11FileInfoDof6setFPSEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart5utils11FileInfoDof6getFPSEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart5utils11FileInfoDof12getNumFramesEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart5utils11FileInfoDof7getSkelEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart5utils11FileInfoDofE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::utils::FileInfoDof, ::boost::noncopyable >("FileInfoDof", _ZN4dart5utils11FileInfoDofE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Skeleton * _skel) -> dart::utils::FileInfoDof * { return new dart::utils::FileInfoDof(_skel); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skel"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Skeleton * _skel, double _fps) -> dart::utils::FileInfoDof * { return new dart::utils::FileInfoDof(_skel, _fps); }, ::boost::python::default_call_policies(), (::boost::python::arg("_skel"), ::boost::python::arg("_fps"))))
.def("loadFile", [](dart::utils::FileInfoDof *self, const char * _fileName) -> bool { return self->loadFile(_fileName); }, _ZN4dart5utils11FileInfoDof8loadFileEPKc_docstring, (::boost::python::arg("_fileName")))
.def("saveFile", [](dart::utils::FileInfoDof *self, const char * _fileName, std::size_t _start, std::size_t _end) -> bool { return self->saveFile(_fileName, _start, _end); }, _ZN4dart5utils11FileInfoDof8saveFileEPKcmmd_docstring, (::boost::python::arg("_fileName"), ::boost::python::arg("_start"), ::boost::python::arg("_end")))
.def("saveFile", [](dart::utils::FileInfoDof *self, const char * _fileName, std::size_t _start, std::size_t _end, double _sampleRate) -> bool { return self->saveFile(_fileName, _start, _end, _sampleRate); }, _ZN4dart5utils11FileInfoDof8saveFileEPKcmmd_docstring, (::boost::python::arg("_fileName"), ::boost::python::arg("_start"), ::boost::python::arg("_end"), ::boost::python::arg("_sampleRate")))
.def("addDof", [](dart::utils::FileInfoDof *self, const Eigen::VectorXd & _dofs) -> void { return self->addDof(_dofs); }, _ZN4dart5utils11FileInfoDof6addDofERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_dofs")))
.def("getDofAt", [](const dart::utils::FileInfoDof *self, std::size_t _frame, std::size_t _id) -> double { return self->getDofAt(_frame, _id); }, _ZNK4dart5utils11FileInfoDof8getDofAtEmm_docstring, (::boost::python::arg("_frame"), ::boost::python::arg("_id")))
.def("getPoseAtFrame", [](const dart::utils::FileInfoDof *self, int _frame) -> Eigen::VectorXd { return self->getPoseAtFrame(_frame); }, _ZNK4dart5utils11FileInfoDof14getPoseAtFrameEi_docstring, (::boost::python::arg("_frame")))
.def("setFPS", [](dart::utils::FileInfoDof *self, double _fps) -> void { return self->setFPS(_fps); }, _ZN4dart5utils11FileInfoDof6setFPSEd_docstring, (::boost::python::arg("_fps")))
.def("getFPS", [](const dart::utils::FileInfoDof *self) -> double { return self->getFPS(); }, _ZNK4dart5utils11FileInfoDof6getFPSEv_docstring)
.def("getNumFrames", [](const dart::utils::FileInfoDof *self) -> int { return self->getNumFrames(); }, _ZNK4dart5utils11FileInfoDof12getNumFramesEv_docstring)
.def("getSkel", [](const dart::utils::FileInfoDof *self) -> dart::dynamics::Skeleton * { return self->getSkel(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZNK4dart5utils11FileInfoDof7getSkelEv_docstring)
;
}

/* footer */
