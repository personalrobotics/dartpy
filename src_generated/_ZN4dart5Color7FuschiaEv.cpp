#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color7FuschiaEv()
{
boost::python::def("Fuschia", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Fuschia))
;}

/* footer */
