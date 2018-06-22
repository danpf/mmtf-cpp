#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <mmtf/binary_decoder.hpp> // mmtf::BinaryDecoder
#include <mmtf/binary_decoder.hpp> // mmtf::BinaryDecoder::BinaryDecoder
#include <mmtf/binary_decoder.hpp> // mmtf::BinaryDecoder::decode
#include <mmtf/structure_data.hpp> // mmtf::BioAssembly
#include <mmtf/structure_data.hpp> // mmtf::Entity
#include <mmtf/structure_data.hpp> // mmtf::GroupType
#include <mmtf/structure_data.hpp> // mmtf::Transform
#include <sstream> // __str__
#include <string> // std::__cxx11::basic_string
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::assign
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::at
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::begin
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::clear
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::compare
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::copy
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::data
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::end
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::erase
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_not_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_not_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::insert
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::max_size
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[]
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::push_back
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::replace
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::resize
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::swap
#include <string> // std::char_traits
#include <vector> // std::vector
#include <vector> // std::vector<char, std::allocator<char> >::assign
#include <vector> // std::vector<char, std::allocator<char> >::at
#include <vector> // std::vector<char, std::allocator<char> >::back
#include <vector> // std::vector<char, std::allocator<char> >::begin
#include <vector> // std::vector<char, std::allocator<char> >::capacity
#include <vector> // std::vector<char, std::allocator<char> >::clear
#include <vector> // std::vector<char, std::allocator<char> >::data
#include <vector> // std::vector<char, std::allocator<char> >::empty
#include <vector> // std::vector<char, std::allocator<char> >::end
#include <vector> // std::vector<char, std::allocator<char> >::erase
#include <vector> // std::vector<char, std::allocator<char> >::front
#include <vector> // std::vector<char, std::allocator<char> >::insert
#include <vector> // std::vector<char, std::allocator<char> >::max_size
#include <vector> // std::vector<char, std::allocator<char> >::operator=
#include <vector> // std::vector<char, std::allocator<char> >::operator[]
#include <vector> // std::vector<char, std::allocator<char> >::pop_back
#include <vector> // std::vector<char, std::allocator<char> >::push_back
#include <vector> // std::vector<char, std::allocator<char> >::reserve
#include <vector> // std::vector<char, std::allocator<char> >::resize
#include <vector> // std::vector<char, std::allocator<char> >::size
#include <vector> // std::vector<char, std::allocator<char> >::swap
#include <vector> // std::vector<char, std::allocator<char> >::vector
#include <vector> // std::vector<float, std::allocator<float> >::assign
#include <vector> // std::vector<float, std::allocator<float> >::at
#include <vector> // std::vector<float, std::allocator<float> >::back
#include <vector> // std::vector<float, std::allocator<float> >::begin
#include <vector> // std::vector<float, std::allocator<float> >::capacity
#include <vector> // std::vector<float, std::allocator<float> >::clear
#include <vector> // std::vector<float, std::allocator<float> >::data
#include <vector> // std::vector<float, std::allocator<float> >::empty
#include <vector> // std::vector<float, std::allocator<float> >::end
#include <vector> // std::vector<float, std::allocator<float> >::erase
#include <vector> // std::vector<float, std::allocator<float> >::front
#include <vector> // std::vector<float, std::allocator<float> >::insert
#include <vector> // std::vector<float, std::allocator<float> >::max_size
#include <vector> // std::vector<float, std::allocator<float> >::operator=
#include <vector> // std::vector<float, std::allocator<float> >::operator[]
#include <vector> // std::vector<float, std::allocator<float> >::pop_back
#include <vector> // std::vector<float, std::allocator<float> >::push_back
#include <vector> // std::vector<float, std::allocator<float> >::reserve
#include <vector> // std::vector<float, std::allocator<float> >::resize
#include <vector> // std::vector<float, std::allocator<float> >::size
#include <vector> // std::vector<float, std::allocator<float> >::swap
#include <vector> // std::vector<float, std::allocator<float> >::vector
#include <vector> // std::vector<int, std::allocator<int> >::assign
#include <vector> // std::vector<int, std::allocator<int> >::at
#include <vector> // std::vector<int, std::allocator<int> >::back
#include <vector> // std::vector<int, std::allocator<int> >::begin
#include <vector> // std::vector<int, std::allocator<int> >::capacity
#include <vector> // std::vector<int, std::allocator<int> >::clear
#include <vector> // std::vector<int, std::allocator<int> >::data
#include <vector> // std::vector<int, std::allocator<int> >::empty
#include <vector> // std::vector<int, std::allocator<int> >::end
#include <vector> // std::vector<int, std::allocator<int> >::erase
#include <vector> // std::vector<int, std::allocator<int> >::front
#include <vector> // std::vector<int, std::allocator<int> >::insert
#include <vector> // std::vector<int, std::allocator<int> >::max_size
#include <vector> // std::vector<int, std::allocator<int> >::operator=
#include <vector> // std::vector<int, std::allocator<int> >::operator[]
#include <vector> // std::vector<int, std::allocator<int> >::pop_back
#include <vector> // std::vector<int, std::allocator<int> >::push_back
#include <vector> // std::vector<int, std::allocator<int> >::reserve
#include <vector> // std::vector<int, std::allocator<int> >::resize
#include <vector> // std::vector<int, std::allocator<int> >::size
#include <vector> // std::vector<int, std::allocator<int> >::swap
#include <vector> // std::vector<int, std::allocator<int> >::vector
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::assign
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::at
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::back
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::begin
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::capacity
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::clear
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::data
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::empty
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::end
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::erase
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::front
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::insert
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::max_size
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::operator=
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::operator[]
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::pop_back
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::push_back
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::reserve
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::resize
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::size
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::swap
#include <vector> // std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >::vector
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::assign
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::at
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::back
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::begin
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::capacity
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::clear
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::data
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::empty
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::end
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::erase
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::front
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::insert
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::max_size
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::operator=
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::operator[]
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::pop_back
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::push_back
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::reserve
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::resize
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::size
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::swap
#include <vector> // std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >::vector
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::assign
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::at
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::back
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::begin
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::capacity
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::clear
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::data
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::empty
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::end
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::erase
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::front
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::insert
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::max_size
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::operator=
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::operator[]
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::pop_back
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::push_back
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::reserve
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::resize
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::size
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::swap
#include <vector> // std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >::vector
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::assign
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::at
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::back
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::begin
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::capacity
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::clear
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::data
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::empty
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::end
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::erase
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::front
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::insert
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::max_size
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::operator=
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::operator[]
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::pop_back
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::push_back
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::reserve
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::resize
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::size
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::swap
#include <vector> // std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >::vector
#include <vector> // std::vector<short, std::allocator<short> >::assign
#include <vector> // std::vector<short, std::allocator<short> >::at
#include <vector> // std::vector<short, std::allocator<short> >::back
#include <vector> // std::vector<short, std::allocator<short> >::begin
#include <vector> // std::vector<short, std::allocator<short> >::capacity
#include <vector> // std::vector<short, std::allocator<short> >::clear
#include <vector> // std::vector<short, std::allocator<short> >::data
#include <vector> // std::vector<short, std::allocator<short> >::empty
#include <vector> // std::vector<short, std::allocator<short> >::end
#include <vector> // std::vector<short, std::allocator<short> >::erase
#include <vector> // std::vector<short, std::allocator<short> >::front
#include <vector> // std::vector<short, std::allocator<short> >::insert
#include <vector> // std::vector<short, std::allocator<short> >::max_size
#include <vector> // std::vector<short, std::allocator<short> >::operator=
#include <vector> // std::vector<short, std::allocator<short> >::operator[]
#include <vector> // std::vector<short, std::allocator<short> >::pop_back
#include <vector> // std::vector<short, std::allocator<short> >::push_back
#include <vector> // std::vector<short, std::allocator<short> >::reserve
#include <vector> // std::vector<short, std::allocator<short> >::resize
#include <vector> // std::vector<short, std::allocator<short> >::size
#include <vector> // std::vector<short, std::allocator<short> >::swap
#include <vector> // std::vector<short, std::allocator<short> >::vector
#include <vector> // std::vector<signed char, std::allocator<signed char> >::assign
#include <vector> // std::vector<signed char, std::allocator<signed char> >::at
#include <vector> // std::vector<signed char, std::allocator<signed char> >::back
#include <vector> // std::vector<signed char, std::allocator<signed char> >::begin
#include <vector> // std::vector<signed char, std::allocator<signed char> >::capacity
#include <vector> // std::vector<signed char, std::allocator<signed char> >::clear
#include <vector> // std::vector<signed char, std::allocator<signed char> >::data
#include <vector> // std::vector<signed char, std::allocator<signed char> >::empty
#include <vector> // std::vector<signed char, std::allocator<signed char> >::end
#include <vector> // std::vector<signed char, std::allocator<signed char> >::erase
#include <vector> // std::vector<signed char, std::allocator<signed char> >::front
#include <vector> // std::vector<signed char, std::allocator<signed char> >::insert
#include <vector> // std::vector<signed char, std::allocator<signed char> >::max_size
#include <vector> // std::vector<signed char, std::allocator<signed char> >::operator=
#include <vector> // std::vector<signed char, std::allocator<signed char> >::operator[]
#include <vector> // std::vector<signed char, std::allocator<signed char> >::pop_back
#include <vector> // std::vector<signed char, std::allocator<signed char> >::push_back
#include <vector> // std::vector<signed char, std::allocator<signed char> >::reserve
#include <vector> // std::vector<signed char, std::allocator<signed char> >::resize
#include <vector> // std::vector<signed char, std::allocator<signed char> >::size
#include <vector> // std::vector<signed char, std::allocator<signed char> >::swap
#include <vector> // std::vector<signed char, std::allocator<signed char> >::vector
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::assign
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::at
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::back
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::begin
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::capacity
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::clear
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::data
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::empty
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::end
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::erase
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::front
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::insert
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::max_size
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::operator=
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::operator[]
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::pop_back
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::push_back
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::reserve
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::resize
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::size
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::swap
#include <vector> // std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >::vector
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::assign
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::at
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::back
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::begin
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::capacity
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::clear
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::data
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::empty
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::end
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::erase
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::front
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::insert
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::max_size
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::operator=
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::operator[]
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::pop_back
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::push_back
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::reserve
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::resize
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::size
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::swap
#include <vector> // std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::vector

#include <pybind11/pybind11.h>
#include <functional>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_mmtf_binary_decoder(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B137_[mmtf::BinaryDecoder] ";
	{ // mmtf::BinaryDecoder file:mmtf/binary_decoder.hpp line:29
		pybind11::class_<mmtf::BinaryDecoder, std::shared_ptr<mmtf::BinaryDecoder>> cl(M("mmtf"), "BinaryDecoder", "Helper class to decode msgpack binary into a vector.");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](mmtf::BinaryDecoder const &o){ return new mmtf::BinaryDecoder(o); } ) );
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<float, class std::allocator<float> > &)) &mmtf::BinaryDecoder::decode<std::vector<float, std::allocator<float> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<float, class std::allocator<float> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<signed char, class std::allocator<signed char> > &)) &mmtf::BinaryDecoder::decode<std::vector<signed char, std::allocator<signed char> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<signed char, class std::allocator<signed char> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<short, class std::allocator<short> > &)) &mmtf::BinaryDecoder::decode<std::vector<short, std::allocator<short> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<short, class std::allocator<short> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<int, class std::allocator<int> > &)) &mmtf::BinaryDecoder::decode<std::vector<int, std::allocator<int> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<int, class std::allocator<int> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<std::string, class std::allocator<std::string > > &)) &mmtf::BinaryDecoder::decode<std::vector<std::string, std::allocator<std::string > >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<class std::__cxx11::basic_string<char>, class std::allocator<class std::__cxx11::basic_string<char> > > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<char, class std::allocator<char> > &)) &mmtf::BinaryDecoder::decode<std::vector<char, std::allocator<char> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<char, class std::allocator<char> > &) --> void", pybind11::arg("output"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(std::string &)) &mmtf::BinaryDecoder::decode<std::string>, "C++: mmtf::BinaryDecoder::decode(class std::__cxx11::basic_string<char> &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(char &)) &mmtf::BinaryDecoder::decode<char>, "C++: mmtf::BinaryDecoder::decode(char &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::Transform, class std::allocator<struct mmtf::Transform> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::Transform, std::allocator<mmtf::Transform> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::Transform, class std::allocator<struct mmtf::Transform> > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)) &mmtf::BinaryDecoder::decode<std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::BioAssembly, std::allocator<mmtf::BioAssembly> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::BioAssembly, class std::allocator<struct mmtf::BioAssembly> > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::Entity, std::allocator<mmtf::Entity> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::Entity, class std::allocator<struct mmtf::Entity> > &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(float &)) &mmtf::BinaryDecoder::decode<float>, "C++: mmtf::BinaryDecoder::decode(float &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(int &)) &mmtf::BinaryDecoder::decode<int>, "C++: mmtf::BinaryDecoder::decode(int &) --> void", pybind11::arg("target"));
		cl.def("decode", (void (mmtf::BinaryDecoder::*)(class std::vector<struct mmtf::GroupType, class std::allocator<struct mmtf::GroupType> > &)) &mmtf::BinaryDecoder::decode<std::vector<mmtf::GroupType, std::allocator<mmtf::GroupType> >>, "C++: mmtf::BinaryDecoder::decode(class std::vector<struct mmtf::GroupType, class std::allocator<struct mmtf::GroupType> > &) --> void", pybind11::arg("target"));
	}
}
