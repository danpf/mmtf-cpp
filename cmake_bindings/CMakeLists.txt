project(mmtf)
include_directories(/home/danpf/git/binder/source/)
include_directories(/home/danpf/git/mmtf-cpp/cmake_bindings/../include)
include_directories(/home/danpf/git/binder/build/pybind11/include)
include_directories(/home/danpf/miniconda3/envs/py3/include/python3.6m)
include_directories(/home/danpf/git/mmtf-cpp/cmake_bindings/../msgpack-c/include)
set_property(GLOBAL PROPERTY POSITION_INDEPENDENT_CODE ON)
add_definitions(-DNDEBUG)
add_library(mmtf SHARED
	mmtf.cpp
	std/exception.cpp
	std/stdexcept.cpp
	std/stl_vector.cpp
	std/locale_classes.cpp
	std/basic_ios_tcc.cpp
	mmtf/errors.cpp
	std/istream_tcc.cpp
	std/sstream_tcc.cpp
	mmtf/structure_data.cpp
	mmtf/structure_data_1.cpp
	mmtf/structure_data_2.cpp
	mmtf/binary_decoder.cpp
	mmtf/binary_decoder_1.cpp
	mmtf/map_decoder.cpp
	std/fstream_tcc.cpp
	std/fstream_tcc_1.cpp
	mmtf/decoder.cpp
	mmtf/binary_encoder.cpp
	mmtf/binary_encoder_1.cpp
)
set_target_properties(mmtf PROPERTIES PREFIX "")
set_target_properties(mmtf PROPERTIES SUFFIX ".so")
