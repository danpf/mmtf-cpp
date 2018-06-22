#include <iostream> // --trace
#include <mmtf/binary_decoder.hpp> // mmtf::(anonymous namespace)::arrayCopyBigendian2
#include <mmtf/binary_decoder.hpp> // mmtf::(anonymous namespace)::arrayCopyBigendian4
#include <mmtf/binary_decoder.hpp> // mmtf::(anonymous namespace)::assignBigendian2
#include <mmtf/binary_decoder.hpp> // mmtf::(anonymous namespace)::assignBigendian4

#include <pybind11/pybind11.h>
#include <functional>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_mmtf_binary_decoder_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B138_[void mmtf::(anonymous namespace)::assignBigendian4(void *, const char *)] ";
	// mmtf::(anonymous namespace)::assignBigendian4(void *, const char *) file:mmtf/binary_decoder.hpp line:118
	M("mmtf::(anonymous namespace)").def("assignBigendian4", (void (*)(void *, const char *)) &mmtf::(anonymous namespace)::assignBigendian4, "C++: mmtf::(anonymous namespace)::assignBigendian4(void *, const char *) --> void", pybind11::arg("dst"), pybind11::arg("src"));

	std::cout << "B139_[void mmtf::(anonymous namespace)::assignBigendian2(void *, const char *)] ";
	// mmtf::(anonymous namespace)::assignBigendian2(void *, const char *) file:mmtf/binary_decoder.hpp line:122
	M("mmtf::(anonymous namespace)").def("assignBigendian2", (void (*)(void *, const char *)) &mmtf::(anonymous namespace)::assignBigendian2, "C++: mmtf::(anonymous namespace)::assignBigendian2(void *, const char *) --> void", pybind11::arg("dst"), pybind11::arg("src"));

	std::cout << "B140_[void mmtf::(anonymous namespace)::arrayCopyBigendian4(void *, const char *, unsigned long)] ";
	// mmtf::(anonymous namespace)::arrayCopyBigendian4(void *, const char *, unsigned long) file:mmtf/binary_decoder.hpp line:144
	M("mmtf::(anonymous namespace)").def("arrayCopyBigendian4", (void (*)(void *, const char *, unsigned long)) &mmtf::(anonymous namespace)::arrayCopyBigendian4, "C++: mmtf::(anonymous namespace)::arrayCopyBigendian4(void *, const char *, unsigned long) --> void", pybind11::arg("dst"), pybind11::arg("src"), pybind11::arg("n"));

	std::cout << "B141_[void mmtf::(anonymous namespace)::arrayCopyBigendian2(void *, const char *, unsigned long)] ";
	// mmtf::(anonymous namespace)::arrayCopyBigendian2(void *, const char *, unsigned long) file:mmtf/binary_decoder.hpp line:150
	M("mmtf::(anonymous namespace)").def("arrayCopyBigendian2", (void (*)(void *, const char *, unsigned long)) &mmtf::(anonymous namespace)::arrayCopyBigendian2, "C++: mmtf::(anonymous namespace)::arrayCopyBigendian2(void *, const char *, unsigned long) --> void", pybind11::arg("dst"), pybind11::arg("src"), pybind11::arg("n"));

}
