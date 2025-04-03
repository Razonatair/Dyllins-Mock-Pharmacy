#pragma once
//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

#include <string>

using namespace std;

class Medication
{
	public:
		Medication();

		Medication(	int NDClabelerCode,
					int NDCproductCode,
					string NDCpackageCode,
					char DEAclass,
					string manufacturer,
					string brandName,
					string genericName,
					string strength,
					string form,
					string storageMethod,
					int packageSize);

		Medication(	int NDClabelerCode,
					int NDCproductCode,
					string NDCpackageCodeNDC);

		//ADD: setters/getters
		char getDEAClass() { return DEAclass; }

	private:

		//==NDC-specific information.==
		int NDClabelerCode;		//4 to 6 digit prefix for the NDC, [NNNN-0000-00], identifies manufacturer/repackager/distributer.
		int NDCproductCode;		//3 or 4 digits long middle of the NDC, [0000-NNNN-00], identifies strength, dosage form, and formulation for labeling firm.
		string NDCpackageCode;	//1 or 2 digits postfix for the NDC, [0000-0000-NN], identifies package forms and sizes,
								//but packageCode might contain non-digits in "very exceptional cases".

		//Valid NDC patterns:
		//4-4-2
		//5-3-2
		//5-4-1
		//6-3-2
		//6-4-1

		char DEAclass;			//Schedule '1', '2', '3', '4', '5', or non-scheduled 'N'.
		string manufacturer;
		string brandName;
		string genericName;
		string strength;
		string form;
		string storageMethod;
		int packageSize;

		//Contraindications should be specified somehow here.


};
