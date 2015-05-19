#ifndef DART_PYTHON_POINTERS_H_
#define DART_PYTHON_POINTERS_H_
#include <memory>
#include <dart/dynamics/dynamics.h>

#ifdef BOOST_CONFIG_HPP
#error "pointers.h must be included before any Boost headers"
#endif

namespace boost {

template <class T>
T *get_pointer(std::shared_ptr<T> const &ptr) 
{
    return ptr.get();
}

inline dart::dynamics::DegreeOfFreedom *get_pointer(
    dart::dynamics::DegreeOfFreedomPtr const &p)
{
    return p.get();
}

} // namespace boost

// We CANNOT include anything that defines get_pointer() before we define our
// own overrides. This file does so indirectly.
#include <boost/python.hpp>
#include <boost/python/pointee.hpp>

namespace boost {
namespace python {

template <>
struct pointee<dart::dynamics::DegreeOfFreedomPtr>
{
    typedef dart::dynamics::DegreeOfFreedom type;
};

struct DegreeOfFreedomRawPtr_to_python
{
    static PyObject *convert(dart::dynamics::DegreeOfFreedom *s)
    {
        return boost::python::incref(
            boost::python::object(
                dart::dynamics::DegreeOfFreedomPtr(s)
            ).ptr()
        );
    }
};

} // namespace python
} // namespace boost

#endif
