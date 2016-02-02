#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math5isNanERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEE()
{
boost::python::def("isNan", static_cast<bool (*)(const Eigen::MatrixXd &)>(&dart::math::isNan), (::boost::python::arg("_m")))
;}

/* footer */
