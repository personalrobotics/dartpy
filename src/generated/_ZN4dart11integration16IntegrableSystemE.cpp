#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart11integration16IntegrableSystemE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart11integration16IntegrableSystem10setConfigsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart11integration16IntegrableSystem10setGenVelsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart11integration16IntegrableSystem10getConfigsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart11integration16IntegrableSystem10getGenVelsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart11integration16IntegrableSystem11evalGenAccsEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart11integration16IntegrableSystem16integrateConfigsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart11integration16IntegrableSystem16integrateGenVelsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart11integration16IntegrableSystemE()
{
::boost::python::object parent_object(::boost::python::scope().attr("integration"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::integration::IntegrableSystem, ::boost::noncopyable >("IntegrableSystem", _ZN4dart11integration16IntegrableSystemE_docstring, boost::python::no_init)
.def("setConfigs", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _configs) -> void { return self->setConfigs(_configs); }, _ZN4dart11integration16IntegrableSystem10setConfigsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_configs")))
.def("setGenVels", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _genVels) -> void { return self->setGenVels(_genVels); }, _ZN4dart11integration16IntegrableSystem10setGenVelsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_genVels")))
.def("getConfigs", [](const dart::integration::IntegrableSystem *self) -> Eigen::VectorXd { return self->getConfigs(); }, _ZNK4dart11integration16IntegrableSystem10getConfigsEv_docstring)
.def("getGenVels", [](const dart::integration::IntegrableSystem *self) -> Eigen::VectorXd { return self->getGenVels(); }, _ZNK4dart11integration16IntegrableSystem10getGenVelsEv_docstring)
.def("evalGenAccs", [](dart::integration::IntegrableSystem *self) -> Eigen::VectorXd { return self->evalGenAccs(); }, _ZN4dart11integration16IntegrableSystem11evalGenAccsEv_docstring)
.def("integrateConfigs", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _genVels, double _dt) -> void { return self->integrateConfigs(_genVels, _dt); }, _ZN4dart11integration16IntegrableSystem16integrateConfigsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEd_docstring, (::boost::python::arg("_genVels"), ::boost::python::arg("_dt")))
.def("integrateGenVels", [](dart::integration::IntegrableSystem *self, const Eigen::VectorXd & _genVels, double _dt) -> void { return self->integrateGenVels(_genVels, _dt); }, _ZN4dart11integration16IntegrableSystem16integrateGenVelsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEd_docstring, (::boost::python::arg("_genVels"), ::boost::python::arg("_dt")))
;
}

/* footer */
