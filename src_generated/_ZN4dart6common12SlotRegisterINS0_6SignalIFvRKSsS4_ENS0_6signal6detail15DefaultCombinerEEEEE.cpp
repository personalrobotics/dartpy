#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common12SlotRegisterINS0_6SignalIFvRKSsS4_ENS0_6signal6detail15DefaultCombinerEEEEE()
{
::boost::python::class_<dart::common::SlotRegister<dart::common::Signal<void (const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner> > >("_ZN4dart6common12SlotRegisterINS0_6SignalIFvRKSsS4_ENS0_6signal6detail15DefaultCombinerEEEEE", boost::python::no_init)
.def(::boost::python::init<dart::common::Signal<void (const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &, const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &), dart::common::signal::detail::DefaultCombiner>::SignalType &>((::boost::python::arg("_signal"))))
;
}

/* footer */
