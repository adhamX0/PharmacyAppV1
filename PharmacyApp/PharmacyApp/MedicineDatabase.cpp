#include "MedicineDatabase.h"
#include <string>
#include <direct.h>

bool MedicineDatabase::add_new(Medicine *new_medicine) {
	std::string enter_line;

	if (new_medicine->get_name() == Medicine::_DEF_NAME_ ||
		new_medicine->get_id() == Medicine::_DEF_ID_ || new_medicine->get_barcode() == Medicine::_DEF_BARCODE_
		|| new_medicine->get_name() == "" ||
		new_medicine->get_id() == "" || new_medicine->get_barcode() == "")
		return false;
	// Check
	std::vector<Medicine> all_list = MedicineDatabase::get_all();

	for (auto& X : all_list) {
		if (Utils::to_upper(X.get_id()) == Utils::to_upper(new_medicine->get_id()) ||
			Utils::to_upper(X.get_name()) == Utils::to_upper(new_medicine->get_name()) ||
			Utils::to_upper(X.get_barcode()) == Utils::to_upper(new_medicine->get_barcode()))
			return false;
	}


	enter_line = new_medicine->get_id() + "#//#" +
		new_medicine->get_name() + "#//#" + 
		new_medicine->get_barcode();
	

	_mkdir("database");
	_mkdir("database\\medicine");

	std::ofstream file("database\\medicine\\MedicineDatabaseFile.txt", std::ios::out);

	if (file.is_open()) {
		file << enter_line << '\n';
		file.close();
		return true;
	}

	return false;

}

std::vector<Medicine> MedicineDatabase::get_all() {
	std::ifstream file("database\\medicine\\MedicineDatabaseFile.txt");

	std::vector<Medicine> list;

	std::string line_string;

	if (file.is_open()) {
		while (std::getline(file, line_string)) {
			Medicine get_med;

			std::vector<std::string> line;
			line = Utils::substrings(line_string, "#//#");

			get_med.set_id(line[0]);
			get_med.set_name(line[1]);
			get_med.set_barcode(line[2]);
			list.push_back(get_med);
		}
	}



	return list;

}


bool MedicineDatabase::remove_by_id(std::string medicine_id) {
	return false;
}
bool MedicineDatabase::remove_by_name(std::string medicine_name) {

		return false;
}
bool MedicineDatabase::remove_by_barcode(std::string medicine_barcode) {

		return false;
}

Medicine MedicineDatabase::find_by_id(std::string medicine_id) {
	std::vector<Medicine> all = get_all();

	for (auto& i : all) {
		if (Utils::to_upper(i.get_id()) == Utils::to_upper(medicine_id)) return i;
	}

	return Medicine();
}
Medicine MedicineDatabase::find_by_name(std::string medicine_name){
	std::vector<Medicine> all = get_all();

	for (auto& i : all) {
		if (Utils::to_upper(i.get_name()) == Utils::to_upper(medicine_name)) return i;
	}

	return Medicine();
}
Medicine MedicineDatabase::find_by_barcode(std::string medicine_barcode){
	std::vector<Medicine> all = get_all();

	for (auto& i : all) {
		if (Utils::to_upper(i.get_barcode()) == Utils::to_upper(medicine_barcode)) return i;
	}

	return Medicine();
}

 
