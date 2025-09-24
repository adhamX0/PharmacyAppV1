#ifndef _MEDICINE_H_
#define _MEDICINE_H_
#include <iostream>

class Medicine {
private:

	std::string _DEF_ID_ = "Default Medicine ID";
	std::string _DEF_NAME_ = "Default Medicine Name";
	std::string _DEF_BARCODE_ = "Default Medicine BARCODE";

	std::string _id;
	std::string _name;
	std::string _barcode;

public:
	Medicine() : _id(_DEF_NAME_), _name(_DEF_NAME_), _barcode(_DEF_BARCODE_) {
	};

	std::string get_id();
	std::string get_name();
	std::string get_barcode();

	void set_id(std::string id) { this->_id = id; }
	void set_name(std::string name) { this->_name = name; }
	void set_barcode(std::string barcode) { this->_barcode = barcode; }

	bool add_new();




};

#endif
