#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color3RedEv()
{
boost::python::def("Red", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Red))
;}

/* footer */
