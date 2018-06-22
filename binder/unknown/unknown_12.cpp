#include <fstream>
#include <initializer_list>
#include <ios>
#include <iostream>
#include <iterator>
#include <memory>
#include <string>
#include <vector>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_12(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B270_[class std::vector<char, class std::allocator<char> > mmtf::encodeInt8ToByte(class std::vector<signed char, class std::allocator<signed char> >)] ";
	// mmtf::encodeInt8ToByte(class std::vector<signed char, class std::allocator<signed char> >) file: line:99
	M("mmtf").def("encodeInt8ToByte", (class std::vector<char, class std::allocator<char> > (*)(class std::vector<signed char, class std::allocator<signed char> >)) &mmtf::encodeInt8ToByte, "encode 8 bit int to bytes encoding (type 2)\n \n\n        vector of ints to encode\n \n\n cv               char vector of encoded bytes\n\nC++: mmtf::encodeInt8ToByte(class std::vector<signed char, class std::allocator<signed char> >) --> class std::vector<char, class std::allocator<char> >", pybind11::arg("vec_in"));

	std::cout << "B271_[class std::vector<char, class std::allocator<char> > mmtf::encodeFourByteInt(class std::vector<int, class std::allocator<int> >)] ";
	// mmtf::encodeFourByteInt(class std::vector<int, class std::allocator<int> >) file: line:105
	M("mmtf").def("encodeFourByteInt", (class std::vector<char, class std::allocator<char> > (*)(class std::vector<int, class std::allocator<int> >)) &mmtf::encodeFourByteInt, "encode 4 bytes to int encoding (type 4)\n \n\n        vector of ints to encode\n \n\n cv               char vector of encoded bytes\n\nC++: mmtf::encodeFourByteInt(class std::vector<int, class std::allocator<int> >) --> class std::vector<char, class std::allocator<char> >", pybind11::arg("vec_in"));

	std::cout << "B272_[class std::vector<char, class std::allocator<char> > mmtf::encodeStringVector(class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > >, int)] ";
	// mmtf::encodeStringVector(class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > >, int) file: line:112
	M("mmtf").def("encodeStringVector", (class std::vector<char, class std::allocator<char> > (*)(class std::vector<std::string, class std::allocator<std::string > >, int)) &mmtf::encodeStringVector, "encode string vector encoding (type 5)\n \n\n         vector of strings\n \n\n     maximum length of string\n \n\n cv               char vector of encoded bytes\n\nC++: mmtf::encodeStringVector(class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > >, int) --> class std::vector<char, class std::allocator<char> >", pybind11::arg("in_sv"), pybind11::arg("CHAIN_LEN"));

	std::cout << "B273_[class std::vector<char, class std::allocator<char> > mmtf::encodeRunLengthChar(class std::vector<char, class std::allocator<char> >)] ";
	// mmtf::encodeRunLengthChar(class std::vector<char, class std::allocator<char> >) file: line:119
	M("mmtf").def("encodeRunLengthChar", (class std::vector<char, class std::allocator<char> > (*)(class std::vector<char, class std::allocator<char> >)) &mmtf::encodeRunLengthChar, "encode Run Length Char encoding (type 6)\n \n\n         vector for chars\n \n\n cv               char vector of encoded bytes\n\nC++: mmtf::encodeRunLengthChar(class std::vector<char, class std::allocator<char> >) --> class std::vector<char, class std::allocator<char> >", pybind11::arg("in_cv"));

	std::cout << "B274_[class std::vector<char, class std::allocator<char> > mmtf::encodeRunLengthDeltaInt(class std::vector<int, class std::allocator<int> >)] ";
	// mmtf::encodeRunLengthDeltaInt(class std::vector<int, class std::allocator<int> >) file: line:126
	M("mmtf").def("encodeRunLengthDeltaInt", (class std::vector<char, class std::allocator<char> > (*)(class std::vector<int, class std::allocator<int> >)) &mmtf::encodeRunLengthDeltaInt, "encode Run Length Delta Int encoding (type 8)\n \n\n       vector of ints\n \n\n cv               char vector of encoded bytes\n\nC++: mmtf::encodeRunLengthDeltaInt(class std::vector<int, class std::allocator<int> >) --> class std::vector<char, class std::allocator<char> >", pybind11::arg("int_vec"));

	std::cout << "B275_[class std::vector<char, class std::allocator<char> > mmtf::encodeRunLengthFloat(class std::vector<float, class std::allocator<float> >, int)] ";
	// mmtf::encodeRunLengthFloat(class std::vector<float, class std::allocator<float> >, int) file: line:133
	M("mmtf").def("encodeRunLengthFloat", (class std::vector<char, class std::allocator<char> > (*)(class std::vector<float, class std::allocator<float> >, int)) &mmtf::encodeRunLengthFloat, "encode Run Length Float encoding (type 9)\n \n\n     vector of ints\n \n\n    float multiplier\n \n\n cv               char vector of encoded bytes\n\nC++: mmtf::encodeRunLengthFloat(class std::vector<float, class std::allocator<float> >, int) --> class std::vector<char, class std::allocator<char> >", pybind11::arg("floats_in"), pybind11::arg("multiplier"));

	std::cout << "B276_[class std::vector<char, class std::allocator<char> > mmtf::encodeDeltaRecursiveFloat(class std::vector<float, class std::allocator<float> >, int)] ";
	// mmtf::encodeDeltaRecursiveFloat(class std::vector<float, class std::allocator<float> >, int) file: line:140
	M("mmtf").def("encodeDeltaRecursiveFloat", (class std::vector<char, class std::allocator<char> > (*)(class std::vector<float, class std::allocator<float> >, int)) &mmtf::encodeDeltaRecursiveFloat, "encode Delta Recursive Float encoding (type 10)\n \n\n     vector of ints\n \n\n    float multiplier\n \n\n cv               char vector of encoded bytes\n\nC++: mmtf::encodeDeltaRecursiveFloat(class std::vector<float, class std::allocator<float> >, int) --> class std::vector<char, class std::allocator<char> >", pybind11::arg("floats_in"), pybind11::arg("multiplier"));

	std::cout << "B277_[void mmtf::encodeToStream<std::basic_ofstream<char>>(const struct mmtf::StructureData &, class std::basic_ofstream<char> &, int, int, int)] ";
	// mmtf::encodeToStream(const struct mmtf::StructureData &, class std::basic_ofstream<char> &, int, int, int) file: line:35
	M("mmtf").def("encodeToStream", [](const struct mmtf::StructureData & a0, class std::basic_ofstream<char> & a1) -> void { return mmtf::encodeToStream(a0, a1); }, "", pybind11::arg("data"), pybind11::arg("stream"));
	M("mmtf").def("encodeToStream", [](const struct mmtf::StructureData & a0, class std::basic_ofstream<char> & a1, int const & a2) -> void { return mmtf::encodeToStream(a0, a1, a2); }, "", pybind11::arg("data"), pybind11::arg("stream"), pybind11::arg("coord_divider"));
	M("mmtf").def("encodeToStream", [](const struct mmtf::StructureData & a0, class std::basic_ofstream<char> & a1, int const & a2, int const & a3) -> void { return mmtf::encodeToStream(a0, a1, a2, a3); }, "", pybind11::arg("data"), pybind11::arg("stream"), pybind11::arg("coord_divider"), pybind11::arg("occupancy_b_factor_divider"));
	M("mmtf").def("encodeToStream", (void (*)(const struct mmtf::StructureData &, class std::basic_ofstream<char> &, int, int, int)) &mmtf::encodeToStream<std::basic_ofstream<char>>, "C++: mmtf::encodeToStream(const struct mmtf::StructureData &, class std::basic_ofstream<char> &, int, int, int) --> void", pybind11::arg("data"), pybind11::arg("stream"), pybind11::arg("coord_divider"), pybind11::arg("occupancy_b_factor_divider"), pybind11::arg("chain_name_max_length"));

	std::cout << "B278_[void mmtf::encodeToFile(const struct mmtf::StructureData &, const class std::__cxx11::basic_string<char> &, int, int, int)] ";
	// mmtf::encodeToFile(const struct mmtf::StructureData &, const class std::__cxx11::basic_string<char> &, int, int, int) file: line:50
	M("mmtf").def("encodeToFile", [](const struct mmtf::StructureData & a0, const class std::__cxx11::basic_string<char> & a1) -> void { return mmtf::encodeToFile(a0, a1); }, "", pybind11::arg("data"), pybind11::arg("filename"));
	M("mmtf").def("encodeToFile", [](const struct mmtf::StructureData & a0, const class std::__cxx11::basic_string<char> & a1, int const & a2) -> void { return mmtf::encodeToFile(a0, a1, a2); }, "", pybind11::arg("data"), pybind11::arg("filename"), pybind11::arg("coord_divider"));
	M("mmtf").def("encodeToFile", [](const struct mmtf::StructureData & a0, const class std::__cxx11::basic_string<char> & a1, int const & a2, int const & a3) -> void { return mmtf::encodeToFile(a0, a1, a2, a3); }, "", pybind11::arg("data"), pybind11::arg("filename"), pybind11::arg("coord_divider"), pybind11::arg("occupancy_b_factor_divider"));
	M("mmtf").def("encodeToFile", (void (*)(const struct mmtf::StructureData &, const std::string &, int, int, int)) &mmtf::encodeToFile, "Encode an MMTF data structure into a file.\n \n\n          MMTF data structure to be stored\n \n\n      Path to file to load\n \n\n               Divisor for coordinates\n \n\n  Divisor for occupancy and b-factor\n \n\n       Max. length for chain name strings\n \n\n mmtf::EncodeError if an error occured\n Common settings for the divisors are the default values for a loss-less\n encoding and both set to 10 for a lossy variant.\n\nC++: mmtf::encodeToFile(const struct mmtf::StructureData &, const class std::__cxx11::basic_string<char> &, int, int, int) --> void", pybind11::arg("data"), pybind11::arg("filename"), pybind11::arg("coord_divider"), pybind11::arg("occupancy_b_factor_divider"), pybind11::arg("chain_name_max_length"));

}
