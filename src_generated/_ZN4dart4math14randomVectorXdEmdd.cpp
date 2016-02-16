#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math14randomVectorXdEmdd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("randomVectorXd", static_cast<Eigen::VectorXd (*)(std::size_t, double, double)>(&dart::math::randomVectorXd), (::boost::python::arg("size"), ::boost::python::arg("min"), ::boost::python::arg("max")))
;}

/* footer */
