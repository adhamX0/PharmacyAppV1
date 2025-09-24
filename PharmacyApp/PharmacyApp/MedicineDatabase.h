#ifndef _MEDICINE_DATABASE_H_
#define _MEDICINE_DATABASE_H_
#include <iostream>
#include <fstream>
#include "medicine.h"

class MedicineDatabase {

public:
	static bool add_new(Medicine* new_medicine);
};

#endif