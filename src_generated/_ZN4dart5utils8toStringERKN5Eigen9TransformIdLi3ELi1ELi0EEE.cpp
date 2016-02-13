#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils8toStringERKN5Eigen9TransformIdLi3ELi1ELi0EEE()
{
boost::python::def("toString", static_cast<std::string (*)(const Eigen::Isometry3d &)>(&dart::utils::toString), (::boost::python::arg("v")))
;}

/* footer */
