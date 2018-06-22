// Stuff to test new stuff
//
//
//

#include <iostream>
#include <sstream>
#include <msgpack.hpp>


struct mystruct {
	mystruct() {
		myint = 26;
		mystr = "HELLO!!!";
	}

	int myint;
	std::string mystr;
    MSGPACK_DEFINE_MAP(
      myint, mystr);
};


int main() {
	std::stringstream ss;
	std::map<std::string, msgpack::object> m, m2;
	msgpack::zone m_zone;
	int onetwo = 12;
	std::string twostring = "string_two";
	m2["int1"] = msgpack::object(onetwo, m_zone);
	m2["string2"] = msgpack::object(twostring, m_zone);

	m["myobj"] = msgpack::object(m2, m_zone);
	msgpack::object my2ndobject;
	m["obj_TWO!!"] = msgpack::object(my2ndobject, m_zone);

	msgpack::pack(ss, m);
	msgpack::object obj = msgpack::unpack(ss.str().data(), ss.str().size()).get();
	std::map<std::string, msgpack::object*> map_obj;

	msgpack::object_kv* current_key_value = obj.via.map.ptr;
	msgpack::object_kv* last_key_value = current_key_value + obj.via.map.size;
	{
	msgpack::object* key = &(current_key_value->key);
	msgpack::object* value = &(current_key_value->val);
	std::string data_map_key(key->via.str.ptr, key->via.str.size);
	std::cout << data_map_key << std::endl;
	std::cout << *value << std::endl;
	}
	++current_key_value;
	{
	msgpack::object* key = &(current_key_value->key);
	msgpack::object* value = &(current_key_value->val);
	std::string data_map_key(key->via.str.ptr, key->via.str.size);
	std::cout << data_map_key << std::endl;
	std::cout << *value << std::endl;
	}
	--current_key_value;
	--current_key_value;
	{
	msgpack::object* key = &(current_key_value->key);
	msgpack::object* value = &(current_key_value->val);
	std::string data_map_key(key->via.str.ptr, key->via.str.size);
	std::cout << data_map_key << std::endl;
	std::cout << *value << std::endl;
	}
}

//	for (; current_key_value != last_key_value; ++current_key_value) {
//		msgpack::object* key = &(current_key_value->key);
//		msgpack::object* value = &(current_key_value->val);
//		std::string data_map_key(key->via.str.ptr, key->via.str.size);
//		std::cout << *key << " : " << *value << std::endl;
//		if (data_map_key == "myobj") {
//			msgpack::object a_jedi;
//			value->convert(a_jedi);
//			std::cout << "TESTME: " << a_jedi << std::endl;
//		}
//		map_obj[data_map_key] = value;
//	}
//}

