#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10toVector6dERKSs()
{
boost::python::def("toVector6d", static_cast<Eigen::Vector6d (*)(const std::string &)>(&dart::utils::toVector6d), (::boost::python::arg("str")))
;}

/* footer */
