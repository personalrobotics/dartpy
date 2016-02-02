#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math14randomVectorXdEmd()
{
boost::python::def("randomVectorXd", static_cast<Eigen::VectorXd (*)(std::size_t, double)>(&dart::math::randomVectorXd), (::boost::python::arg("size"), ::boost::python::arg("limit")))
;}

/* footer */
