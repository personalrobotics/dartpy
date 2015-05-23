#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_PlanarJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::PlanarJoint;
    using dart::dynamics::MultiDofJoint;

    scope joint_class(
        class_<PlanarJoint, bases<MultiDofJoint<3> >,
               noncopyable>("PlanarJoint", no_init)
    );

    enum_<PlanarJoint::PlaneType>("PlaneType")
        .value("XY", PlanarJoint::PT_XY)
        .value("YZ", PlanarJoint::PT_YZ)
        .value("ZX", PlanarJoint::PT_ZX)
        .value("ARBITRARY", PlanarJoint::PT_ARBITRARY)
        ;

    class_<PlanarJoint::UniqueProperties>("UniqueProperties")
        .def_readwrite("plane_type", &PlanarJoint::UniqueProperties::mPlaneType)
        .def_readwrite("trans_axis1", &PlanarJoint::UniqueProperties::mTransAxis1)
        .def_readwrite("trans_axis2", &PlanarJoint::UniqueProperties::mTransAxis2)
        .def_readwrite("rot_axis", &PlanarJoint::UniqueProperties::mRotAxis)
        .def("set_xy_plane", &PlanarJoint::UniqueProperties::setXYPlane)
        .def("set_yz_plane", &PlanarJoint::UniqueProperties::setYZPlane)
        .def("set_zx_plane", &PlanarJoint::UniqueProperties::setZXPlane)
        .def("set_arbitrary_plane", &PlanarJoint::UniqueProperties::setArbitraryPlane)
        ;

    class_<PlanarJoint::Properties, bases<
            MultiDofJoint<3>::Properties, PlanarJoint::UniqueProperties>
          >("Properties")
        ;
}

} // namespace python
} // namespace dart
