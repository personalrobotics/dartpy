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

void _ZN4dart4math9AdRInvJacIN5Eigen6MatrixIdLi6ELin1ELi0ELi6ELin1EEEEENT_11PlainObjectERKNS2_9TransformIdLi3ELi1ELi0EEERKNS2_10MatrixBaseIS5_EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("AdRInvJac", [](const Eigen::Isometry3d & _T, const Eigen::MatrixBase<Eigen::Matrix<double, 6, -1, 0, 6, -1> > & _J) -> Eigen::Matrix<double, 6, -1, 0, 6, -1>::PlainObject { return dart::math::AdRInvJac<Eigen::Matrix<double, 6, -1, 0, 6, -1>>(_T, _J); }, (::boost::python::arg("_T"), ::boost::python::arg("_J")));

}

/* footer */
