#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color5WhiteEv()
{
boost::python::def("White", static_cast<Eigen::Vector3d (*)()>(&dart::Color::White))
;}

/* footer */
