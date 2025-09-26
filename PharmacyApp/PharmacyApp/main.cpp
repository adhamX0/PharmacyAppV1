#include <iostream>
#include <vector>
#include <iomanip>
#include "MedicineDatabase.h"


using namespace std;


int main() {

	Medicine new_medicne("A21", "Panadol Extra", "216578");

	if (new_medicne.add_new())
		cout << "Saved!" << endl;
	else
		cout << "Not Saved!" << endl;



	return 0;
}