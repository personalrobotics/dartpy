#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils18getAttributeDoubleEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeDouble", static_cast<double (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeDouble), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
