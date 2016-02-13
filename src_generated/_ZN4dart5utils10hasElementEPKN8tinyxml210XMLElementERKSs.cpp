#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils10hasElementEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("hasElement", static_cast<bool (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::hasElement), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
