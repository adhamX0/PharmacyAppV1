#include "Utils.h"

std::vector<std::string> Utils::substrings(std::string str, std::string delimiter) {
	int pos = 0;
	std::vector<std::string> full_vec;

	while ((pos = str.find(delimiter)) != std::string::npos) {
		full_vec.push_back(str.substr(0, pos));
		str = str.substr(pos + delimiter.size());
	}
	full_vec.push_back(str);

	return full_vec;
}


std::string Utils::to_upper(const std::string &str) {
	std::string upper_str;
	for (int i = 0; i < str.size();i++) {
		upper_str += std::toupper(str[i]);
	}
	return upper_str;
 }