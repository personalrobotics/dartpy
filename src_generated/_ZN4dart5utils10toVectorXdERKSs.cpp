#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10toVectorXdERKSs()
{
boost::python::def("toVectorXd", static_cast<Eigen::VectorXd (*)(const std::string &)>(&dart::utils::toVectorXd), (::boost::python::arg("str")))
;}

/* footer */
