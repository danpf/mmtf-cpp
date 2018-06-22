#include <initializer_list>
#include <iostream>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <stdexcept>
#include <string>
#include <vector>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// mmtf::DecodeError file: line:23
struct PyCallBack_DecodeError : public mmtf::DecodeError {
	using mmtf::DecodeError::DecodeError;

	const char * what() const noexcept override { 
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

// mmtf::EncodeError file: line:31
struct PyCallBack_EncodeError : public mmtf::EncodeError {
	using mmtf::EncodeError::EncodeError;

	const char * what() const noexcept override { 
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

void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B244_[mmtf::DecodeError] ";
	{ // mmtf::DecodeError file: line:23
		pybind11::class_<mmtf::DecodeError, std::shared_ptr<mmtf::DecodeError>, PyCallBack_DecodeError, std::runtime_error> cl(M("mmtf"), "DecodeError", "Exception thrown when failing during decoding.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<const class std::__cxx11::basic_string<char> &>(), pybind11::arg("m") );

		cl.def( pybind11::init( [](PyCallBack_DecodeError const &o){ return new PyCallBack_DecodeError(o); } ) );
		cl.def( pybind11::init( [](mmtf::DecodeError const &o){ return new mmtf::DecodeError(o); } ) );
		cl.def("assign", (class mmtf::DecodeError & (mmtf::DecodeError::*)(const class mmtf::DecodeError &)) &mmtf::DecodeError::operator=, "C++: mmtf::DecodeError::operator=(const class mmtf::DecodeError &) --> class mmtf::DecodeError &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B245_[mmtf::EncodeError] ";
	{ // mmtf::EncodeError file: line:31
		pybind11::class_<mmtf::EncodeError, std::shared_ptr<mmtf::EncodeError>, PyCallBack_EncodeError, std::runtime_error> cl(M("mmtf"), "EncodeError", "Exception thrown when failing during encoding.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<const class std::__cxx11::basic_string<char> &>(), pybind11::arg("m") );

		cl.def( pybind11::init( [](PyCallBack_EncodeError const &o){ return new PyCallBack_EncodeError(o); } ) );
		cl.def( pybind11::init( [](mmtf::EncodeError const &o){ return new mmtf::EncodeError(o); } ) );
		cl.def("assign", (class mmtf::EncodeError & (mmtf::EncodeError::*)(const class mmtf::EncodeError &)) &mmtf::EncodeError::operator=, "C++: mmtf::EncodeError::operator=(const class mmtf::EncodeError &) --> class mmtf::EncodeError &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B246_[mmtf::BinaryDecoder] ";
	{ // mmtf::BinaryDecoder file: line:29
		pybind11::class_<mmtf::BinaryDecoder, std::shared_ptr<mmtf::BinaryDecoder>> cl(M("mmtf"), "BinaryDecoder", "Helper class to decode msgpack binary into a vector.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](const struct msgpack::v2::object & a0){ return new mmtf::BinaryDecoder(a0); } ), "doc");
		cl.def( pybind11::init<const struct msgpack::v2::object &, const class std::__cxx11::basic_string<char> &>(), pybind11::arg("obj"), pybind11::arg("key") );

		cl.def( pybind11::init( [](mmtf::BinaryDecoder const &o){ return new mmtf::BinaryDecoder(o); } ) );
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<float, class std::allocator<float> > &)) &mmtf::BinaryDecoder::decode<std::vector<float, std::allocator<float> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<float, class std::allocator<float> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<signed char, class std::allocator<signed char> > &)) &mmtf::BinaryDecoder::decode<std::vector<signed char, std::allocator<signed char> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<signed char, class std::allocator<signed char> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<short, class std::allocator<short> > &)) &mmtf::BinaryDecoder::decode<std::vector<short, std::allocator<short> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<short, class std::allocator<short> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<int, class std::allocator<int> > &)) &mmtf::BinaryDecoder::decode<std::vector<int, std::allocator<int> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<int, class std::allocator<int> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<std::string, class std::allocator<std::string > > &)) &mmtf::BinaryDecoder::decode<std::vector<std::string, std::allocator<std::string > >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<char, class std::allocator<char> > &)) &mmtf::BinaryDecoder::decode<std::vector<char, std::allocator<char> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<char, class std::allocator<char> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(std::string &)) &mmtf::BinaryDecoder::decode<std::string>, "C++: mmtf::BinaryDecoder::decode(class std::__cxx11::basic_string<char> &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(char &)) &mmtf::BinaryDecoder::decode<char>, "C++: mmtf::BinaryDecoder::decode(char &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::Transform, class std::allocator<struct mmtf::Transform> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::Transform, class std::allocator<struct mmtf::Transform> > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)) &mmtf::BinaryDecoder::decode<std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(float &)) &mmtf::BinaryDecoder::decode<float>, "C++: mmtf::BinaryDecoder::decode(float &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(int &)) &mmtf::BinaryDecoder::decode<int>, "C++: mmtf::BinaryDecoder::decode(int &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::GroupType, class std::allocator<struct mmtf::GroupType> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::GroupType, class std::allocator<struct mmtf::GroupType> > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(struct msgpack::v2::object &)) &mmtf::BinaryDecoder::decode<msgpack::v2::object>, "C++: mmtf::BinaryDecoder::decode(struct msgpack::v2::object &) --> void", pybind11::arg("target"));
	}
}
