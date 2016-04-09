#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics8FunctionE_docstring[] = R"CHIMERA_STRING( This class should be inherited by optimizer::Function classes that have a
 dependency on the InverseKinematics module that they belong to. If you
 pass an InverseKinematics::Function into the Problem of an
 InverseKinematics module, then it will be properly cloned whenever the
 InverseKinematics module that it belongs to gets cloned. Any Function
 classes in the Problem that do not inherit InverseKinematics::Function
 will just be copied over by reference.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics8Function5cloneEPS1__docstring[] = R"CHIMERA_STRING( Enable this function to be cloned to a new IK module.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics8FunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Function, ::boost::noncopyable >("Function", _ZN4dart8dynamics17InverseKinematics8FunctionE_docstring, boost::python::no_init)
.def("clone", [](const dart::dynamics::InverseKinematics::Function *self, dart::dynamics::InverseKinematics * _newIK) -> dart::optimizer::FunctionPtr { return self->clone(_newIK); }, _ZNK4dart8dynamics17InverseKinematics8Function5cloneEPS1__docstring, (::boost::python::arg("_newIK")))
;
}

/* footer */
