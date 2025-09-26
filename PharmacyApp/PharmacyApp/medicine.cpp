#include "medicine.h"
#include "MedicineDatabase.h"

std::string Medicine::_DEF_ID_ = "Default Medicine ID";
std::string Medicine::_DEF_NAME_ = "Default Medicine Name";
std::string Medicine::_DEF_BARCODE_ = "Default Medicine BARCODE";

std::string Medicine::get_id() {
	return this->_id;
}

std::string Medicine::get_name() {
	return this->_name;
}

std::string Medicine::get_barcode() {
	return this->_barcode;
}

bool Medicine::add_new() {
	if (_name == _DEF_NAME_ || _id == _DEF_ID_ || _barcode == _DEF_BARCODE_
		|| _name == "" || _id == "" || _barcode == "")
		return false;

	// Search If Exist Name

	return MedicineDatabase::add_new(this);
}