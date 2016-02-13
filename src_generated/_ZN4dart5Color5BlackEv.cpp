#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color5BlackEv()
{
boost::python::def("Black", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Black))
;}

/* footer */
