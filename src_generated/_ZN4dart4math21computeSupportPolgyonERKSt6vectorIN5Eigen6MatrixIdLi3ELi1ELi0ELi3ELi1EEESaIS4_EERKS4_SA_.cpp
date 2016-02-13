#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math21computeSupportPolgyonERKSt6vectorIN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS4_EERKS4_SA_()
{
boost::python::def("computeSupportPolgyon", static_cast<dart::math::SupportPolygon (*)(const dart::math::SupportGeometry &, const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::math::computeSupportPolgyon), (::boost::python::arg("_geometry"), ::boost::python::arg("_axis1"), ::boost::python::arg("_axis2")))
;}

/* footer */
