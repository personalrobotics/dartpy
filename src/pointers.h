#ifndef DART_PYTHON_POINTERS_H_
#define DART_PYTHON_POINTERS_H_
#include <memory>
#include <dart/dynamics/dynamics.h>
#include "types.h"

#ifdef BOOST_CONFIG_HPP
#error "pointers.h must be included before any Boost headers"
#endif

namespace dart {
namespace python {

class JointPtr_wrapper_base {
public:
    JointPtr_wrapper_base()
        : mIsGeneric(true)
    {
    }

    JointPtr_wrapper_base(dart::dynamics::JointPtr const &joint)
        : mIsGeneric(true)
        , mJoint(joint)
    {
    }

    dart::dynamics::Joint *get_base() const
    {
        return mJoint.get();
    }

    virtual ~JointPtr_wrapper_base() = default;

protected:
    bool mIsGeneric;
    JointType::Enum mType;
    dart::dynamics::JointPtr mJoint;
};

template <class T, dart::python::JointType::Enum TEnum>
class JointPtr_wrapper : public JointPtr_wrapper_base {
public:
    JointPtr_wrapper(dart::dynamics::JointPtr const &joint)
        : JointPtr_wrapper_base(joint)
    {
        assert(dynamic_cast<T *>(joint.get()));
        mType = TEnum;
    }

    virtual ~JointPtr_wrapper() = default;

    T *get() const
    {
        if (mType == TEnum) {
            return dynamic_cast<T>(mJoint.get());
        } else {
            return nullptr;
        }
    }
};

inline JointPtr_wrapper_base JointPtr_wrapper_create(
        dart::dynamics::JointPtr const &joint)
{
    if (dynamic_cast<dart::dynamics::RevoluteJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::RevoluteJoint,
                                JointType::REVOLUTE>(joint);
    } else if (dynamic_cast<dart::dynamics::PrismaticJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::PrismaticJoint,
                                JointType::PRISMATIC>(joint);
    } else if (dynamic_cast<dart::dynamics::ScrewJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::ScrewJoint,
                                JointType::SCREW>(joint);
    } else if (dynamic_cast<dart::dynamics::WeldJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::WeldJoint,
                                JointType::WELD>(joint);
    } else if (dynamic_cast<dart::dynamics::UniversalJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::UniversalJoint,
                                JointType::UNIVERSAL>(joint);
    } else if (dynamic_cast<dart::dynamics::BallJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::BallJoint,
                                JointType::BALL>(joint);
    } else if (dynamic_cast<dart::dynamics::EulerJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::EulerJoint,
                                JointType::EULER>(joint);
    } else if (dynamic_cast<dart::dynamics::PlanarJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::PlanarJoint,
                                JointType::PLANAR>(joint);
    } else if (dynamic_cast<dart::dynamics::TranslationalJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::TranslationalJoint,
                                JointType::TRANSLATIONAL>(joint);
    } else if (dynamic_cast<dart::dynamics::FreeJoint *>(joint.get())) {
        return JointPtr_wrapper<dart::dynamics::FreeJoint,
                                JointType::FREE>(joint);
    } else {
        return JointPtr_wrapper_base(joint);
    }
}

} // namespace python
} // namespace dart


namespace boost {

#ifndef HAS_STD_SHARED_GET_POINTER
template <class T>
T *get_pointer(std::shared_ptr<T> const &ptr) 
{
    return ptr.get();
}
#endif // ifndef HAS_STD_SHARED_GET_POINTER

inline dart::dynamics::BodyNode *get_pointer(
    dart::dynamics::BodyNodePtr const &p)
{
    return p.get();
}

inline dart::dynamics::DegreeOfFreedom *get_pointer(
    dart::dynamics::DegreeOfFreedomPtr const &p)
{
    return p.get();
}

inline dart::dynamics::Joint *get_pointer(
    dart::dynamics::JointPtr const &p)
{
    return p.get();
}

inline dart::dynamics::Joint *get_pointer(
    dart::python::JointPtr_wrapper_base const &p)
{
    return p.get_base();
}

template <class T, dart::python::JointType::Enum TEnum>
inline dart::dynamics::Joint *get_pointer(
    dart::python::JointPtr_wrapper<T, TEnum> const &p)
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
struct pointee<dart::dynamics::BodyNodePtr>
{
    typedef dart::dynamics::BodyNode type;
};

template <>
struct pointee<dart::dynamics::DegreeOfFreedomPtr>
{
    typedef dart::dynamics::DegreeOfFreedom type;
};

template <>
struct pointee<dart::dynamics::JointPtr>
{
    typedef dart::dynamics::Joint type;
};

template <>
struct pointee<dart::python::JointPtr_wrapper_base>
{
    typedef dart::dynamics::Joint type;
};


}
}

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
template <class Ptr>
struct make_owning_smart_ptr_holder
{
    template <class T>
    static PyObject *execute(T* p)
    {
        Ptr ptr(p);
        return objects::make_ptr_instance<T,
                objects::pointer_holder<Ptr, T>
            >::execute(ptr);
    }
};

} // namespace detail

template <class Ptr>
struct return_by_smart_ptr
{
    template <class T>
    struct apply
    {
        typedef typename mpl::if_c<
            boost::is_pointer<T>::value,
            to_python_indirect<T,
                detail::make_owning_smart_ptr_holder<Ptr> >,
            detail::return_by_smart_ptr_requires_a_pointer_return_type<T>
        >::type type;
    };
};

template <class T, class Ptr>
struct smart_ptr_from_python
{
    smart_ptr_from_python()
    {
        converter::registry::insert(&convertible, &construct, type_id<Ptr>()
#ifndef BOOST_PYTHON_NO_PY_SIGNATURES
            , &converter::expected_from_python_type_direct<T>::get_pytype
#endif
        );
    }

private:
    static void *convertible(PyObject *p)
    {
        if (p == Py_None) {
            return p;
        }
        return converter::get_lvalue_from_python(p,
            converter::registered<T>::converters);
    }
    
    static void construct(PyObject* source,
                          converter::rvalue_from_python_stage1_data* data)
    {
        void *const storage
            = ((converter::rvalue_from_python_storage<Ptr>*)data)->storage.bytes;

        // Deal with the "None" case.
        if (data->convertible == source) {
            new (storage) Ptr();
        } else {
#if 0
            boost::shared_ptr<void> hold_convertible_ref_count(
              (void*)0, shared_ptr_deleter(handle<>(borrowed(source))) );
            // use aliasing constructor
            new (storage) Ptr(
                hold_convertible_ref_count,
                static_cast<T*>(data->convertible));
#endif
            new (storage) Ptr(static_cast<T *>(data->convertible));
        }
        
        data->convertible = storage;
    }
};

}} // namespace boost::python


#endif
