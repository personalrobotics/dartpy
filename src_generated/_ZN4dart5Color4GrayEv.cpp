#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color4GrayEv()
{
boost::python::def("Gray", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Gray))
;}

/* footer */
