#include <map>
#include <memory>
#include <stdexcept>
#include <functional>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_std_exception(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_stdexcept(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_stl_vector(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_locale_classes(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_basic_ios_tcc(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_errors(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_istream_tcc(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_sstream_tcc(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_structure_data(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_structure_data_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_structure_data_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_binary_decoder(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_binary_decoder_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_map_decoder(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_fstream_tcc(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_fstream_tcc_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_decoder(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_binary_encoder(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_mmtf_binary_encoder_1(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(mmtf, root_module) {
	root_module.doc() = "mmtf module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "mmtf"},
		{"mmtf", "(anonymous namespace)"},
		{"", "std"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_std_exception(M);
	bind_std_stdexcept(M);
	bind_std_stl_vector(M);
	bind_std_locale_classes(M);
	bind_std_basic_ios_tcc(M);
	bind_mmtf_errors(M);
	bind_std_istream_tcc(M);
	bind_std_sstream_tcc(M);
	bind_mmtf_structure_data(M);
	bind_mmtf_structure_data_1(M);
	bind_mmtf_structure_data_2(M);
	bind_mmtf_binary_decoder(M);
	bind_mmtf_binary_decoder_1(M);
	bind_mmtf_map_decoder(M);
	bind_std_fstream_tcc(M);
	bind_std_fstream_tcc_1(M);
	bind_mmtf_decoder(M);
	bind_mmtf_binary_encoder(M);
	bind_mmtf_binary_encoder_1(M);

}
