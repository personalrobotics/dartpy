#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math10expAngularERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("expAngular", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &)>(&dart::math::expAngular), (::boost::python::arg("_s")))
;}

/* footer */
