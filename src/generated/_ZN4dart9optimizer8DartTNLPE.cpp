#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer8DartTNLPE_docstring[] = R"CHIMERA_STRING( class DartTNLP
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP12get_nlp_infoERiS2_S2_S2_RN5Ipopt4TNLP14IndexStyleEnumE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP15get_bounds_infoEiPdS2_iS2_S2__docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP18get_starting_pointEibPdbS2_S2_ibS2__docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP6eval_fEiPKdbRd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP11eval_grad_fEiPKdbPd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP6eval_gEiPKdbiPd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP10eval_jac_gEiPKdbiiPiS4_Pd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8DartTNLP6eval_hEiPKdbdiS3_biPiS4_Pd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer8DartTNLPE()
{
#if 0
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::DartTNLP, ::boost::noncopyable >("DartTNLP", _ZN4dart9optimizer8DartTNLPE_docstring, boost::python::no_init)
.def("get_nlp_info", [](dart::optimizer::DartTNLP *self, Ipopt::Index & n, Ipopt::Index & m, Ipopt::Index & nnz_jac_g, Ipopt::Index & nnz_h_lag, Ipopt::TNLP::IndexStyleEnum & index_style) -> bool { return self->get_nlp_info(n, m, nnz_jac_g, nnz_h_lag, index_style); }, _ZN4dart9optimizer8DartTNLP12get_nlp_infoERiS2_S2_S2_RN5Ipopt4TNLP14IndexStyleEnumE_docstring, (::boost::python::arg("n"), ::boost::python::arg("m"), ::boost::python::arg("nnz_jac_g"), ::boost::python::arg("nnz_h_lag"), ::boost::python::arg("index_style")))
.def("get_bounds_info", [](dart::optimizer::DartTNLP *self, Ipopt::Index n, Ipopt::Number * x_l, Ipopt::Number * x_u, Ipopt::Index m, Ipopt::Number * g_l, Ipopt::Number * g_u) -> bool { return self->get_bounds_info(n, x_l, x_u, m, g_l, g_u); }, _ZN4dart9optimizer8DartTNLP15get_bounds_infoEiPdS2_iS2_S2__docstring, (::boost::python::arg("n"), ::boost::python::arg("x_l"), ::boost::python::arg("x_u"), ::boost::python::arg("m"), ::boost::python::arg("g_l"), ::boost::python::arg("g_u")))
.def("get_starting_point", [](dart::optimizer::DartTNLP *self, Ipopt::Index n, bool init_x, Ipopt::Number * x, bool init_z, Ipopt::Number * z_L, Ipopt::Number * z_U, Ipopt::Index m, bool init_lambda, Ipopt::Number * lambda) -> bool { return self->get_starting_point(n, init_x, x, init_z, z_L, z_U, m, init_lambda, lambda); }, _ZN4dart9optimizer8DartTNLP18get_starting_pointEibPdbS2_S2_ibS2__docstring, (::boost::python::arg("n"), ::boost::python::arg("init_x"), ::boost::python::arg("x"), ::boost::python::arg("init_z"), ::boost::python::arg("z_L"), ::boost::python::arg("z_U"), ::boost::python::arg("m"), ::boost::python::arg("init_lambda"), ::boost::python::arg("lambda")))
.def("eval_f", [](dart::optimizer::DartTNLP *self, Ipopt::Index _n, const Ipopt::Number * _x, bool _new_x, Ipopt::Number & _obj_value) -> bool { return self->eval_f(_n, _x, _new_x, _obj_value); }, _ZN4dart9optimizer8DartTNLP6eval_fEiPKdbRd_docstring, (::boost::python::arg("_n"), ::boost::python::arg("_x"), ::boost::python::arg("_new_x"), ::boost::python::arg("_obj_value")))
.def("eval_grad_f", [](dart::optimizer::DartTNLP *self, Ipopt::Index _n, const Ipopt::Number * _x, bool _new_x, Ipopt::Number * _grad_f) -> bool { return self->eval_grad_f(_n, _x, _new_x, _grad_f); }, _ZN4dart9optimizer8DartTNLP11eval_grad_fEiPKdbPd_docstring, (::boost::python::arg("_n"), ::boost::python::arg("_x"), ::boost::python::arg("_new_x"), ::boost::python::arg("_grad_f")))
.def("eval_g", [](dart::optimizer::DartTNLP *self, Ipopt::Index _n, const Ipopt::Number * _x, bool _new_x, Ipopt::Index _m, Ipopt::Number * _g) -> bool { return self->eval_g(_n, _x, _new_x, _m, _g); }, _ZN4dart9optimizer8DartTNLP6eval_gEiPKdbiPd_docstring, (::boost::python::arg("_n"), ::boost::python::arg("_x"), ::boost::python::arg("_new_x"), ::boost::python::arg("_m"), ::boost::python::arg("_g")))
.def("eval_jac_g", [](dart::optimizer::DartTNLP *self, Ipopt::Index _n, const Ipopt::Number * _x, bool _new_x, Ipopt::Index _m, Ipopt::Index _nele_jac, Ipopt::Index * _iRow, Ipopt::Index * _jCol, Ipopt::Number * _values) -> bool { return self->eval_jac_g(_n, _x, _new_x, _m, _nele_jac, _iRow, _jCol, _values); }, _ZN4dart9optimizer8DartTNLP10eval_jac_gEiPKdbiiPiS4_Pd_docstring, (::boost::python::arg("_n"), ::boost::python::arg("_x"), ::boost::python::arg("_new_x"), ::boost::python::arg("_m"), ::boost::python::arg("_nele_jac"), ::boost::python::arg("_iRow"), ::boost::python::arg("_jCol"), ::boost::python::arg("_values")))
.def("eval_h", [](dart::optimizer::DartTNLP *self, Ipopt::Index _n, const Ipopt::Number * _x, bool _new_x, Ipopt::Number _obj_factor, Ipopt::Index _m, const Ipopt::Number * _lambda, bool _new_lambda, Ipopt::Index _nele_hess, Ipopt::Index * _iRow, Ipopt::Index * _jCol, Ipopt::Number * _values) -> bool { return self->eval_h(_n, _x, _new_x, _obj_factor, _m, _lambda, _new_lambda, _nele_hess, _iRow, _jCol, _values); }, _ZN4dart9optimizer8DartTNLP6eval_hEiPKdbdiS3_biPiS4_Pd_docstring, (::boost::python::arg("_n"), ::boost::python::arg("_x"), ::boost::python::arg("_new_x"), ::boost::python::arg("_obj_factor"), ::boost::python::arg("_m"), ::boost::python::arg("_lambda"), ::boost::python::arg("_new_lambda"), ::boost::python::arg("_nele_hess"), ::boost::python::arg("_iRow"), ::boost::python::arg("_jCol"), ::boost::python::arg("_values")))
;
#endif
}

/* footer */
