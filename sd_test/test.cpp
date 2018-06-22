#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <msgpack.hpp>
#include <fstream>
#include <iostream>
#include <sstream>


int main() {
	std::stringstream ss;
	std::map<std::string, msgpack::object> m, m2;
	msgpack::zone m_zone;
	std::cout << "Hello" << std::endl;
    
	int onetwo = 12;
	std::string twostring = "string_two";
	m2["int1"] = msgpack::object(onetwo, m_zone);
	m2["string2"] = msgpack::object(twostring, m_zone);
	m["myobj"] = msgpack::object(m2, m_zone);
        
	msgpack::object my2ndobject; // just a null object
	m["obj_TWO!!"] = msgpack::object(my2ndobject, m_zone);

	msgpack::pack(ss, m);
    
    
	msgpack::object_handle obj_h = msgpack::unpack(ss.str().data(), ss.str().size());
	msgpack::object obj = obj_h.get();

	msgpack::object_kv* current_key_value = obj.via.map.ptr;
	{
	msgpack::object* key = &(current_key_value->key);
	msgpack::object* value = &(current_key_value->val);
	std::string data_map_key(key->via.str.ptr, key->via.str.size);
	std::cout << data_map_key << std::endl;
	std::cout << *value << std::endl;
	msgpack::object tmp_empty;
	value->convert(tmp_empty);
	std::cout << tmp_empty << std::endl;
	}
	++current_key_value;
	{
	msgpack::object* key = &(current_key_value->key);
	msgpack::object* value = &(current_key_value->val);
	std::string data_map_key(key->via.str.ptr, key->via.str.size);
	std::cout << data_map_key << std::endl;
	std::cout << *value << std::endl;
	}

}
