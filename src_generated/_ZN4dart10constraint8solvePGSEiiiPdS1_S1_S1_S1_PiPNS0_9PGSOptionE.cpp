#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint8solvePGSEiiiPdS1_S1_S1_S1_PiPNS0_9PGSOptionE()
{
boost::python::def("solvePGS", static_cast<bool (*)(int, int, int, double *, double *, double *, double *, double *, int *, dart::constraint::PGSOption *)>(&dart::constraint::solvePGS), (::boost::python::arg("n"), ::boost::python::arg("nskip"), ::boost::python::arg(""), ::boost::python::arg("A"), ::boost::python::arg("x"), ::boost::python::arg("b"), ::boost::python::arg("lo"), ::boost::python::arg("hi"), ::boost::python::arg("findex"), ::boost::python::arg("option")))
;}

/* footer */
