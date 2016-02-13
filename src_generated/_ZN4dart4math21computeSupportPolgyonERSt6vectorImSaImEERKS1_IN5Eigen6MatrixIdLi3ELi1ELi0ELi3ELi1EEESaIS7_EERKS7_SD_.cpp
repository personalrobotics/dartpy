#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math21computeSupportPolgyonERSt6vectorImSaImEERKS1_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS7_EERKS7_SD_()
{
boost::python::def("computeSupportPolgyon", static_cast<dart::math::SupportPolygon (*)(std::vector<std::size_t> &, const dart::math::SupportGeometry &, const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::math::computeSupportPolgyon), (::boost::python::arg("_originalIndices"), ::boost::python::arg("_geometry"), ::boost::python::arg("_axis1"), ::boost::python::arg("_axis2")))
;}

/* footer */
