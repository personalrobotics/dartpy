#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math14randomVectorXdEmd()
{
boost::python::def("randomVectorXd", static_cast<Eigen::VectorXd (*)(std::size_t, double)>(&dart::math::randomVectorXd), (::boost::python::arg("size"), ::boost::python::arg("limit")))
;}

/* footer */
