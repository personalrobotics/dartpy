#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils12toIsometry3dERKSs()
{
boost::python::def("toIsometry3d", static_cast<Eigen::Isometry3d (*)(const std::string &)>(&dart::utils::toIsometry3d), (::boost::python::arg("str")))
;}

/* footer */
