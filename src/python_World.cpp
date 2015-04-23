#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include <dart/simulation/World.h>
#include "util.h"

void python_World()
{
    using namespace ::boost::python;
    using ::dart::dynamics::Skeleton;
    using ::dart::dynamics::SkeletonPtr;
    using ::dart::simulation::World;
    using ::dart::simulation::WorldPtr;
    using ::dart::python::util::collection_from_python;

    collection_from_python<std::vector<WorldPtr> >();

    class_<World, WorldPtr>("World")
        .def("add_skeleton", &World::addSkeleton)
        .def("get_skeleton",
            static_cast<SkeletonPtr (World::*)(size_t) const>(
                &World::getSkeleton))
        .def("get_skeleton_by_name",
            static_cast<SkeletonPtr (World::*)(std::string const &) const>(
                &World::getSkeleton))
        ;
}
