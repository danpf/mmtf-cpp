#include <fstream>
#include <initializer_list>
#include <ios>
#include <iostream>
#include <iterator>
#include <memory>
#include <string>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_10(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B260_[void mmtf::decodeFromBuffer(struct mmtf::StructureData &, const char *, unsigned long)] ";
	// mmtf::decodeFromBuffer(struct mmtf::StructureData &, const char *, unsigned long) file: line:34
	M("mmtf").def("decodeFromBuffer", (void (*)(struct mmtf::StructureData &, const char *, unsigned long)) &mmtf::decodeFromBuffer, "Decode an MMTF data structure from a byte buffer.\n \n\n   MMTF data structure to be filled\n \n\n File contents\n \n\n   Size of buffer\n \n\n mmtf::DecodeError if an error occured\n\nC++: mmtf::decodeFromBuffer(struct mmtf::StructureData &, const char *, unsigned long) --> void", pybind11::arg("data"), pybind11::arg("buffer"), pybind11::arg("size"));

	std::cout << "B261_[void mmtf::decodeFromStream<std::basic_ifstream<char>>(struct mmtf::StructureData &, class std::basic_ifstream<char> &)] ";
	// mmtf::decodeFromStream(struct mmtf::StructureData &, class std::basic_ifstream<char> &) file: line:71
	M("mmtf").def("decodeFromStream", (void (*)(struct mmtf::StructureData &, class std::basic_ifstream<char> &)) &mmtf::decodeFromStream<std::basic_ifstream<char>>, "C++: mmtf::decodeFromStream(struct mmtf::StructureData &, class std::basic_ifstream<char> &) --> void", pybind11::arg("data"), pybind11::arg("stream"));

	std::cout << "B262_[void mmtf::decodeFromFile(struct mmtf::StructureData &, const class std::__cxx11::basic_string<char> &)] ";
	// mmtf::decodeFromFile(struct mmtf::StructureData &, const class std::__cxx11::basic_string<char> &) file: line:55
	M("mmtf").def("decodeFromFile", (void (*)(struct mmtf::StructureData &, const std::string &)) &mmtf::decodeFromFile, "Decode an MMTF data structure from an existing file.\n \n\n     MMTF data structure to be filled\n \n\n Path to file to load\n \n\n mmtf::DecodeError if an error occured\n\nC++: mmtf::decodeFromFile(struct mmtf::StructureData &, const class std::__cxx11::basic_string<char> &) --> void", pybind11::arg("data"), pybind11::arg("filename"));

}
