#include <boost/python.hpp>
#include <dart/common/Subject.h>

namespace dart {
namespace python {

void python_Subject()
{
    using namespace ::boost::python;
    using ::boost::noncopyable;
    using ::dart::common::Subject;

    class_<Subject, noncopyable>("Subject", no_init)
        ;
}

} // namespace python
} // namespace dart
