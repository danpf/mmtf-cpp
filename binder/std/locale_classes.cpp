#include <atomic>
#include <fstream>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iostream>
#include <iterator>
#include <locale>
#include <map>
#include <memory>
#include <sstream> // __str__
#include <stdexcept>
#include <string>
#include <system_error>
#include <typeinfo>
#include <utility>
#include <vector>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// std::runtime_error file:stdexcept line:197
struct PyCallBack_runtime_error : public std::runtime_error {
	using std::runtime_error::runtime_error;

	const char * what() const noexcept override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::runtime_error *>(this), "what");
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

void bind_std_locale_classes(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B17_[std::locale] ";
	{ // std::locale file:bits/locale_classes.h line:62
		pybind11::class_<std::locale, std::shared_ptr<std::locale>> cl(M("std"), "locale", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new std::locale(); } ) );
		cl.def( pybind11::init( [](std::locale const &o){ return new std::locale(o); } ) );
		cl.def( pybind11::init<const char *>(), pybind11::arg("__s") );

		cl.def( pybind11::init<const class std::locale &, const char *, int>(), pybind11::arg("__base"), pybind11::arg("__s"), pybind11::arg("__cat") );

		cl.def( pybind11::init<const class std::__cxx11::basic_string<char> &>(), pybind11::arg("__s") );

		cl.def( pybind11::init<const class std::locale &, const class std::__cxx11::basic_string<char> &, int>(), pybind11::arg("__base"), pybind11::arg("__s"), pybind11::arg("__cat") );

		cl.def( pybind11::init<const class std::locale &, const class std::locale &, int>(), pybind11::arg("__base"), pybind11::arg("__add"), pybind11::arg("__cat") );

		cl.def("assign", (const class std::locale & (std::locale::*)(const class std::locale &)) &std::locale::operator=, "C++: std::locale::operator=(const class std::locale &) --> const class std::locale &", pybind11::return_value_policy::automatic, pybind11::arg("__other"));
		cl.def("name", (std::string (std::locale::*)() const) &std::locale::name, "C++: std::locale::name() const --> std::string");
		cl.def("__eq__", (bool (std::locale::*)(const class std::locale &) const) &std::locale::operator==, "C++: std::locale::operator==(const class std::locale &) const --> bool", pybind11::arg("__other"));
		cl.def("__ne__", (bool (std::locale::*)(const class std::locale &) const) &std::locale::operator!=, "C++: std::locale::operator!=(const class std::locale &) const --> bool", pybind11::arg("__other"));
		cl.def_static("global", (class std::locale (*)(const class std::locale &)) &std::locale::global, "C++: std::locale::global(const class std::locale &) --> class std::locale", pybind11::arg("__loc"));
		cl.def_static("classic", (const class std::locale & (*)()) &std::locale::classic, "C++: std::locale::classic() --> const class std::locale &", pybind11::return_value_policy::automatic);
	}
	std::cout << "B18_[std::collate<char>] ";
	std::cout << "B19_[std::collate_byname<char>] ";
	std::cout << "B20_[std::collate<wchar_t>] ";
	std::cout << "B21_[std::collate_byname<wchar_t>] ";
	std::cout << "B22_[std::errc] ";
	std::cout << "B23_[std::__cow_string] ";
	std::cout << "B24_[std::logic_error] ";
	std::cout << "B25_[std::domain_error] ";
	std::cout << "B26_[std::invalid_argument] ";
	std::cout << "B27_[std::length_error] ";
	std::cout << "B28_[std::out_of_range] ";
	std::cout << "B29_[std::runtime_error] ";
	{ // std::runtime_error file:stdexcept line:197
		pybind11::class_<std::runtime_error, std::shared_ptr<std::runtime_error>, PyCallBack_runtime_error, std::exception> cl(M("std"), "runtime_error", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<const class std::__cxx11::basic_string<char> &>(), pybind11::arg("__arg") );

		cl.def( pybind11::init<const char *>(), pybind11::arg("") );

		cl.def( pybind11::init( [](PyCallBack_runtime_error const &o){ return new PyCallBack_runtime_error(o); } ) );
		cl.def( pybind11::init( [](std::runtime_error const &o){ return new std::runtime_error(o); } ) );
		cl.def("assign", (class std::runtime_error & (std::runtime_error::*)(const class std::runtime_error &)) &std::runtime_error::operator=, "C++: std::runtime_error::operator=(const class std::runtime_error &) --> class std::runtime_error &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("what", (const char * (std::runtime_error::*)() const) &std::runtime_error::what, "C++: std::runtime_error::what() const --> const char *", pybind11::return_value_policy::automatic);
	}
	std::cout << "B30_[std::range_error] ";
	std::cout << "B31_[std::overflow_error] ";
	std::cout << "B32_[std::underflow_error] ";
	std::cout << "B33_[std::is_error_code_enum<std::error_code>] ";
	std::cout << "B34_[std::is_error_code_enum<std::_V2::error_category>] ";
	std::cout << "B35_[std::is_error_code_enum<int>] ";
	std::cout << "B36_[std::is_error_code_enum<std::error_condition>] ";
	std::cout << "B37_[std::is_error_code_enum<std::type_info>] ";
	std::cout << "B38_[std::is_error_code_enum<const char *>] ";
	std::cout << "B39_[std::is_error_code_enum<unsigned long>] ";
	std::cout << "B40_[std::is_error_code_enum<long>] ";
	std::cout << "B41_[std::is_error_code_enum<double>] ";
	std::cout << "B42_[std::is_error_code_enum<char>] ";
	std::cout << "B43_[std::is_error_code_enum<std::_Setw>] ";
	std::cout << "B44_[std::is_error_code_enum<std::_Setfill<char>>] ";
	std::cout << "B45_[std::is_error_code_enum<unsigned int>] ";
	std::cout << "B46_[std::is_error_code_enum<msgpack::v2::object>] ";
	std::cout << "B47_[std::is_error_code_enum<unsigned short>] ";
	std::cout << "B48_[std::is_error_code_enum<std::atomic<unsigned int>>] ";
	std::cout << "B49_[std::is_error_code_enum<std::vector<char, std::allocator<char> >>] ";
	std::cout << "B50_[std::is_error_code_enum<std::vector<int, std::allocator<int> >>] ";
	std::cout << "B51_[std::is_error_code_enum<std::vector<std::string, std::allocator<std::string > >>] ";
	std::cout << "B52_[std::is_error_code_enum<std::vector<signed char, std::allocator<signed char> >>] ";
	std::cout << "B53_[std::is_error_code_enum<std::string>] ";
	std::cout << "B54_[std::is_error_code_enum<std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >>] ";
	std::cout << "B55_[std::is_error_code_enum<std::vector<float, std::allocator<float> >>] ";
	std::cout << "B56_[std::is_error_code_enum<std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >>] ";
	std::cout << "B57_[std::is_error_code_enum<std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >>] ";
	std::cout << "B58_[std::is_error_code_enum<std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >>] ";
	std::cout << "B59_[std::is_error_code_enum<std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >>] ";
	std::cout << "B60_[std::is_error_code_enum<std::_Setprecision>] ";
	std::cout << "B61_[std::is_error_code_enum<float>] ";
	std::cout << "B62_[std::is_error_code_enum<msgpack::v1::type::object_type>] ";
	std::cout << "B63_[std::is_error_code_enum<std::_Rb_tree_iterator<std::pair<const std::string, msgpack::v2::object *> >>] ";
	std::cout << "B64_[std::is_error_code_enum<std::_Rb_tree_const_iterator<std::string >>] ";
	std::cout << "B65_[std::is_error_code_enum<std::move_iterator<msgpack::v1::detail::unpack_stack *>>] ";
	std::cout << "B66_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const msgpack::v1::detail::unpack_stack *, std::vector<msgpack::v1::detail::unpack_stack, std::allocator<msgpack::v1::detail::unpack_stack> > >>] ";
	std::cout << "B67_[std::is_error_code_enum<std::move_iterator<msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem *>>] ";
	std::cout << "B68_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem *, std::vector<msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem, std::allocator<msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem> > >>] ";
	std::cout << "B69_[std::is_error_code_enum<std::move_iterator<msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem *>>] ";
	std::cout << "B70_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem *, std::vector<msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem, std::allocator<msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem> > >>] ";
	std::cout << "B71_[std::is_error_code_enum<std::_Rb_tree_iterator<std::pair<const std::string, const msgpack::v2::object *> >>] ";
	std::cout << "B72_[std::is_error_code_enum<std::_Rb_tree_const_iterator<std::pair<const std::string, const msgpack::v2::object *> >>] ";
	std::cout << "B73_[std::is_error_code_enum<std::move_iterator<mmtf::Transform *>>] ";
	std::cout << "B74_[std::is_error_code_enum<std::allocator<char>>] ";
	std::cout << "B75_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const std::string *, std::vector<std::string, std::allocator<std::string > > >>] ";
	std::cout << "B76_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const char *, std::vector<char, std::allocator<char> > >>] ";
	std::cout << "B77_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const float *, std::vector<float, std::allocator<float> > >>] ";
	std::cout << "B78_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const signed char *, std::vector<signed char, std::allocator<signed char> > >>] ";
	std::cout << "B79_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const short *, std::vector<short, std::allocator<short> > >>] ";
	std::cout << "B80_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const int *, std::vector<int, std::allocator<int> > >>] ";
	std::cout << "B81_[std::is_error_code_enum<std::move_iterator<std::string *>>] ";
	std::cout << "B82_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<char *, std::string >>] ";
	std::cout << "B83_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const char *, std::string >>] ";
	std::cout << "B84_[std::is_error_code_enum<std::_Rb_tree_iterator<std::string >>] ";
	std::cout << "B85_[std::is_error_code_enum<std::move_iterator<std::vector<float, std::allocator<float> > *>>] ";
	std::cout << "B86_[std::is_error_code_enum<std::move_iterator<mmtf::BioAssembly *>>] ";
	std::cout << "B87_[std::is_error_code_enum<std::move_iterator<mmtf::Entity *>>] ";
	std::cout << "B88_[std::is_error_code_enum<std::move_iterator<mmtf::GroupType *>>] ";
	std::cout << "B89_[std::is_error_code_enum<std::basic_filebuf<char> *>] ";
	std::cout << "B90_[std::is_error_code_enum<std::_Rb_tree_iterator<std::pair<const std::string, msgpack::v2::object> >>] ";
	std::cout << "B91_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const mmtf::GroupType *, std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> > >>] ";
	std::cout << "B92_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const mmtf::BioAssembly *, std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> > >>] ";
	std::cout << "B93_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const mmtf::Transform *, std::vector<mmtf::Transform, std::allocator<mmtf::Transform> > >>] ";
	std::cout << "B94_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const mmtf::Entity *, std::vector<mmtf::Entity, std::allocator<mmtf::Entity> > >>] ";
	std::cout << "B95_[std::is_error_code_enum<__gnu_cxx::__normal_iterator<const std::vector<float, std::allocator<float> > *, std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > > >>] ";
	std::cout << "B96_[std::is_error_code_enum<std::_Rb_tree_const_iterator<std::pair<const std::string, msgpack::v2::object> >>] ";
	std::cout << "B97_[std::is_error_condition_enum<std::error_condition>] ";
	std::cout << "B98_[std::is_error_condition_enum<std::_V2::error_category>] ";
	std::cout << "B99_[std::is_error_condition_enum<std::error_code>] ";
	std::cout << "B100_[std::is_error_condition_enum<std::type_info>] ";
	std::cout << "B101_[std::is_error_condition_enum<std::atomic<unsigned int>>] ";
	std::cout << "B102_[std::is_error_condition_enum<std::vector<char, std::allocator<char> >>] ";
	std::cout << "B103_[std::is_error_condition_enum<std::vector<int, std::allocator<int> >>] ";
	std::cout << "B104_[std::is_error_condition_enum<std::vector<std::string, std::allocator<std::string > >>] ";
	std::cout << "B105_[std::is_error_condition_enum<std::vector<signed char, std::allocator<signed char> >>] ";
	std::cout << "B106_[std::is_error_condition_enum<std::string>] ";
	std::cout << "B107_[std::is_error_condition_enum<std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >>] ";
	std::cout << "B108_[std::is_error_condition_enum<std::vector<float, std::allocator<float> >>] ";
	std::cout << "B109_[std::is_error_condition_enum<std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >>] ";
	std::cout << "B110_[std::is_error_condition_enum<std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >>] ";
	std::cout << "B111_[std::is_error_condition_enum<std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >>] ";
	std::cout << "B112_[std::is_error_condition_enum<std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >>] ";
	std::cout << "B113_[std::is_error_condition_enum<std::_Rb_tree_iterator<std::pair<const std::string, msgpack::v2::object *> >>] ";
	std::cout << "B114_[std::is_error_condition_enum<std::_Rb_tree_const_iterator<std::string >>] ";
	std::cout << "B115_[std::is_error_condition_enum<std::move_iterator<msgpack::v1::detail::unpack_stack *>>] ";
	std::cout << "B116_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const msgpack::v1::detail::unpack_stack *, std::vector<msgpack::v1::detail::unpack_stack, std::allocator<msgpack::v1::detail::unpack_stack> > >>] ";
	std::cout << "B117_[std::is_error_condition_enum<std::move_iterator<msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem *>>] ";
	std::cout << "B118_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem *, std::vector<msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem, std::allocator<msgpack::v2::detail::context<msgpack::v2::unpacker>::unpack_stack::stack_elem> > >>] ";
	std::cout << "B119_[std::is_error_condition_enum<std::move_iterator<msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem *>>] ";
	std::cout << "B120_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem *, std::vector<msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem, std::allocator<msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem> > >>] ";
	std::cout << "B121_[std::is_error_condition_enum<std::_Rb_tree_iterator<std::pair<const std::string, const msgpack::v2::object *> >>] ";
	std::cout << "B122_[std::is_error_condition_enum<std::_Rb_tree_const_iterator<std::pair<const std::string, const msgpack::v2::object *> >>] ";
	std::cout << "B123_[std::is_error_condition_enum<std::move_iterator<mmtf::Transform *>>] ";
	std::cout << "B124_[std::is_error_condition_enum<std::allocator<char>>] ";
	std::cout << "B125_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const std::string *, std::vector<std::string, std::allocator<std::string > > >>] ";
	std::cout << "B126_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const char *, std::vector<char, std::allocator<char> > >>] ";
	std::cout << "B127_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const float *, std::vector<float, std::allocator<float> > >>] ";
	std::cout << "B128_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const signed char *, std::vector<signed char, std::allocator<signed char> > >>] ";
	std::cout << "B129_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const short *, std::vector<short, std::allocator<short> > >>] ";
	std::cout << "B130_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const int *, std::vector<int, std::allocator<int> > >>] ";
	std::cout << "B131_[std::is_error_condition_enum<std::move_iterator<std::string *>>] ";
	std::cout << "B132_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<char *, std::string >>] ";
	std::cout << "B133_[std::is_error_condition_enum<__gnu_cxx::__normal_iterator<const char *, std::string >>] ";
}
