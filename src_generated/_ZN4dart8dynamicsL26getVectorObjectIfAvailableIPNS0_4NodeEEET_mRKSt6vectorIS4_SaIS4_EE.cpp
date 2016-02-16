#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamicsL26getVectorObjectIfAvailableIPNS0_4NodeEEET_mRKSt6vectorIS4_SaIS4_EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getVectorObjectIfAvailable", static_cast<dart::dynamics::Node *(*)(std::size_t, const std::vector<dart::dynamics::Node *> &)>(&dart::dynamics::getVectorObjectIfAvailable), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::NodePtr> >(), (::boost::python::arg("_index"), ::boost::python::arg("_vec")))
;}

/* footer */
