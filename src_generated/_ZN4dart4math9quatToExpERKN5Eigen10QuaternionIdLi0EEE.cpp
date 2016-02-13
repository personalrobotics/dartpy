#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math9quatToExpERKN5Eigen10QuaternionIdLi0EEE()
{
boost::python::def("quatToExp", static_cast<Eigen::Vector3d (*)(const Eigen::Quaterniond &)>(&dart::math::quatToExp), (::boost::python::arg("_q")))
;}

/* footer */
