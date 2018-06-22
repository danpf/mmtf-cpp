#include <initializer_list>
#include <iostream>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <vector>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_9(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B251_[mmtf::MapDecoder] ";
	{ // mmtf::MapDecoder file: line:29
		pybind11::class_<mmtf::MapDecoder, std::shared_ptr<mmtf::MapDecoder>> cl(M("mmtf"), "MapDecoder", "Helper class to decode msgpack maps into object fields.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<const struct msgpack::v2::object &>(), pybind11::arg("obj") );

		cl.def( pybind11::init( [](mmtf::MapDecoder const &o){ return new mmtf::MapDecoder(o); } ) );
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<int, class std::allocator<int> > &)) &mmtf::MapDecoder::decode<std::vector<int, std::allocator<int> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<int, class std::allocator<int> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<std::string, class std::allocator<std::string > > &)) &mmtf::MapDecoder::decode<std::vector<std::string, std::allocator<std::string > >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<signed char, class std::allocator<signed char> > &)) &mmtf::MapDecoder::decode<std::vector<signed char, std::allocator<signed char> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<signed char, class std::allocator<signed char> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, std::string &)) &mmtf::MapDecoder::decode<std::string>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::__cxx11::basic_string<char> &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, char &)) &mmtf::MapDecoder::decode<char>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, char &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<struct mmtf::Transform, class std::allocator<struct mmtf::Transform> > &)) &mmtf::MapDecoder::decode<std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<struct mmtf::Transform, class std::allocator<struct mmtf::Transform> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<float, class std::allocator<float> > &)) &mmtf::MapDecoder::decode<std::vector<float, std::allocator<float> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<float, class std::allocator<float> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)) &mmtf::MapDecoder::decode<std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &)) &mmtf::MapDecoder::decode<std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &)) &mmtf::MapDecoder::decode<std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, float &)) &mmtf::MapDecoder::decode<float>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, float &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, int &)) &mmtf::MapDecoder::decode<int>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, int &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<struct mmtf::GroupType, class std::allocator<struct mmtf::GroupType> > &)) &mmtf::MapDecoder::decode<std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<struct mmtf::GroupType, class std::allocator<struct mmtf::GroupType> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, class std::vector<char, class std::allocator<char> > &)) &mmtf::MapDecoder::decode<std::vector<char, std::allocator<char> >>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, class std::vector<char, class std::allocator<char> > &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("decode", (void (mmtf::MapDecoder::*)(const std::string &, bool, struct msgpack::v2::object &)) &mmtf::MapDecoder::decode<msgpack::v2::object>, "C++: mmtf::MapDecoder::decode(const class std::__cxx11::basic_string<char> &, bool, struct msgpack::v2::object &) --> void", pybind11::arg("key"), pybind11::arg("required"), pybind11::arg("target"));
		cl.def("checkExtraKeys", (void (mmtf::MapDecoder::*)()) &mmtf::MapDecoder::checkExtraKeys, "Check if there are any keys, that were not decoded.\n This is to be called after all expected fields have been decoded.\n A warning is written to stderr for each non-decoded key.\n\nC++: mmtf::MapDecoder::checkExtraKeys() --> void");
	}
}
