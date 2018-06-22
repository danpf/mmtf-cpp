#include <bits/libio.h>
#include <iostream>
#include <sstream> // __str__

#include <pybind11/pybind11.h>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B197_[msgpack_object] ";
	{ // msgpack_object file: line:90
		pybind11::class_<msgpack_object, std::shared_ptr<msgpack_object>> cl(M(""), "msgpack_object", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new msgpack_object(); } ) );
		cl.def( pybind11::init( [](msgpack_object const &o){ return new msgpack_object(o); } ) );
		cl.def_readwrite("type", &msgpack_object::type);
		cl.def_readwrite("via", &msgpack_object::via);
	}
	std::cout << "B198_[msgpack_object_kv] ";
	std::cout << "B199_[void msgpack_object_print(struct _IO_FILE *, struct msgpack_object)] ";
	std::cout << "B200_[int msgpack_object_print_buffer(char *, unsigned long, struct msgpack_object)] ";
	std::cout << "B201_[bool msgpack_object_equal(const struct msgpack_object, const struct msgpack_object)] ";
}
