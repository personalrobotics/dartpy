#ifndef DART_PYTHON_POINTERS_H_
#define DART_PYTHON_POINTERS_H_
#include <memory>
#include <dart/dynamics/dynamics.h>

#ifdef BOOST_CONFIG_HPP
#error "pointers.h must be included before any Boost headers"
#endif

struct TestPtr {
    TestPtr()
    {
        p_ = nullptr;
        std::cout << "+TestPtr<" << this << ">(" << p_ << ")" << std::endl;
    }

    explicit TestPtr(dart::dynamics::DegreeOfFreedom *p)
        : p_(p)
    {
        std::cout << "+TestPtr<" << this << ">(" << p_ << ")" << std::endl;
    }

    TestPtr(TestPtr const &other)
    {
        p_ = other.p_;
        std::cout << "+TestPtr<" << this << ">(" << p_ << ")" << std::endl;
    }

    ~TestPtr()
    {
        std::cout << "-TestPtr<" << this << ">(" << p_ << ")" << std::endl;
    }

    TestPtr &operator=(TestPtr const &other)
    {
        p_ = other.p_;
        std::cout << "=TestPtr<" << this << ">(" << p_ << ")" << std::endl;
        return *this;
    }

    dart::dynamics::DegreeOfFreedom *p_;
};

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

inline dart::dynamics::BodyNode *get_pointer(
    dart::dynamics::BodyNodePtr const &p)
{
    return p.get();
}

inline dart::dynamics::DegreeOfFreedom *get_pointer(TestPtr const &p)
{
    return p.p_;
}

} // namespace boost

// We CANNOT include anything that defines get_pointer() before we define our
// own overrides. This file does so indirectly.
#include <boost/python.hpp>
#include <boost/python/pointee.hpp>

namespace boost {
namespace python {

template <>
struct pointee<TestPtr>
{
    typedef dart::dynamics::DegreeOfFreedom type;
};

template <>
struct pointee<dart::dynamics::DegreeOfFreedomPtr>
{
    typedef dart::dynamics::DegreeOfFreedom type;
};

template <>
struct pointee<dart::dynamics::BodyNodePtr>
{
    typedef dart::dynamics::BodyNode type;
};

}
}

//
//
//
//

namespace boost {
namespace python {
namespace detail {

// attempting to instantiate this type will result in a compiler error,
// if that happens it means you're trying to use return_by_smart_pointer
// on a function/method that doesn't return a pointer!
template <class R>
struct return_by_smart_ptr_requires_a_pointer_return_type
# if defined(__GNUC__) && __GNUC__ >= 3 || defined(__EDG__)
    {}
# endif
    ;


// this is where all the work is done, first the plain pointer is
// converted to a smart pointer, and then the smart pointer is embedded
// in a Python object
struct make_owning_smart_ptr_holder
{
    template <class T>
    static PyObject *execute(T* p)
    {
        dart::dynamics::DegreeOfFreedomPtr ptr(p);

#if 0
        std::cout << ">object" << std::endl;
        boost::python::object pyptr(ptr);
        std::cout << "<object" << std::endl;

        std::cout << ">make_owning_smart_ptr_holder<" << p << ">" << std::endl;
        PyObject *x = boost::python::incref(pyptr.ptr());
        std::cout << "<make_owning_smart_ptr_holder<" << p << ">" << std::endl;
        return x;
#endif

        return objects::make_ptr_instance<T,
                objects::pointer_holder<
                    dart::dynamics::DegreeOfFreedomPtr, T>
            >::execute(ptr);
    }
};

} // namespace detail

struct return_by_smart_ptr
{
    template <class T>
    struct apply
    {
        typedef typename mpl::if_c<
            boost::is_pointer<T>::value,
            to_python_indirect<T, detail::make_owning_smart_ptr_holder>,
            detail::return_by_smart_ptr_requires_a_pointer_return_type<T>
        >::type type;
    };
};

}} // namespace boost::python

#endif
