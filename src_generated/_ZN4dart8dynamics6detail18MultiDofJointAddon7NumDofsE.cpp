#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail18MultiDofJointAddon7NumDofsE()
{
::boost::python::scope().attr("NumDofs") = dart::dynamics::detail::MultiDofJointAddon::NumDofs;
}

/* footer */
