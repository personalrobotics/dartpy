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

/* postinclude */

void _ZN4dart4math4clipIN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_IdLi2ELi1ELi0ELi2ELi1EEEEENT_11PlainObjectERKNS2_10MatrixBaseIS6_EERKNS8_IT0_EESF_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("clip", [](const Eigen::MatrixBase<Eigen::Matrix<double, -1, 1, 0, -1, 1> > & val, const Eigen::MatrixBase<Eigen::Matrix<double, 2, 1, 0, 2, 1> > & lower, const Eigen::MatrixBase<Eigen::Matrix<double, 2, 1, 0, 2, 1> > & upper) -> Eigen::Matrix<double, -1, 1, 0, -1, 1>::PlainObject { return dart::math::clip<Eigen::Matrix<double, -1, 1, 0, -1, 1>, Eigen::Matrix<double, 2, 1, 0, 2, 1>>(val, lower, upper); }, (::boost::python::arg("val"), ::boost::python::arg("lower"), ::boost::python::arg("upper")));

}

/* footer */
