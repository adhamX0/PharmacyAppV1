#include <iostream>
#include <vector>
#include <iomanip>
#include "MedicineDatabase.h"


using namespace std;





int main() {

	Medicine find = MedicineDatabase::find_by_name("panadol extra");


	std::cout << find.get_name() << std::endl <<
		find.get_barcode() << std::endl <<
		find.get_id() << std::endl;


	return 0;
}