#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color4BlueEv()
{
boost::python::def("Blue", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Blue))
;}

/* footer */
