#ifndef _MEDICINE_H_
#define _MEDICINE_H_
#include <iostream>
#include <string>
#include "Utils.h"



class Medicine {
public:
	static std::string _DEF_ID_;
	static std::string _DEF_NAME_;
	static std::string _DEF_BARCODE_;

private:



	std::string _id;
	std::string _name;
	std::string _barcode;

public:
	Medicine() : _id(_DEF_ID_), _name(_DEF_NAME_), _barcode(_DEF_BARCODE_) {
	};

	Medicine(std::string medicine_id, std::string medicine_name, std::string medicine_barcode) 
		: _id(medicine_id), _name(medicine_name), _barcode(medicine_barcode) {
		this->_id = Utils::full_trim(_id);
		this->_name = Utils::full_trim(_name);
		this->_barcode = Utils::full_trim(_barcode);
	};

	std::string get_id();
	std::string get_name();
	std::string get_barcode();

	void set_id(std::string id) { this->_id = id; }
	void set_name(std::string name) { this->_name = name; }
	void set_barcode(std::string barcode) { this->_barcode = barcode; }

	bool is_ready();

	bool add_new();
};

#endif
