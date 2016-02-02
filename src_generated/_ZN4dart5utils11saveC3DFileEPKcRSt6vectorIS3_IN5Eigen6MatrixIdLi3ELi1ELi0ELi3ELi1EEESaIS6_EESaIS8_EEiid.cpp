#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils11saveC3DFileEPKcRSt6vectorIS3_IN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEESaIS6_EESaIS8_EEiid()
{
boost::python::def("saveC3DFile", static_cast<bool (*)(const char *, Eigen::EIGEN_VV_VEC3D &, int, int, double)>(&dart::utils::saveC3DFile), (::boost::python::arg("_fileName"), ::boost::python::arg("_pointData"), ::boost::python::arg("_nFrame"), ::boost::python::arg("_nMarker"), ::boost::python::arg("_freq")))
;}

/* footer */
