#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_16ExtensibleVectorIS4_INS_8dynamics4Node10PropertiesESt14default_deleteIS8_EEEES9_ISC_EESt4lessIS3_ESaISt4pairIKS3_SE_EEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ExtensibleMapHolder<std::map<std::type_index, std::unique_ptr<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > >, std::default_delete<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > > > >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > >, std::default_delete<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > > > > > > > > >("_ZN4dart6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_16ExtensibleVectorIS4_INS_8dynamics4Node10PropertiesESt14default_deleteIS8_EEEES9_ISC_EESt4lessIS3_ESaISt4pairIKS3_SE_EEEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const std::map<std::type_index, std::unique_ptr<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > >, std::default_delete<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > > > >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > >, std::default_delete<dart::common::ExtensibleVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > > > > > > > &>((::boost::python::arg("otherMap"))))
;
}

/* footer */
