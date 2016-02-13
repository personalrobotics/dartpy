#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE()
{
boost::python::def("sign", static_cast<int (*)(double, std::true_type)>(&dart::math::sign), (::boost::python::arg("x"), ::boost::python::arg("")))
;}

/* footer */
