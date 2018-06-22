#include <initializer_list>
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

void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B234_[bool mmtf::(anonymous namespace)::isValidDateFormatOptional(const class std::__cxx11::basic_string<char> &)] ";
	// mmtf::(anonymous namespace)::isValidDateFormatOptional(const class std::__cxx11::basic_string<char> &) file: line:315
	M("mmtf::(anonymous namespace)").def("isValidDateFormatOptional", (bool (*)(const std::string &)) &mmtf::(anonymous namespace)::isValidDateFormatOptional, "C++: mmtf::(anonymous namespace)::isValidDateFormatOptional(const class std::__cxx11::basic_string<char> &) --> bool", pybind11::arg("s"));

	std::cout << "B235_[bool mmtf::(anonymous namespace)::hasRightSizeOptional<float>(const class std::vector<float, class std::allocator<float> > &, int)] ";
	// mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<float, class std::allocator<float> > &, int) file: line:335
	M("mmtf::(anonymous namespace)").def("hasRightSizeOptional", (bool (*)(const class std::vector<float, class std::allocator<float> > &, int)) &mmtf::(anonymous namespace)::hasRightSizeOptional<float>, "C++: mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<float, class std::allocator<float> > &, int) --> bool", pybind11::arg("v"), pybind11::arg("exp_size"));

	std::cout << "B236_[bool mmtf::(anonymous namespace)::hasRightSizeOptional<int>(const class std::vector<int, class std::allocator<int> > &, int)] ";
	// mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<int, class std::allocator<int> > &, int) file: line:335
	M("mmtf::(anonymous namespace)").def("hasRightSizeOptional", (bool (*)(const class std::vector<int, class std::allocator<int> > &, int)) &mmtf::(anonymous namespace)::hasRightSizeOptional<int>, "C++: mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<int, class std::allocator<int> > &, int) --> bool", pybind11::arg("v"), pybind11::arg("exp_size"));

	std::cout << "B237_[bool mmtf::(anonymous namespace)::hasRightSizeOptional<char>(const class std::vector<char, class std::allocator<char> > &, int)] ";
	// mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<char, class std::allocator<char> > &, int) file: line:335
	M("mmtf::(anonymous namespace)").def("hasRightSizeOptional", (bool (*)(const class std::vector<char, class std::allocator<char> > &, int)) &mmtf::(anonymous namespace)::hasRightSizeOptional<char>, "C++: mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<char, class std::allocator<char> > &, int) --> bool", pybind11::arg("v"), pybind11::arg("exp_size"));

	std::cout << "B238_[bool mmtf::(anonymous namespace)::hasRightSizeOptional<signed char>(const class std::vector<signed char, class std::allocator<signed char> > &, int)] ";
	// mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<signed char, class std::allocator<signed char> > &, int) file: line:335
	M("mmtf::(anonymous namespace)").def("hasRightSizeOptional", (bool (*)(const class std::vector<signed char, class std::allocator<signed char> > &, int)) &mmtf::(anonymous namespace)::hasRightSizeOptional<signed char>, "C++: mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<signed char, class std::allocator<signed char> > &, int) --> bool", pybind11::arg("v"), pybind11::arg("exp_size"));

	std::cout << "B239_[bool mmtf::(anonymous namespace)::hasRightSizeOptional<std::string>(const class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &, int)] ";
	// mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &, int) file: line:335
	M("mmtf::(anonymous namespace)").def("hasRightSizeOptional", (bool (*)(const class std::vector<std::string, class std::allocator<std::string > > &, int)) &mmtf::(anonymous namespace)::hasRightSizeOptional<std::string>, "C++: mmtf::(anonymous namespace)::hasRightSizeOptional(const class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &, int) --> bool", pybind11::arg("v"), pybind11::arg("exp_size"));

	std::cout << "B240_[bool mmtf::(anonymous namespace)::hasValidIndices<int,int>(const int *, unsigned long, int)] ";
	// mmtf::(anonymous namespace)::hasValidIndices(const int *, unsigned long, int) file: line:341
	M("mmtf::(anonymous namespace)").def("hasValidIndices", (bool (*)(const int *, unsigned long, int)) &mmtf::(anonymous namespace)::hasValidIndices<int,int>, "C++: mmtf::(anonymous namespace)::hasValidIndices(const int *, unsigned long, int) --> bool", pybind11::arg("v"), pybind11::arg("size"), pybind11::arg("num"));

	std::cout << "B241_[bool mmtf::(anonymous namespace)::hasValidIndices<int,unsigned long>(const int *, unsigned long, unsigned long)] ";
	// mmtf::(anonymous namespace)::hasValidIndices(const int *, unsigned long, unsigned long) file: line:341
	M("mmtf::(anonymous namespace)").def("hasValidIndices", (bool (*)(const int *, unsigned long, unsigned long)) &mmtf::(anonymous namespace)::hasValidIndices<int,unsigned long>, "C++: mmtf::(anonymous namespace)::hasValidIndices(const int *, unsigned long, unsigned long) --> bool", pybind11::arg("v"), pybind11::arg("size"), pybind11::arg("num"));

	std::cout << "B242_[bool mmtf::(anonymous namespace)::hasValidIndices<int,int>(const class std::vector<int, class std::allocator<int> > &, int)] ";
	// mmtf::(anonymous namespace)::hasValidIndices(const class std::vector<int, class std::allocator<int> > &, int) file: line:349
	M("mmtf::(anonymous namespace)").def("hasValidIndices", (bool (*)(const class std::vector<int, class std::allocator<int> > &, int)) &mmtf::(anonymous namespace)::hasValidIndices<int,int>, "C++: mmtf::(anonymous namespace)::hasValidIndices(const class std::vector<int, class std::allocator<int> > &, int) --> bool", pybind11::arg("v"), pybind11::arg("num"));

	std::cout << "B243_[bool mmtf::(anonymous namespace)::hasValidIndices<int,unsigned long>(const class std::vector<int, class std::allocator<int> > &, unsigned long)] ";
	// mmtf::(anonymous namespace)::hasValidIndices(const class std::vector<int, class std::allocator<int> > &, unsigned long) file: line:349
	M("mmtf::(anonymous namespace)").def("hasValidIndices", (bool (*)(const class std::vector<int, class std::allocator<int> > &, unsigned long)) &mmtf::(anonymous namespace)::hasValidIndices<int,unsigned long>, "C++: mmtf::(anonymous namespace)::hasValidIndices(const class std::vector<int, class std::allocator<int> > &, unsigned long) --> bool", pybind11::arg("v"), pybind11::arg("num"));

}
