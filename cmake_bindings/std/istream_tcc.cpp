#include <ios> // std::_Ios_Seekdir
#include <ios> // std::basic_iostream
#include <ios> // std::basic_iostream<char, std::char_traits<char> >::basic_iostream
#include <ios> // std::basic_iostream<char, std::char_traits<char> >::operator=
#include <iosfwd> // std::basic_istream<char, std::char_traits<char> >::basic_istream
#include <iosfwd> // std::basic_istream<char, std::char_traits<char> >::operator=
#include <iostream> // --trace
#include <istream> // std::basic_istream
#include <istream> // std::basic_istream<char, std::char_traits<char> >::basic_istream
#include <istream> // std::basic_istream<char, std::char_traits<char> >::gcount
#include <istream> // std::basic_istream<char, std::char_traits<char> >::get
#include <istream> // std::basic_istream<char, std::char_traits<char> >::getline
#include <istream> // std::basic_istream<char, std::char_traits<char> >::ignore
#include <istream> // std::basic_istream<char, std::char_traits<char> >::peek
#include <istream> // std::basic_istream<char, std::char_traits<char> >::putback
#include <istream> // std::basic_istream<char, std::char_traits<char> >::read
#include <istream> // std::basic_istream<char, std::char_traits<char> >::readsome
#include <istream> // std::basic_istream<char, std::char_traits<char> >::seekg
#include <istream> // std::basic_istream<char, std::char_traits<char> >::sync
#include <istream> // std::basic_istream<char, std::char_traits<char> >::unget
#include <locale> // std::locale
#include <sstream> // __str__
#include <streambuf> // std::basic_streambuf
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::__safe_gbump
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::__safe_pbump
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::getloc
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::in_avail
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::pubimbue
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::pubsetbuf
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::pubsync
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::sbumpc
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::sgetc
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::sgetn
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::snextc
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::sputbackc
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::sputc
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::sputn
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::stossc
#include <streambuf> // std::basic_streambuf<char, std::char_traits<char> >::sungetc
#include <string> // std::char_traits
#include <string> // std::char_traits<char>::assign
#include <string> // std::char_traits<char>::compare
#include <string> // std::char_traits<char>::copy
#include <string> // std::char_traits<char>::eof
#include <string> // std::char_traits<char>::eq
#include <string> // std::char_traits<char>::eq_int_type
#include <string> // std::char_traits<char>::find
#include <string> // std::char_traits<char>::length
#include <string> // std::char_traits<char>::lt
#include <string> // std::char_traits<char>::move
#include <string> // std::char_traits<char>::not_eof
#include <string> // std::char_traits<char>::to_char_type
#include <string> // std::char_traits<char>::to_int_type

#include <pybind11/pybind11.h>
#include <functional>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_std_istream_tcc(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B92_[std::istream] ";
	{ // std::basic_istream file:bits/istream.tcc line:1048
		pybind11::class_<std::istream, std::shared_ptr<std::istream>, std::basic_ios<char,std::char_traits<char>>> cl(M("std"), "istream", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<class std::basic_streambuf<char> *>(), pybind11::arg("__sb") );

		cl.def( pybind11::init( [](std::istream const &o){ return new std::istream(o); } ) );
		cl.def("gcount", (long (std::istream::*)() const) &std::basic_istream<char, std::char_traits<char> >::gcount, "C++: std::basic_istream<char, std::char_traits<char> >::gcount() const --> long");
		cl.def("get", (int (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get() --> int");
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(char &)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(char &) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__c"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(char *, long, char)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(char *, long, char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"), pybind11::arg("__delim"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(char *, long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(class std::basic_streambuf<char> &, char)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(class std::basic_streambuf<char> &, char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__sb"), pybind11::arg("__delim"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(class std::basic_streambuf<char> &)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(class std::basic_streambuf<char> &) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__sb"));
		cl.def("getline", (class std::basic_istream<char> & (std::istream::*)(char *, long, char)) &std::basic_istream<char, std::char_traits<char> >::getline, "C++: std::basic_istream<char, std::char_traits<char> >::getline(char *, long, char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"), pybind11::arg("__delim"));
		cl.def("getline", (class std::basic_istream<char> & (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::getline, "C++: std::basic_istream<char, std::char_traits<char> >::getline(char *, long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("ignore", (class std::basic_istream<char> & (std::istream::*)(long, int)) &std::basic_istream<char, std::char_traits<char> >::ignore, "C++: std::basic_istream<char, std::char_traits<char> >::ignore(long, int) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"), pybind11::arg("__delim"));
		cl.def("ignore", (class std::basic_istream<char> & (std::istream::*)(long)) &std::basic_istream<char, std::char_traits<char> >::ignore, "C++: std::basic_istream<char, std::char_traits<char> >::ignore(long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("ignore", (class std::basic_istream<char> & (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::ignore, "C++: std::basic_istream<char, std::char_traits<char> >::ignore() --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic);
		cl.def("peek", (int (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::peek, "C++: std::basic_istream<char, std::char_traits<char> >::peek() --> int");
		cl.def("read", (class std::basic_istream<char> & (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::read, "C++: std::basic_istream<char, std::char_traits<char> >::read(char *, long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("readsome", (long (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::readsome, "C++: std::basic_istream<char, std::char_traits<char> >::readsome(char *, long) --> long", pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("putback", (class std::basic_istream<char> & (std::istream::*)(char)) &std::basic_istream<char, std::char_traits<char> >::putback, "C++: std::basic_istream<char, std::char_traits<char> >::putback(char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__c"));
		cl.def("unget", (class std::basic_istream<char> & (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::unget, "C++: std::basic_istream<char, std::char_traits<char> >::unget() --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic);
		cl.def("sync", (int (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::sync, "C++: std::basic_istream<char, std::char_traits<char> >::sync() --> int");
		cl.def("seekg", (class std::basic_istream<char> & (std::istream::*)(long, enum std::_Ios_Seekdir)) &std::basic_istream<char, std::char_traits<char> >::seekg, "C++: std::basic_istream<char, std::char_traits<char> >::seekg(long, enum std::_Ios_Seekdir) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""), pybind11::arg(""));
		cl.def("assign", (class std::basic_istream<char> & (std::istream::*)(const class std::basic_istream<char> &)) &std::basic_istream<char, std::char_traits<char> >::operator=, "C++: std::basic_istream<char, std::char_traits<char> >::operator=(const class std::basic_istream<char> &) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("rdstate", (enum std::_Ios_Iostate (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::rdstate, "C++: std::basic_ios<char, std::char_traits<char> >::rdstate() const --> enum std::_Ios_Iostate");
		cl.def("clear", [](std::basic_ios<char,std::char_traits<char>> &o) -> void { return o.clear(); }, "");
		cl.def("clear", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::clear, "C++: std::basic_ios<char, std::char_traits<char> >::clear(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("setstate", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::setstate, "C++: std::basic_ios<char, std::char_traits<char> >::setstate(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("_M_setstate", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::_M_setstate, "C++: std::basic_ios<char, std::char_traits<char> >::_M_setstate(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("good", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::good, "C++: std::basic_ios<char, std::char_traits<char> >::good() const --> bool");
		cl.def("eof", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::eof, "C++: std::basic_ios<char, std::char_traits<char> >::eof() const --> bool");
		cl.def("fail", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::fail, "C++: std::basic_ios<char, std::char_traits<char> >::fail() const --> bool");
		cl.def("bad", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::bad, "C++: std::basic_ios<char, std::char_traits<char> >::bad() const --> bool");
		cl.def("exceptions", (enum std::_Ios_Iostate (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::exceptions, "C++: std::basic_ios<char, std::char_traits<char> >::exceptions() const --> enum std::_Ios_Iostate");
		cl.def("exceptions", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::exceptions, "C++: std::basic_ios<char, std::char_traits<char> >::exceptions(enum std::_Ios_Iostate) --> void", pybind11::arg("__except"));
		cl.def("tie", (std::ostream * (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::tie, "C++: std::basic_ios<char, std::char_traits<char> >::tie() const --> std::ostream *", pybind11::return_value_policy::automatic);
		cl.def("tie", (std::ostream * (std::basic_ios<char,std::char_traits<char>>::*)(std::ostream *)) &std::basic_ios<char, std::char_traits<char> >::tie, "C++: std::basic_ios<char, std::char_traits<char> >::tie(class std::basic_ostream<char> *) --> std::ostream *", pybind11::return_value_policy::automatic, pybind11::arg("__tiestr"));
		cl.def("rdbuf", (class std::basic_streambuf<char> * (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::rdbuf, "C++: std::basic_ios<char, std::char_traits<char> >::rdbuf() const --> class std::basic_streambuf<char> *", pybind11::return_value_policy::automatic);
		cl.def("rdbuf", (class std::basic_streambuf<char> * (std::basic_ios<char,std::char_traits<char>>::*)(class std::basic_streambuf<char> *)) &std::basic_ios<char, std::char_traits<char> >::rdbuf, "C++: std::basic_ios<char, std::char_traits<char> >::rdbuf(class std::basic_streambuf<char> *) --> class std::basic_streambuf<char> *", pybind11::return_value_policy::automatic, pybind11::arg("__sb"));
		cl.def("copyfmt", (class std::basic_ios<char> & (std::basic_ios<char,std::char_traits<char>>::*)(const class std::basic_ios<char> &)) &std::basic_ios<char, std::char_traits<char> >::copyfmt, "C++: std::basic_ios<char, std::char_traits<char> >::copyfmt(const class std::basic_ios<char> &) --> class std::basic_ios<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__rhs"));
		cl.def("fill", (char (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::fill, "C++: std::basic_ios<char, std::char_traits<char> >::fill() const --> char");
		cl.def("fill", (char (std::basic_ios<char,std::char_traits<char>>::*)(char)) &std::basic_ios<char, std::char_traits<char> >::fill, "C++: std::basic_ios<char, std::char_traits<char> >::fill(char) --> char", pybind11::arg("__ch"));
		cl.def("imbue", (class std::locale (std::basic_ios<char,std::char_traits<char>>::*)(const class std::locale &)) &std::basic_ios<char, std::char_traits<char> >::imbue, "C++: std::basic_ios<char, std::char_traits<char> >::imbue(const class std::locale &) --> class std::locale", pybind11::arg("__loc"));
		cl.def("narrow", (char (std::basic_ios<char,std::char_traits<char>>::*)(char, char) const) &std::basic_ios<char, std::char_traits<char> >::narrow, "C++: std::basic_ios<char, std::char_traits<char> >::narrow(char, char) const --> char", pybind11::arg("__c"), pybind11::arg("__dfault"));
		cl.def("widen", (char (std::basic_ios<char,std::char_traits<char>>::*)(char) const) &std::basic_ios<char, std::char_traits<char> >::widen, "C++: std::basic_ios<char, std::char_traits<char> >::widen(char) const --> char", pybind11::arg("__c"));
		cl.def("assign", (class std::basic_ios<char> & (std::basic_ios<char,std::char_traits<char>>::*)(const class std::basic_ios<char> &)) &std::basic_ios<char, std::char_traits<char> >::operator=, "C++: std::basic_ios<char, std::char_traits<char> >::operator=(const class std::basic_ios<char> &) --> class std::basic_ios<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
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
	std::cout << "B93_[std::iostream] ";
	{ // std::basic_iostream file:bits/istream.tcc line:1071
		pybind11::class_<std::iostream, std::shared_ptr<std::iostream>, std::istream, std::ostream> cl(M("std"), "iostream", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<class std::basic_streambuf<char> *>(), pybind11::arg("__sb") );

		cl.def( pybind11::init( [](std::iostream const &o){ return new std::iostream(o); } ) );
		cl.def("assign", (class std::basic_iostream<char> & (std::iostream::*)(const class std::basic_iostream<char> &)) &std::basic_iostream<char, std::char_traits<char> >::operator=, "C++: std::basic_iostream<char, std::char_traits<char> >::operator=(const class std::basic_iostream<char> &) --> class std::basic_iostream<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("gcount", (long (std::istream::*)() const) &std::basic_istream<char, std::char_traits<char> >::gcount, "C++: std::basic_istream<char, std::char_traits<char> >::gcount() const --> long");
		cl.def("get", (int (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get() --> int");
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(char &)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(char &) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__c"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(char *, long, char)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(char *, long, char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"), pybind11::arg("__delim"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(char *, long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(class std::basic_streambuf<char> &, char)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(class std::basic_streambuf<char> &, char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__sb"), pybind11::arg("__delim"));
		cl.def("get", (class std::basic_istream<char> & (std::istream::*)(class std::basic_streambuf<char> &)) &std::basic_istream<char, std::char_traits<char> >::get, "C++: std::basic_istream<char, std::char_traits<char> >::get(class std::basic_streambuf<char> &) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__sb"));
		cl.def("getline", (class std::basic_istream<char> & (std::istream::*)(char *, long, char)) &std::basic_istream<char, std::char_traits<char> >::getline, "C++: std::basic_istream<char, std::char_traits<char> >::getline(char *, long, char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"), pybind11::arg("__delim"));
		cl.def("getline", (class std::basic_istream<char> & (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::getline, "C++: std::basic_istream<char, std::char_traits<char> >::getline(char *, long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("ignore", (class std::basic_istream<char> & (std::istream::*)(long, int)) &std::basic_istream<char, std::char_traits<char> >::ignore, "C++: std::basic_istream<char, std::char_traits<char> >::ignore(long, int) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"), pybind11::arg("__delim"));
		cl.def("ignore", (class std::basic_istream<char> & (std::istream::*)(long)) &std::basic_istream<char, std::char_traits<char> >::ignore, "C++: std::basic_istream<char, std::char_traits<char> >::ignore(long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("ignore", (class std::basic_istream<char> & (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::ignore, "C++: std::basic_istream<char, std::char_traits<char> >::ignore() --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic);
		cl.def("peek", (int (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::peek, "C++: std::basic_istream<char, std::char_traits<char> >::peek() --> int");
		cl.def("read", (class std::basic_istream<char> & (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::read, "C++: std::basic_istream<char, std::char_traits<char> >::read(char *, long) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("readsome", (long (std::istream::*)(char *, long)) &std::basic_istream<char, std::char_traits<char> >::readsome, "C++: std::basic_istream<char, std::char_traits<char> >::readsome(char *, long) --> long", pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("putback", (class std::basic_istream<char> & (std::istream::*)(char)) &std::basic_istream<char, std::char_traits<char> >::putback, "C++: std::basic_istream<char, std::char_traits<char> >::putback(char) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__c"));
		cl.def("unget", (class std::basic_istream<char> & (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::unget, "C++: std::basic_istream<char, std::char_traits<char> >::unget() --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic);
		cl.def("sync", (int (std::istream::*)()) &std::basic_istream<char, std::char_traits<char> >::sync, "C++: std::basic_istream<char, std::char_traits<char> >::sync() --> int");
		cl.def("seekg", (class std::basic_istream<char> & (std::istream::*)(long, enum std::_Ios_Seekdir)) &std::basic_istream<char, std::char_traits<char> >::seekg, "C++: std::basic_istream<char, std::char_traits<char> >::seekg(long, enum std::_Ios_Seekdir) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""), pybind11::arg(""));
		cl.def("assign", (class std::basic_istream<char> & (std::istream::*)(const class std::basic_istream<char> &)) &std::basic_istream<char, std::char_traits<char> >::operator=, "C++: std::basic_istream<char, std::char_traits<char> >::operator=(const class std::basic_istream<char> &) --> class std::basic_istream<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("rdstate", (enum std::_Ios_Iostate (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::rdstate, "C++: std::basic_ios<char, std::char_traits<char> >::rdstate() const --> enum std::_Ios_Iostate");
		cl.def("clear", [](std::basic_ios<char,std::char_traits<char>> &o) -> void { return o.clear(); }, "");
		cl.def("clear", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::clear, "C++: std::basic_ios<char, std::char_traits<char> >::clear(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("setstate", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::setstate, "C++: std::basic_ios<char, std::char_traits<char> >::setstate(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("_M_setstate", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::_M_setstate, "C++: std::basic_ios<char, std::char_traits<char> >::_M_setstate(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("good", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::good, "C++: std::basic_ios<char, std::char_traits<char> >::good() const --> bool");
		cl.def("eof", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::eof, "C++: std::basic_ios<char, std::char_traits<char> >::eof() const --> bool");
		cl.def("fail", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::fail, "C++: std::basic_ios<char, std::char_traits<char> >::fail() const --> bool");
		cl.def("bad", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::bad, "C++: std::basic_ios<char, std::char_traits<char> >::bad() const --> bool");
		cl.def("exceptions", (enum std::_Ios_Iostate (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::exceptions, "C++: std::basic_ios<char, std::char_traits<char> >::exceptions() const --> enum std::_Ios_Iostate");
		cl.def("exceptions", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::exceptions, "C++: std::basic_ios<char, std::char_traits<char> >::exceptions(enum std::_Ios_Iostate) --> void", pybind11::arg("__except"));
		cl.def("tie", (std::ostream * (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::tie, "C++: std::basic_ios<char, std::char_traits<char> >::tie() const --> std::ostream *", pybind11::return_value_policy::automatic);
		cl.def("tie", (std::ostream * (std::basic_ios<char,std::char_traits<char>>::*)(std::ostream *)) &std::basic_ios<char, std::char_traits<char> >::tie, "C++: std::basic_ios<char, std::char_traits<char> >::tie(class std::basic_ostream<char> *) --> std::ostream *", pybind11::return_value_policy::automatic, pybind11::arg("__tiestr"));
		cl.def("rdbuf", (class std::basic_streambuf<char> * (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::rdbuf, "C++: std::basic_ios<char, std::char_traits<char> >::rdbuf() const --> class std::basic_streambuf<char> *", pybind11::return_value_policy::automatic);
		cl.def("rdbuf", (class std::basic_streambuf<char> * (std::basic_ios<char,std::char_traits<char>>::*)(class std::basic_streambuf<char> *)) &std::basic_ios<char, std::char_traits<char> >::rdbuf, "C++: std::basic_ios<char, std::char_traits<char> >::rdbuf(class std::basic_streambuf<char> *) --> class std::basic_streambuf<char> *", pybind11::return_value_policy::automatic, pybind11::arg("__sb"));
		cl.def("copyfmt", (class std::basic_ios<char> & (std::basic_ios<char,std::char_traits<char>>::*)(const class std::basic_ios<char> &)) &std::basic_ios<char, std::char_traits<char> >::copyfmt, "C++: std::basic_ios<char, std::char_traits<char> >::copyfmt(const class std::basic_ios<char> &) --> class std::basic_ios<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__rhs"));
		cl.def("fill", (char (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::fill, "C++: std::basic_ios<char, std::char_traits<char> >::fill() const --> char");
		cl.def("fill", (char (std::basic_ios<char,std::char_traits<char>>::*)(char)) &std::basic_ios<char, std::char_traits<char> >::fill, "C++: std::basic_ios<char, std::char_traits<char> >::fill(char) --> char", pybind11::arg("__ch"));
		cl.def("imbue", (class std::locale (std::basic_ios<char,std::char_traits<char>>::*)(const class std::locale &)) &std::basic_ios<char, std::char_traits<char> >::imbue, "C++: std::basic_ios<char, std::char_traits<char> >::imbue(const class std::locale &) --> class std::locale", pybind11::arg("__loc"));
		cl.def("narrow", (char (std::basic_ios<char,std::char_traits<char>>::*)(char, char) const) &std::basic_ios<char, std::char_traits<char> >::narrow, "C++: std::basic_ios<char, std::char_traits<char> >::narrow(char, char) const --> char", pybind11::arg("__c"), pybind11::arg("__dfault"));
		cl.def("widen", (char (std::basic_ios<char,std::char_traits<char>>::*)(char) const) &std::basic_ios<char, std::char_traits<char> >::widen, "C++: std::basic_ios<char, std::char_traits<char> >::widen(char) const --> char", pybind11::arg("__c"));
		cl.def("assign", (class std::basic_ios<char> & (std::basic_ios<char,std::char_traits<char>>::*)(const class std::basic_ios<char> &)) &std::basic_ios<char, std::char_traits<char> >::operator=, "C++: std::basic_ios<char, std::char_traits<char> >::operator=(const class std::basic_ios<char> &) --> class std::basic_ios<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
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
		cl.def("put", (std::ostream & (std::ostream::*)(char)) &std::basic_ostream<char, std::char_traits<char> >::put, "C++: std::basic_ostream<char, std::char_traits<char> >::put(char) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__c"));
		cl.def("_M_write", (void (std::ostream::*)(const char *, long)) &std::basic_ostream<char, std::char_traits<char> >::_M_write, "C++: std::basic_ostream<char, std::char_traits<char> >::_M_write(const char *, long) --> void", pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("write", (std::ostream & (std::ostream::*)(const char *, long)) &std::basic_ostream<char, std::char_traits<char> >::write, "C++: std::basic_ostream<char, std::char_traits<char> >::write(const char *, long) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg("__s"), pybind11::arg("__n"));
		cl.def("flush", (std::ostream & (std::ostream::*)()) &std::basic_ostream<char, std::char_traits<char> >::flush, "C++: std::basic_ostream<char, std::char_traits<char> >::flush() --> std::ostream &", pybind11::return_value_policy::automatic);
		cl.def("seekp", (std::ostream & (std::ostream::*)(long, enum std::_Ios_Seekdir)) &std::basic_ostream<char, std::char_traits<char> >::seekp, "C++: std::basic_ostream<char, std::char_traits<char> >::seekp(long, enum std::_Ios_Seekdir) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg(""), pybind11::arg(""));
		cl.def("assign", (std::ostream & (std::ostream::*)(const std::ostream &)) &std::basic_ostream<char, std::char_traits<char> >::operator=, "C++: std::basic_ostream<char, std::char_traits<char> >::operator=(const class std::basic_ostream<char> &) --> std::ostream &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		cl.def("rdstate", (enum std::_Ios_Iostate (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::rdstate, "C++: std::basic_ios<char, std::char_traits<char> >::rdstate() const --> enum std::_Ios_Iostate");
		cl.def("clear", [](std::basic_ios<char,std::char_traits<char>> &o) -> void { return o.clear(); }, "");
		cl.def("clear", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::clear, "C++: std::basic_ios<char, std::char_traits<char> >::clear(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("setstate", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::setstate, "C++: std::basic_ios<char, std::char_traits<char> >::setstate(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("_M_setstate", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::_M_setstate, "C++: std::basic_ios<char, std::char_traits<char> >::_M_setstate(enum std::_Ios_Iostate) --> void", pybind11::arg("__state"));
		cl.def("good", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::good, "C++: std::basic_ios<char, std::char_traits<char> >::good() const --> bool");
		cl.def("eof", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::eof, "C++: std::basic_ios<char, std::char_traits<char> >::eof() const --> bool");
		cl.def("fail", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::fail, "C++: std::basic_ios<char, std::char_traits<char> >::fail() const --> bool");
		cl.def("bad", (bool (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::bad, "C++: std::basic_ios<char, std::char_traits<char> >::bad() const --> bool");
		cl.def("exceptions", (enum std::_Ios_Iostate (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::exceptions, "C++: std::basic_ios<char, std::char_traits<char> >::exceptions() const --> enum std::_Ios_Iostate");
		cl.def("exceptions", (void (std::basic_ios<char,std::char_traits<char>>::*)(enum std::_Ios_Iostate)) &std::basic_ios<char, std::char_traits<char> >::exceptions, "C++: std::basic_ios<char, std::char_traits<char> >::exceptions(enum std::_Ios_Iostate) --> void", pybind11::arg("__except"));
		cl.def("tie", (std::ostream * (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::tie, "C++: std::basic_ios<char, std::char_traits<char> >::tie() const --> std::ostream *", pybind11::return_value_policy::automatic);
		cl.def("tie", (std::ostream * (std::basic_ios<char,std::char_traits<char>>::*)(std::ostream *)) &std::basic_ios<char, std::char_traits<char> >::tie, "C++: std::basic_ios<char, std::char_traits<char> >::tie(class std::basic_ostream<char> *) --> std::ostream *", pybind11::return_value_policy::automatic, pybind11::arg("__tiestr"));
		cl.def("rdbuf", (class std::basic_streambuf<char> * (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::rdbuf, "C++: std::basic_ios<char, std::char_traits<char> >::rdbuf() const --> class std::basic_streambuf<char> *", pybind11::return_value_policy::automatic);
		cl.def("rdbuf", (class std::basic_streambuf<char> * (std::basic_ios<char,std::char_traits<char>>::*)(class std::basic_streambuf<char> *)) &std::basic_ios<char, std::char_traits<char> >::rdbuf, "C++: std::basic_ios<char, std::char_traits<char> >::rdbuf(class std::basic_streambuf<char> *) --> class std::basic_streambuf<char> *", pybind11::return_value_policy::automatic, pybind11::arg("__sb"));
		cl.def("copyfmt", (class std::basic_ios<char> & (std::basic_ios<char,std::char_traits<char>>::*)(const class std::basic_ios<char> &)) &std::basic_ios<char, std::char_traits<char> >::copyfmt, "C++: std::basic_ios<char, std::char_traits<char> >::copyfmt(const class std::basic_ios<char> &) --> class std::basic_ios<char> &", pybind11::return_value_policy::automatic, pybind11::arg("__rhs"));
		cl.def("fill", (char (std::basic_ios<char,std::char_traits<char>>::*)() const) &std::basic_ios<char, std::char_traits<char> >::fill, "C++: std::basic_ios<char, std::char_traits<char> >::fill() const --> char");
		cl.def("fill", (char (std::basic_ios<char,std::char_traits<char>>::*)(char)) &std::basic_ios<char, std::char_traits<char> >::fill, "C++: std::basic_ios<char, std::char_traits<char> >::fill(char) --> char", pybind11::arg("__ch"));
		cl.def("imbue", (class std::locale (std::basic_ios<char,std::char_traits<char>>::*)(const class std::locale &)) &std::basic_ios<char, std::char_traits<char> >::imbue, "C++: std::basic_ios<char, std::char_traits<char> >::imbue(const class std::locale &) --> class std::locale", pybind11::arg("__loc"));
		cl.def("narrow", (char (std::basic_ios<char,std::char_traits<char>>::*)(char, char) const) &std::basic_ios<char, std::char_traits<char> >::narrow, "C++: std::basic_ios<char, std::char_traits<char> >::narrow(char, char) const --> char", pybind11::arg("__c"), pybind11::arg("__dfault"));
		cl.def("widen", (char (std::basic_ios<char,std::char_traits<char>>::*)(char) const) &std::basic_ios<char, std::char_traits<char> >::widen, "C++: std::basic_ios<char, std::char_traits<char> >::widen(char) const --> char", pybind11::arg("__c"));
		cl.def("assign", (class std::basic_ios<char> & (std::basic_ios<char,std::char_traits<char>>::*)(const class std::basic_ios<char> &)) &std::basic_ios<char, std::char_traits<char> >::operator=, "C++: std::basic_ios<char, std::char_traits<char> >::operator=(const class std::basic_ios<char> &) --> class std::basic_ios<char> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
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
}
