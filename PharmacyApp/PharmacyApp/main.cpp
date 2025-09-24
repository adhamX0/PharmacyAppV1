#include <iostream>
#include "medicine.h"
using namespace std;

int main() {



	Medicine NewMed;

	NewMed.set_id("Q65");
	NewMed.set_name("Catafast");
	NewMed.set_barcode("98523154");

	bool isSaved = NewMed.add_new();



	return 0;
}