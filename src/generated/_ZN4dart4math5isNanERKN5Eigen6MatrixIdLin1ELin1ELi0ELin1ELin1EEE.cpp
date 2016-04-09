#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5isNanERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("isNan", [](const Eigen::MatrixXd & _m) -> bool { return dart::math::isNan(_m); }, (::boost::python::arg("_m")));

}

/* footer */
