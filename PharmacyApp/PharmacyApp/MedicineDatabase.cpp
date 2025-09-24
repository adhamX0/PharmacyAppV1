#include "MedicineDatabase.h"

bool MedicineDatabase::add_new(Medicine *new_medicine) {
	std::string enter_line;

	enter_line = new_medicine->get_id() + "#//#" +
		new_medicine->get_name() + "#//#" + 
		new_medicine->get_barcode();

	std::ofstream file("database\\medicine\\MedicineDatabaseFile.txt", std::ios::app);

	if (file.is_open()) {
		file << enter_line << '\n';
		file.close();
		return true;
	}

	return false;

}