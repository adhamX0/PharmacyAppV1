#ifndef _UTILS_H_
#define _UTILS_H_
#include <iostream>
#include <vector>

class Utils
{
public:
	static std::vector<std::string> substrings(std::string str, std::string delimiter);
	static std::string to_upper(const std::string& str);

	static std::string left_trim(const std::string& str);
	static std::string right_trim(const std::string& str);
	static std::string full_trim(const std::string& str);

};

#endif

