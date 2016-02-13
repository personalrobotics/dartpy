#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math19parallelAxisTheoremERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEERKNS2_IdLi3ELi1ELi0ELi3ELi1EEEd()
{
boost::python::def("parallelAxisTheorem", static_cast<Eigen::Matrix3d (*)(const Eigen::Matrix3d &, const Eigen::Vector3d &, double)>(&dart::math::parallelAxisTheorem), (::boost::python::arg("_original"), ::boost::python::arg("_comShift"), ::boost::python::arg("_mass")))
;}

/* footer */
