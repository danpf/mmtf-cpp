#include <initializer_list>
#include <ios>
#include <iostream>
#include <iterator>
#include <locale>
#include <memory>
#include <sstream> // __str__
#include <streambuf>
#include <string>
#include <system_error>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// std::basic_streambuf file:bits/streambuf.tcc line:149
struct PyCallBack_streambuf : public std::streambuf {
	using std::streambuf::basic_streambuf;

	void imbue(const class std::locale & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "imbue");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return basic_streambuf::imbue(a0);
	}
	class std::basic_streambuf<char> * setbuf(char * a0, long a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "setbuf");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<class std::basic_streambuf<char> *>::value) {
				static pybind11::detail::overload_caster_t<class std::basic_streambuf<char> *> caster;
				return pybind11::detail::cast_ref<class std::basic_streambuf<char> *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<class std::basic_streambuf<char> *>(std::move(o));
		}
		return basic_streambuf::setbuf(a0, a1);
	}
	int sync() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "sync");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return basic_streambuf::sync();
	}
	long showmanyc() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "showmanyc");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<long>::value) {
				static pybind11::detail::overload_caster_t<long> caster;
				return pybind11::detail::cast_ref<long>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<long>(std::move(o));
		}
		return basic_streambuf::showmanyc();
	}
	long xsgetn(char * a0, long a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "xsgetn");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<long>::value) {
				static pybind11::detail::overload_caster_t<long> caster;
				return pybind11::detail::cast_ref<long>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<long>(std::move(o));
		}
		return basic_streambuf::xsgetn(a0, a1);
	}
	int underflow() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "underflow");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return basic_streambuf::underflow();
	}
	int uflow() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "uflow");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return basic_streambuf::uflow();
	}
	int pbackfail(int a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "pbackfail");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return basic_streambuf::pbackfail(a0);
	}
	long xsputn(const char * a0, long a1) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "xsputn");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<long>::value) {
				static pybind11::detail::overload_caster_t<long> caster;
				return pybind11::detail::cast_ref<long>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<long>(std::move(o));
		}
		return basic_streambuf::xsputn(a0, a1);
	}
	int overflow(int a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const std::streambuf *>(this), "overflow");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::overload_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return basic_streambuf::overflow(a0);
	}
};

void bind_std_ios_base(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B134_[std::_Ios_Fmtflags] ";
	// std::_Ios_Fmtflags file:bits/ios_base.h line:57
	pybind11::enum_<std::_Ios_Fmtflags>(M("std"), "_Ios_Fmtflags", "")
		.value("_S_boolalpha", std::_Ios_Fmtflags::_S_boolalpha)
		.value("_S_dec", std::_Ios_Fmtflags::_S_dec)
		.value("_S_fixed", std::_Ios_Fmtflags::_S_fixed)
		.value("_S_hex", std::_Ios_Fmtflags::_S_hex)
		.value("_S_internal", std::_Ios_Fmtflags::_S_internal)
		.value("_S_left", std::_Ios_Fmtflags::_S_left)
		.value("_S_oct", std::_Ios_Fmtflags::_S_oct)
		.value("_S_right", std::_Ios_Fmtflags::_S_right)
		.value("_S_scientific", std::_Ios_Fmtflags::_S_scientific)
		.value("_S_showbase", std::_Ios_Fmtflags::_S_showbase)
		.value("_S_showpoint", std::_Ios_Fmtflags::_S_showpoint)
		.value("_S_showpos", std::_Ios_Fmtflags::_S_showpos)
		.value("_S_skipws", std::_Ios_Fmtflags::_S_skipws)
		.value("_S_unitbuf", std::_Ios_Fmtflags::_S_unitbuf)
		.value("_S_uppercase", std::_Ios_Fmtflags::_S_uppercase)
		.value("_S_adjustfield", std::_Ios_Fmtflags::_S_adjustfield)
		.value("_S_basefield", std::_Ios_Fmtflags::_S_basefield)
		.value("_S_floatfield", std::_Ios_Fmtflags::_S_floatfield)
		.value("_S_ios_fmtflags_end", std::_Ios_Fmtflags::_S_ios_fmtflags_end)
		.value("_S_ios_fmtflags_max", std::_Ios_Fmtflags::_S_ios_fmtflags_max)
		.value("_S_ios_fmtflags_min", std::_Ios_Fmtflags::_S_ios_fmtflags_min)
		.export_values();

;

	std::cout << "B135_[std::_Ios_Openmode] ";
	// std::_Ios_Openmode file:bits/ios_base.h line:111
	pybind11::enum_<std::_Ios_Openmode>(M("std"), "_Ios_Openmode", "")
		.value("_S_app", std::_Ios_Openmode::_S_app)
		.value("_S_ate", std::_Ios_Openmode::_S_ate)
		.value("_S_bin", std::_Ios_Openmode::_S_bin)
		.value("_S_in", std::_Ios_Openmode::_S_in)
		.value("_S_out", std::_Ios_Openmode::_S_out)
		.value("_S_trunc", std::_Ios_Openmode::_S_trunc)
		.value("_S_ios_openmode_end", std::_Ios_Openmode::_S_ios_openmode_end)
		.value("_S_ios_openmode_max", std::_Ios_Openmode::_S_ios_openmode_max)
		.value("_S_ios_openmode_min", std::_Ios_Openmode::_S_ios_openmode_min)
		.export_values();

;

	std::cout << "B136_[std::_Ios_Iostate] ";
	// std::_Ios_Iostate file:bits/ios_base.h line:153
	pybind11::enum_<std::_Ios_Iostate>(M("std"), "_Ios_Iostate", "")
		.value("_S_goodbit", std::_Ios_Iostate::_S_goodbit)
		.value("_S_badbit", std::_Ios_Iostate::_S_badbit)
		.value("_S_eofbit", std::_Ios_Iostate::_S_eofbit)
		.value("_S_failbit", std::_Ios_Iostate::_S_failbit)
		.value("_S_ios_iostate_end", std::_Ios_Iostate::_S_ios_iostate_end)
		.value("_S_ios_iostate_max", std::_Ios_Iostate::_S_ios_iostate_max)
		.value("_S_ios_iostate_min", std::_Ios_Iostate::_S_ios_iostate_min)
		.export_values();

;

	std::cout << "B137_[std::_Ios_Seekdir] ";
	// std::_Ios_Seekdir file:bits/ios_base.h line:193
	pybind11::enum_<std::_Ios_Seekdir>(M("std"), "_Ios_Seekdir", "")
		.value("_S_beg", std::_Ios_Seekdir::_S_beg)
		.value("_S_cur", std::_Ios_Seekdir::_S_cur)
		.value("_S_end", std::_Ios_Seekdir::_S_end)
		.value("_S_ios_seekdir_end", std::_Ios_Seekdir::_S_ios_seekdir_end)
		.export_values();

;

	std::cout << "B138_[std::io_errc] ";
	std::cout << "B139_[std::is_error_code_enum<std::io_errc>] ";
	std::cout << "B140_[const class std::_V2::error_category & std::iostream_category()] ";
	std::cout << "B141_[struct std::error_code std::make_error_code(enum std::io_errc)] ";
	std::cout << "B142_[struct std::error_condition std::make_error_condition(enum std::io_errc)] ";
	std::cout << "B143_[std::ios_base] ";
	{ // std::ios_base file:bits/ios_base.h line:228
		pybind11::class_<std::ios_base, std::shared_ptr<std::ios_base>> cl(M("std"), "ios_base", "");
		pybind11::handle cl_type = cl;

		pybind11::enum_<std::ios_base::event>(cl, "event", "")
			.value("erase_event", std::ios_base::event::erase_event)
			.value("imbue_event", std::ios_base::event::imbue_event)
			.value("copyfmt_event", std::ios_base::event::copyfmt_event)
			.export_values();

		cl.def("flags", (enum std::_Ios_Fmtflags (std::ios_base::*)() const) &std::ios_base::flags, "C++: std::ios_base::flags() const --> enum std::_Ios_Fmtflags");
		cl.def("flags", (enum std::_Ios_Fmtflags (std::ios_base::*)(enum std::_Ios_Fmtflags)) &std::ios_base::flags, "C++: std::ios_base::flags(enum std::_Ios_Fmtflags) --> enum std::_Ios_Fmtflags", pybind11::arg("__fmtfl"));
		cl.def("setf", (enum std::_Ios_Fmtflags (std::ios_base::*)(enum std::_Ios_Fmtflags)) &std::ios_base::setf, "C++: std::ios_base::setf(enum std::_Ios_Fmtflags) --> enum std::_Ios_Fmtflags", pybind11::arg("__fmtfl"));
		cl.def("setf", (enum std::_Ios_Fmtflags (std::ios_base::*)(enum std::_Ios_Fmtflags, enum std::_Ios_Fmtflags)) &std::ios_base::setf, "C++: std::ios_base::setf(enum std::_Ios_Fmtflags, enum std::_Ios_Fmtflags) --> enum std::_Ios_Fmtflags", pybind11::arg("__fmtfl"), pybind11::arg("__mask"));
		cl.def("unsetf", (void (std::ios_base::*)(enum std::_Ios_Fmtflags)) &std::ios_base::unsetf, "C++: std::ios_base::unsetf(enum std::_Ios_Fmtflags) --> void", pybind11::arg("__mask"));
		cl.def("precision", (long (std::ios_base::*)() const) &std::ios_base::precision, "C++: std::ios_base::precision() const --> long");
		cl.def("precision", (long (std::ios_base::*)(long)) &std::ios_base::precision, "C++: std::ios_base::precision(long) --> long", pybind11::arg("__prec"));
		cl.def("width", (long (std::ios_base::*)() const) &std::ios_base::width, "C++: std::ios_base::width() const --> long");
		cl.def("width", (long (std::ios_base::*)(long)) &std::ios_base::width, "C++: std::ios_base::width(long) --> long", pybind11::arg("__wide"));
		cl.def_static("sync_with_stdio", []() -> bool { return std::ios_base::sync_with_stdio(); }, "");
		cl.def_static("sync_with_stdio", (bool (*)(bool)) &std::ios_base::sync_with_stdio, "C++: std::ios_base::sync_with_stdio(bool) --> bool", pybind11::arg("__sync"));
		cl.def("imbue", (class std::locale (std::ios_base::*)(const class std::locale &)) &std::ios_base::imbue, "C++: std::ios_base::imbue(const class std::locale &) --> class std::locale", pybind11::arg("__loc"));
		cl.def("getloc", (class std::locale (std::ios_base::*)() const) &std::ios_base::getloc, "C++: std::ios_base::getloc() const --> class std::locale");
		cl.def("_M_getloc", (const class std::locale & (std::ios_base::*)() const) &std::ios_base::_M_getloc, "C++: std::ios_base::_M_getloc() const --> const class std::locale &", pybind11::return_value_policy::automatic);
		cl.def_static("xalloc", (int (*)()) &std::ios_base::xalloc, "C++: std::ios_base::xalloc() --> int");
		cl.def("iword", (long & (std::ios_base::*)(int)) &std::ios_base::iword, "C++: std::ios_base::iword(int) --> long &", pybind11::return_value_policy::automatic, pybind11::arg("__ix"));
		cl.def("pword", (void *& (std::ios_base::*)(int)) &std::ios_base::pword, "C++: std::ios_base::pword(int) --> void *&", pybind11::return_value_policy::automatic, pybind11::arg("__ix"));
	}
	std::cout << "B144_[class std::ios_base & std::boolalpha(class std::ios_base &)] ";
	std::cout << "B145_[class std::ios_base & std::noboolalpha(class std::ios_base &)] ";
	std::cout << "B146_[class std::ios_base & std::showbase(class std::ios_base &)] ";
	std::cout << "B147_[class std::ios_base & std::noshowbase(class std::ios_base &)] ";
	std::cout << "B148_[class std::ios_base & std::showpoint(class std::ios_base &)] ";
	std::cout << "B149_[class std::ios_base & std::noshowpoint(class std::ios_base &)] ";
	std::cout << "B150_[class std::ios_base & std::showpos(class std::ios_base &)] ";
	std::cout << "B151_[class std::ios_base & std::noshowpos(class std::ios_base &)] ";
	std::cout << "B152_[class std::ios_base & std::skipws(class std::ios_base &)] ";
	std::cout << "B153_[class std::ios_base & std::noskipws(class std::ios_base &)] ";
	std::cout << "B154_[class std::ios_base & std::uppercase(class std::ios_base &)] ";
	std::cout << "B155_[class std::ios_base & std::nouppercase(class std::ios_base &)] ";
	std::cout << "B156_[class std::ios_base & std::unitbuf(class std::ios_base &)] ";
	std::cout << "B157_[class std::ios_base & std::nounitbuf(class std::ios_base &)] ";
	std::cout << "B158_[class std::ios_base & std::internal(class std::ios_base &)] ";
	std::cout << "B159_[class std::ios_base & std::left(class std::ios_base &)] ";
	std::cout << "B160_[class std::ios_base & std::right(class std::ios_base &)] ";
	std::cout << "B161_[class std::ios_base & std::dec(class std::ios_base &)] ";
	std::cout << "B162_[class std::ios_base & std::hex(class std::ios_base &)] ";
	std::cout << "B163_[class std::ios_base & std::oct(class std::ios_base &)] ";
	std::cout << "B164_[class std::ios_base & std::fixed(class std::ios_base &)] ";
	std::cout << "B165_[class std::ios_base & std::scientific(class std::ios_base &)] ";
	std::cout << "B166_[class std::ios_base & std::hexfloat(class std::ios_base &)] ";
	std::cout << "B167_[class std::ios_base & std::defaultfloat(class std::ios_base &)] ";
	std::cout << "B168_[long std::__copy_streambufs_eof<char,std::char_traits<char>>(class std::basic_streambuf<char> *, class std::basic_streambuf<char> *, bool &)] ";
	std::cout << "B169_[long std::__copy_streambufs_eof<wchar_t,std::char_traits<wchar_t>>(class std::basic_streambuf<wchar_t> *, class std::basic_streambuf<wchar_t> *, bool &)] ";
	std::cout << "B170_[long std::__copy_streambufs<char,std::char_traits<char>>(class std::basic_streambuf<char> *, class std::basic_streambuf<char> *)] ";
	std::cout << "B171_[long std::__copy_streambufs<wchar_t,std::char_traits<wchar_t>>(class std::basic_streambuf<wchar_t> *, class std::basic_streambuf<wchar_t> *)] ";
	std::cout << "B172_[std::streambuf] ";
	{ // std::basic_streambuf file:bits/streambuf.tcc line:149
		pybind11::class_<std::streambuf, std::shared_ptr<std::streambuf>, PyCallBack_streambuf> cl(M("std"), "streambuf", "");
		pybind11::handle cl_type = cl;

		cl.def("pubimbue", (class std::locale (std::streambuf::*)(const class std::locale &)) &std::basic_streambuf<char, std::char_traits<char> >::pubimbue, "C++: std::basic_streambuf<char, std::char_traits<char> >::pubimbue(const class std::locale &) --> class std::locale", pybind11::arg("__loc"));
		cl.def("getloc", (class std::locale (std::streambuf::*)() const) &std::basic_streambuf<char, std::char_traits<char> >::getloc, "C++: std::basic_streambuf<char, std::char_traits<char> >::getloc() const --> class std::locale");
		cl.def("pubsetbuf", (class std::basic_streambuf<char> * (std::streambuf::*)(char *, long)) &std::basic_streambuf<char, std::char_traits<char> >::pubsetbuf, "C++: std::basic_streambuf<char, std::char_traits<char> >::pubsetbuf(char *, long) --> class std::basic_streambuf<char> *", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("pubsync", (int (std::streambuf::*)()) &std::basic_streambuf<char, std::char_traits<char> >::pubsync, "C++: std::basic_streambuf<char, std::char_traits<char> >::pubsync() --> int");
		cl.def("in_avail", (long (std::streambuf::*)()) &std::basic_streambuf<char, std::char_traits<char> >::in_avail, "C++: std::basic_streambuf<char, std::char_traits<char> >::in_avail() --> long");
		cl.def("snextc", (int (std::streambuf::*)()) &std::basic_streambuf<char, std::char_traits<char> >::snextc, "C++: std::basic_streambuf<char, std::char_traits<char> >::snextc() --> int");
		cl.def("sbumpc", (int (std::streambuf::*)()) &std::basic_streambuf<char, std::char_traits<char> >::sbumpc, "C++: std::basic_streambuf<char, std::char_traits<char> >::sbumpc() --> int");
		cl.def("sgetc", (int (std::streambuf::*)()) &std::basic_streambuf<char, std::char_traits<char> >::sgetc, "C++: std::basic_streambuf<char, std::char_traits<char> >::sgetc() --> int");
		cl.def("sgetn", (long (std::streambuf::*)(char *, long)) &std::basic_streambuf<char, std::char_traits<char> >::sgetn, "C++: std::basic_streambuf<char, std::char_traits<char> >::sgetn(char *, long) --> long", pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("sputbackc", (int (std::streambuf::*)(char)) &std::basic_streambuf<char, std::char_traits<char> >::sputbackc, "C++: std::basic_streambuf<char, std::char_traits<char> >::sputbackc(char) --> int", pybind11::arg("__c"));
		cl.def("sungetc", (int (std::streambuf::*)()) &std::basic_streambuf<char, std::char_traits<char> >::sungetc, "C++: std::basic_streambuf<char, std::char_traits<char> >::sungetc() --> int");
		cl.def("sputc", (int (std::streambuf::*)(char)) &std::basic_streambuf<char, std::char_traits<char> >::sputc, "C++: std::basic_streambuf<char, std::char_traits<char> >::sputc(char) --> int", pybind11::arg("__c"));
		cl.def("sputn", (long (std::streambuf::*)(const char *, long)) &std::basic_streambuf<char, std::char_traits<char> >::sputn, "C++: std::basic_streambuf<char, std::char_traits<char> >::sputn(const char *, long) --> long", pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("stossc", (void (std::streambuf::*)()) &std::basic_streambuf<char, std::char_traits<char> >::stossc, "C++: std::basic_streambuf<char, std::char_traits<char> >::stossc() --> void");
		cl.def("__safe_gbump", (void (std::streambuf::*)(long)) &std::basic_streambuf<char, std::char_traits<char> >::__safe_gbump, "C++: std::basic_streambuf<char, std::char_traits<char> >::__safe_gbump(long) --> void", pybind11::arg("__n"));
		cl.def("__safe_pbump", (void (std::streambuf::*)(long)) &std::basic_streambuf<char, std::char_traits<char> >::__safe_pbump, "C++: std::basic_streambuf<char, std::char_traits<char> >::__safe_pbump(long) --> void", pybind11::arg("__n"));
	}
	std::cout << "B173_[std::wstreambuf] ";
}
