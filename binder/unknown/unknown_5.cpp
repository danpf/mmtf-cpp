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

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B220_[bool mmtf::isDefaultValue<std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >>(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &)] ";
	// mmtf::isDefaultValue(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &) file: line:376
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &)) &mmtf::isDefaultValue<std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >>, "C++: mmtf::isDefaultValue(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &) --> bool", pybind11::arg("value"));

	std::cout << "B221_[bool mmtf::isDefaultValue<std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >>(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)] ";
	// mmtf::isDefaultValue(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) file: line:376
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)) &mmtf::isDefaultValue<std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >>, "C++: mmtf::isDefaultValue(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) --> bool", pybind11::arg("value"));

	std::cout << "B222_[bool mmtf::isDefaultValue<std::string>(const class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &)] ";
	// mmtf::isDefaultValue(const class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<std::string, class std::allocator<std::string > > &)) &mmtf::isDefaultValue<std::string>, "C++: mmtf::isDefaultValue(const class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &) --> bool", pybind11::arg("value"));

	std::cout << "B223_[bool mmtf::isDefaultValue<int>(const class std::vector<int, class std::allocator<int> > &)] ";
	// mmtf::isDefaultValue(const class std::vector<int, class std::allocator<int> > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<int, class std::allocator<int> > &)) &mmtf::isDefaultValue<int>, "C++: mmtf::isDefaultValue(const class std::vector<int, class std::allocator<int> > &) --> bool", pybind11::arg("value"));

	std::cout << "B224_[bool mmtf::isDefaultValue<char>(const class std::vector<char, class std::allocator<char> > &)] ";
	// mmtf::isDefaultValue(const class std::vector<char, class std::allocator<char> > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<char, class std::allocator<char> > &)) &mmtf::isDefaultValue<char>, "C++: mmtf::isDefaultValue(const class std::vector<char, class std::allocator<char> > &) --> bool", pybind11::arg("value"));

	std::cout << "B225_[bool mmtf::isDefaultValue<float>(const class std::vector<float, class std::allocator<float> > &)] ";
	// mmtf::isDefaultValue(const class std::vector<float, class std::allocator<float> > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<float, class std::allocator<float> > &)) &mmtf::isDefaultValue<float>, "C++: mmtf::isDefaultValue(const class std::vector<float, class std::allocator<float> > &) --> bool", pybind11::arg("value"));

	std::cout << "B226_[bool mmtf::isDefaultValue<signed char>(const class std::vector<signed char, class std::allocator<signed char> > &)] ";
	// mmtf::isDefaultValue(const class std::vector<signed char, class std::allocator<signed char> > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<signed char, class std::allocator<signed char> > &)) &mmtf::isDefaultValue<signed char>, "C++: mmtf::isDefaultValue(const class std::vector<signed char, class std::allocator<signed char> > &) --> bool", pybind11::arg("value"));

	std::cout << "B227_[bool mmtf::isDefaultValue<mmtf::BioAssembly>(const class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &)] ";
	// mmtf::isDefaultValue(const class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &)) &mmtf::isDefaultValue<mmtf::BioAssembly>, "C++: mmtf::isDefaultValue(const class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &) --> bool", pybind11::arg("value"));

	std::cout << "B228_[bool mmtf::isDefaultValue<mmtf::Entity>(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &)] ";
	// mmtf::isDefaultValue(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &)) &mmtf::isDefaultValue<mmtf::Entity>, "C++: mmtf::isDefaultValue(const class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &) --> bool", pybind11::arg("value"));

	std::cout << "B229_[bool mmtf::isDefaultValue<std::vector<float, std::allocator<float> >>(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)] ";
	// mmtf::isDefaultValue(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) file: line:380
	M("mmtf").def("isDefaultValue", (bool (*)(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)) &mmtf::isDefaultValue<std::vector<float, std::allocator<float> >>, "C++: mmtf::isDefaultValue(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) --> bool", pybind11::arg("value"));

	std::cout << "B230_[bool mmtf::isDefaultValue<std::string>(const class std::__cxx11::basic_string<char> &)] ";
	// mmtf::isDefaultValue(const class std::__cxx11::basic_string<char> &) file: line:282
	M("mmtf").def("isDefaultValue", (bool (*)(const std::string &)) &mmtf::isDefaultValue<std::string>, "C++: mmtf::isDefaultValue(const class std::__cxx11::basic_string<char> &) --> bool", pybind11::arg("value"));

	std::cout << "B231_[bool mmtf::isDefaultValue<msgpack::v2::object>(const struct msgpack::v2::object &)] ";
	// mmtf::isDefaultValue(const struct msgpack::v2::object &) file: line:284
	M("mmtf").def("isDefaultValue", (bool (*)(const struct msgpack::v2::object &)) &mmtf::isDefaultValue<msgpack::v2::object>, "C++: mmtf::isDefaultValue(const struct msgpack::v2::object &) --> bool", pybind11::arg("value"));

	std::cout << "B232_[void mmtf::setDefaultValue<float>(float &)] ";
	// mmtf::setDefaultValue(float &) file: line:393
	M("mmtf").def("setDefaultValue", (void (*)(float &)) &mmtf::setDefaultValue<float>, "C++: mmtf::setDefaultValue(float &) --> void", pybind11::arg("value"));

	std::cout << "B233_[bool mmtf::is_hetatm(const char *)] ";
	// mmtf::is_hetatm(const char *) file: line:304
	M("mmtf").def("is_hetatm", (bool (*)(const char *)) &mmtf::is_hetatm, "Check if type is hetatm\n \n\n   cstring of group.chemCompType\n \n\n True if is a HETATM \n Used when printing this struct, also all chemCompTypes are listed, but\n the non-HETATM ones are commented out for reference\n Relevant threads:\n https://github.com/rcsb/mmtf/issues/28\n http://mmcif.wwpdb.org/dictionaries/mmcif_pdbx_v50.dic/Items/_chem_comp.type.html\n\nC++: mmtf::is_hetatm(const char *) --> bool", pybind11::arg("type"));

}
