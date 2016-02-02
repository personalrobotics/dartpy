#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils10toVectorXdERKSs()
{
boost::python::def("toVectorXd", static_cast<Eigen::VectorXd (*)(const std::string &)>(&dart::utils::toVectorXd), (::boost::python::arg("str")))
;}

/* footer */
