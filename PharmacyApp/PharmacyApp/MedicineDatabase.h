#ifndef _MEDICINE_DATABASE_H_
#define _MEDICINE_DATABASE_H_
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Utils.h"
#include "medicine.h"

class MedicineDatabase {

public:
	static bool add_new(Medicine* new_medicine);
	static std::vector<Medicine> get_all();
	static bool remove_by_id(std::string medicine_id);
	static bool remove_by_name(std::string medicine_name);
	static bool remove_by_barcode(std::string medicine_barcode);

	static Medicine find_by_id(std::string medicine_id);
	static Medicine find_by_name(std::string medicine_name);
	static Medicine find_by_barcode(std::string medicine_barcode);
};

#endif