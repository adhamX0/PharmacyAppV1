#include <iostream>
#include "MedicineDatabase.h"
using namespace std;


int main() {

	if (MedicineDatabase::remove_by_barcode("6223009876543"))
		cout << "Deleted By Barcode!" << endl;
	else
		cout << "Not Deleted By Barcode!" << endl;

	if (MedicineDatabase::remove_by_id("C44"))
		cout << "Deleted By ID!" << endl;
	else
		cout << "Not Deleted By ID!" << endl;

	if (MedicineDatabase::remove_by_name("Flagyl 500"))
		cout << "Deleted By Name!" << endl;
	else
		cout << "Not Deleted By Name!" << endl;


	return 0;
}