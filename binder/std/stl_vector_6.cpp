#include <initializer_list>
#include <iostream>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <vector>

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_std_stl_vector_6(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B15_[std::vector<short>] ";
	{ // std::vector file:bits/stl_vector.h line:216
		pybind11::class_<std::vector<short>, std::shared_ptr<std::vector<short>>> cl(M("std"), "vector_short_t", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new std::vector<short>(); } ) );
		cl.def( pybind11::init<const class std::allocator<short> &>(), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new std::vector<short>(a0); } ), "doc");
		cl.def( pybind11::init<unsigned long, const class std::allocator<short> &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0, const short & a1){ return new std::vector<short>(a0, a1); } ), "doc");
		cl.def( pybind11::init<unsigned long, const short &, const class std::allocator<short> &>(), pybind11::arg("__n"), pybind11::arg("__value"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::vector<short> const &o){ return new std::vector<short>(o); } ) );
		cl.def( pybind11::init<const class std::vector<short, class std::allocator<short> > &, const class std::allocator<short> &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](class std::initializer_list<short> const & a0){ return new std::vector<short>(a0); } ), "doc");
		cl.def( pybind11::init<class std::initializer_list<short>, const class std::allocator<short> &>(), pybind11::arg("__l"), pybind11::arg("__a") );

		cl.def("get_allocator", [](std::vector<short> const &o) -> std::allocator<short> { return o.get_allocator(); }, "");
		cl.def("assign", (class std::vector<short, class std::allocator<short> > & (std::vector<short>::*)(const class std::vector<short, class std::allocator<short> > &)) &std::vector<short, std::allocator<short> >::operator=, "C++: std::vector<short, std::allocator<short> >::operator=(const class std::vector<short, class std::allocator<short> > &) --> class std::vector<short, class std::allocator<short> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (class std::vector<short, class std::allocator<short> > & (std::vector<short>::*)(class std::initializer_list<short>)) &std::vector<short, std::allocator<short> >::operator=, "C++: std::vector<short, std::allocator<short> >::operator=(class std::initializer_list<short>) --> class std::vector<short, class std::allocator<short> > &", pybind11::return_value_policy::automatic, pybind11::arg("__l"));
		cl.def("assign", (void (std::vector<short>::*)(unsigned long, const short &)) &std::vector<short, std::allocator<short> >::assign, "C++: std::vector<short, std::allocator<short> >::assign(unsigned long, const short &) --> void", pybind11::arg("__n"), pybind11::arg("__val"));
		cl.def("assign", (void (std::vector<short>::*)(class std::initializer_list<short>)) &std::vector<short, std::allocator<short> >::assign, "C++: std::vector<short, std::allocator<short> >::assign(class std::initializer_list<short>) --> void", pybind11::arg("__l"));
		cl.def("begin", (class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::begin, "C++: std::vector<short, std::allocator<short> >::begin() --> class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > >");
		cl.def("end", (class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::end, "C++: std::vector<short, std::allocator<short> >::end() --> class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > >");
		cl.def("cbegin", (class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)() const) &std::vector<short, std::allocator<short> >::cbegin, "C++: std::vector<short, std::allocator<short> >::cbegin() const --> class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >");
		cl.def("cend", (class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)() const) &std::vector<short, std::allocator<short> >::cend, "C++: std::vector<short, std::allocator<short> >::cend() const --> class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >");
		cl.def("size", (unsigned long (std::vector<short>::*)() const) &std::vector<short, std::allocator<short> >::size, "C++: std::vector<short, std::allocator<short> >::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::vector<short>::*)() const) &std::vector<short, std::allocator<short> >::max_size, "C++: std::vector<short, std::allocator<short> >::max_size() const --> unsigned long");
		cl.def("resize", (void (std::vector<short>::*)(unsigned long)) &std::vector<short, std::allocator<short> >::resize, "C++: std::vector<short, std::allocator<short> >::resize(unsigned long) --> void", pybind11::arg("__new_size"));
		cl.def("resize", (void (std::vector<short>::*)(unsigned long, const short &)) &std::vector<short, std::allocator<short> >::resize, "C++: std::vector<short, std::allocator<short> >::resize(unsigned long, const short &) --> void", pybind11::arg("__new_size"), pybind11::arg("__x"));
		cl.def("shrink_to_fit", (void (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::shrink_to_fit, "C++: std::vector<short, std::allocator<short> >::shrink_to_fit() --> void");
		cl.def("capacity", (unsigned long (std::vector<short>::*)() const) &std::vector<short, std::allocator<short> >::capacity, "C++: std::vector<short, std::allocator<short> >::capacity() const --> unsigned long");
		cl.def("empty", (bool (std::vector<short>::*)() const) &std::vector<short, std::allocator<short> >::empty, "C++: std::vector<short, std::allocator<short> >::empty() const --> bool");
		cl.def("reserve", (void (std::vector<short>::*)(unsigned long)) &std::vector<short, std::allocator<short> >::reserve, "C++: std::vector<short, std::allocator<short> >::reserve(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("__getitem__", (short & (std::vector<short>::*)(unsigned long)) &std::vector<short, std::allocator<short> >::operator[], "C++: std::vector<short, std::allocator<short> >::operator[](unsigned long) --> short &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (short & (std::vector<short>::*)(unsigned long)) &std::vector<short, std::allocator<short> >::at, "C++: std::vector<short, std::allocator<short> >::at(unsigned long) --> short &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (short & (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::front, "C++: std::vector<short, std::allocator<short> >::front() --> short &", pybind11::return_value_policy::automatic);
		cl.def("back", (short & (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::back, "C++: std::vector<short, std::allocator<short> >::back() --> short &", pybind11::return_value_policy::automatic);
		cl.def("data", (short * (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::data, "C++: std::vector<short, std::allocator<short> >::data() --> short *", pybind11::return_value_policy::automatic);
		cl.def("push_back", (void (std::vector<short>::*)(const short &)) &std::vector<short, std::allocator<short> >::push_back, "C++: std::vector<short, std::allocator<short> >::push_back(const short &) --> void", pybind11::arg("__x"));
		cl.def("pop_back", (void (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::pop_back, "C++: std::vector<short, std::allocator<short> >::pop_back() --> void");
		cl.def("insert", (class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, const short &)) &std::vector<short, std::allocator<short> >::insert, "C++: std::vector<short, std::allocator<short> >::insert(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, const short &) --> class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > >", pybind11::arg("__position"), pybind11::arg("__x"));
		cl.def("insert", (class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, class std::initializer_list<short>)) &std::vector<short, std::allocator<short> >::insert, "C++: std::vector<short, std::allocator<short> >::insert(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, class std::initializer_list<short>) --> class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > >", pybind11::arg("__position"), pybind11::arg("__l"));
		cl.def("insert", (class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, unsigned long, const short &)) &std::vector<short, std::allocator<short> >::insert, "C++: std::vector<short, std::allocator<short> >::insert(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, unsigned long, const short &) --> class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > >", pybind11::arg("__position"), pybind11::arg("__n"), pybind11::arg("__x"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >)) &std::vector<short, std::allocator<short> >::erase, "C++: std::vector<short, std::allocator<short> >::erase(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >) --> class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > >", pybind11::arg("__position"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > > (std::vector<short>::*)(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >)) &std::vector<short, std::allocator<short> >::erase, "C++: std::vector<short, std::allocator<short> >::erase(class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >, class __gnu_cxx::__normal_iterator<const short *, class std::vector<short, class std::allocator<short> > >) --> class __gnu_cxx::__normal_iterator<short *, class std::vector<short, class std::allocator<short> > >", pybind11::arg("__first"), pybind11::arg("__last"));
		cl.def("swap", (void (std::vector<short>::*)(class std::vector<short, class std::allocator<short> > &)) &std::vector<short, std::allocator<short> >::swap, "C++: std::vector<short, std::allocator<short> >::swap(class std::vector<short, class std::allocator<short> > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::vector<short>::*)()) &std::vector<short, std::allocator<short> >::clear, "C++: std::vector<short, std::allocator<short> >::clear() --> void");
	}
	std::cout << "B16_[std::vector<msgpack::v2::detail::context<msgpack::v2::detail::parse_helper<msgpack::v2::detail::create_object_visitor> >::unpack_stack::stack_elem>] ";
}
