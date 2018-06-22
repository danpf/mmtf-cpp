#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <mmtf/errors.hpp> // mmtf::DecodeError
#include <mmtf/errors.hpp> // mmtf::DecodeError::DecodeError
#include <mmtf/errors.hpp> // mmtf::DecodeError::operator=
#include <mmtf/errors.hpp> // mmtf::EncodeError
#include <mmtf/errors.hpp> // mmtf::EncodeError::EncodeError
#include <mmtf/errors.hpp> // mmtf::EncodeError::operator=
#include <sstream> // __str__
#include <stdexcept> // std::runtime_error::what
#include <string> // std::__cxx11::basic_string
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::assign
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::at
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::begin
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::clear
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::compare
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::copy
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::data
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::end
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::erase
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_not_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_not_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::insert
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::max_size
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[]
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::push_back
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::replace
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::resize
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::swap
#include <string> // std::char_traits

#include <pybind11/pybind11.h>
#include <functional>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// mmtf::DecodeError file:mmtf/errors.hpp line:23
struct PyCallBack_DecodeError : public mmtf::DecodeError {
	using mmtf::DecodeError::DecodeError;

	const char * what() const throw() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const mmtf::DecodeError *>(this), "what");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<const char *>::value) {
				static pybind11::detail::overload_caster_t<const char *> caster;
				return pybind11::detail::cast_ref<const char *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<const char *>(std::move(o));
		}
		return runtime_error::what();
	}
};

// mmtf::EncodeError file:mmtf/errors.hpp line:31
struct PyCallBack_EncodeError : public mmtf::EncodeError {
	using mmtf::EncodeError::EncodeError;

	const char * what() const throw() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const mmtf::EncodeError *>(this), "what");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<const char *>::value) {
				static pybind11::detail::overload_caster_t<const char *> caster;
				return pybind11::detail::cast_ref<const char *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<const char *>(std::move(o));
		}
		return runtime_error::what();
	}
};

void bind_mmtf_errors(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B90_[mmtf::DecodeError] ";
	{ // mmtf::DecodeError file:mmtf/errors.hpp line:23
		pybind11::class_<mmtf::DecodeError, std::shared_ptr<mmtf::DecodeError>, PyCallBack_DecodeError, std::runtime_error> cl(M("mmtf"), "DecodeError", "Exception thrown when failing during decoding.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<const class std::__cxx11::basic_string<char> &>(), pybind11::arg("m") );

		cl.def( pybind11::init( [](PyCallBack_DecodeError const &o){ return new PyCallBack_DecodeError(o); } ) );
		cl.def( pybind11::init( [](mmtf::DecodeError const &o){ return new mmtf::DecodeError(o); } ) );
		cl.def("assign", (class mmtf::DecodeError & (mmtf::DecodeError::*)(const class mmtf::DecodeError &)) &mmtf::DecodeError::operator=, "C++: mmtf::DecodeError::operator=(const class mmtf::DecodeError &) --> class mmtf::DecodeError &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B91_[mmtf::EncodeError] ";
	{ // mmtf::EncodeError file:mmtf/errors.hpp line:31
		pybind11::class_<mmtf::EncodeError, std::shared_ptr<mmtf::EncodeError>, PyCallBack_EncodeError, std::runtime_error> cl(M("mmtf"), "EncodeError", "Exception thrown when failing during encoding.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<const class std::__cxx11::basic_string<char> &>(), pybind11::arg("m") );

		cl.def( pybind11::init( [](PyCallBack_EncodeError const &o){ return new PyCallBack_EncodeError(o); } ) );
		cl.def( pybind11::init( [](mmtf::EncodeError const &o){ return new mmtf::EncodeError(o); } ) );
		cl.def("assign", (class mmtf::EncodeError & (mmtf::EncodeError::*)(const class mmtf::EncodeError &)) &mmtf::EncodeError::operator=, "C++: mmtf::EncodeError::operator=(const class mmtf::EncodeError &) --> class mmtf::EncodeError &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
