#include "pointers.h"
#include <boost/python.hpp>
#include <dart/collision/collision.h>
#include <dart/collision/dart/DARTCollisionDetector.h>
#include <dart/collision/fcl/FCLCollisionDetector.h>
#include <dart/dynamics/dynamics.h>

void python_CollisionDetector()
{
    using namespace ::boost::python;

    using ::boost::noncopyable;
    using ::dart::collision::CollisionDetector;
    using ::dart::collision::DARTCollisionDetector;
    using ::dart::collision::FCLCollisionDetector;
    using ::dart::dynamics::BodyNode;

    typedef std::shared_ptr<CollisionDetector> CollisionDetectorPtr;
    typedef std::shared_ptr<FCLCollisionDetector> FCLCollisionDetectorPtr;
    typedef std::shared_ptr<DARTCollisionDetector> DARTCollisionDetectorPtr;

    implicitly_convertible<FCLCollisionDetectorPtr, CollisionDetectorPtr>(); 
    implicitly_convertible<DARTCollisionDetectorPtr, DARTCollisionDetectorPtr>(); 

    class_<CollisionDetector, CollisionDetectorPtr,
           noncopyable>("CollisionDetector", no_init)
        .add_property("num_contacts", &CollisionDetector::getNumContacts)
        .add_property("max_num_contacts",
            &CollisionDetector::getNumMaxContacts,
            &CollisionDetector::setNumMaxContacs)
        .def("add_skeleton", &CollisionDetector::addSkeleton)
        .def("remove_skeleton", &CollisionDetector::removeSkeleton)
        .def("remove_all_skeleton", &CollisionDetector::removeAllSkeletons)
        .def("enable_pair", &CollisionDetector::enablePair)
        .def("disable_pair", &CollisionDetector::disablePair)
        .def("is_collidable", &CollisionDetector::isCollidable)
        .def("clear_all_contacts", &CollisionDetector::clearAllContacts)
        .def("detect_collision",
            static_cast<bool (CollisionDetector::*)(bool, bool)>(
                &CollisionDetector::detectCollision))
        .def("detect_collision",
            static_cast<bool (CollisionDetector::*)(
                    BodyNode *, BodyNode *, bool)>(
                &CollisionDetector::detectCollision))
        ;

    class_<FCLCollisionDetector, FCLCollisionDetectorPtr,
           bases<CollisionDetector> >("FCLCollisionDetector")
        ;

    class_<DARTCollisionDetector, DARTCollisionDetectorPtr,
           bases<CollisionDetector> >("DARTCollisionDetector")
        ;
}
