#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Extensible<dart::dynamics::Node::State>, ::boost::noncopyable >("_ZN4dart6common10ExtensibleINS_8dynamics4Node5StateEEE", boost::python::no_init)
.def("clone", static_cast<std::unique_ptr<dart::dynamics::Node::State> (dart::common::Extensible<dart::dynamics::Node::State>::*)() const>(&dart::common::Extensible<dart::dynamics::Node::State>::clone))
.def("copy", static_cast<void (dart::common::Extensible<dart::dynamics::Node::State>::*)(const dart::dynamics::Node::State &)>(&dart::common::Extensible<dart::dynamics::Node::State>::copy), (::boost::python::arg("anotherExtensible")))
;
}

/* footer */
