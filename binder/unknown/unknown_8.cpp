#include <iostream>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_8(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B247_[void mmtf::(anonymous namespace)::assignBigendian4(void *, const char *)] ";
	// mmtf::(anonymous namespace)::assignBigendian4(void *, const char *) file: line:122
	M("mmtf::(anonymous namespace)").def("assignBigendian4", (void (*)(void *, const char *)) &mmtf::(anonymous namespace)::assignBigendian4, "C++: mmtf::(anonymous namespace)::assignBigendian4(void *, const char *) --> void", pybind11::arg("dst"), pybind11::arg("src"));

	std::cout << "B248_[void mmtf::(anonymous namespace)::assignBigendian2(void *, const char *)] ";
	// mmtf::(anonymous namespace)::assignBigendian2(void *, const char *) file: line:126
	M("mmtf::(anonymous namespace)").def("assignBigendian2", (void (*)(void *, const char *)) &mmtf::(anonymous namespace)::assignBigendian2, "C++: mmtf::(anonymous namespace)::assignBigendian2(void *, const char *) --> void", pybind11::arg("dst"), pybind11::arg("src"));

	std::cout << "B249_[void mmtf::(anonymous namespace)::arrayCopyBigendian4(void *, const char *, unsigned long)] ";
	// mmtf::(anonymous namespace)::arrayCopyBigendian4(void *, const char *, unsigned long) file: line:148
	M("mmtf::(anonymous namespace)").def("arrayCopyBigendian4", (void (*)(void *, const char *, unsigned long)) &mmtf::(anonymous namespace)::arrayCopyBigendian4, "C++: mmtf::(anonymous namespace)::arrayCopyBigendian4(void *, const char *, unsigned long) --> void", pybind11::arg("dst"), pybind11::arg("src"), pybind11::arg("n"));

	std::cout << "B250_[void mmtf::(anonymous namespace)::arrayCopyBigendian2(void *, const char *, unsigned long)] ";
	// mmtf::(anonymous namespace)::arrayCopyBigendian2(void *, const char *, unsigned long) file: line:154
	M("mmtf::(anonymous namespace)").def("arrayCopyBigendian2", (void (*)(void *, const char *, unsigned long)) &mmtf::(anonymous namespace)::arrayCopyBigendian2, "C++: mmtf::(anonymous namespace)::arrayCopyBigendian2(void *, const char *, unsigned long) --> void", pybind11::arg("dst"), pybind11::arg("src"), pybind11::arg("n"));

}
