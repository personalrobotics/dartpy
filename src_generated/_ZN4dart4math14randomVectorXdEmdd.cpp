#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math14randomVectorXdEmdd()
{
boost::python::def("randomVectorXd", static_cast<Eigen::VectorXd (*)(std::size_t, double, double)>(&dart::math::randomVectorXd), (::boost::python::arg("size"), ::boost::python::arg("min"), ::boost::python::arg("max")))
;}

/* footer */
