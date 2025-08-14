#pragma once
// Written by Dyllin Black.
// This project is not meant for actual use as pharmacy management software for a number of reasons,
// it is just a personal practice project.

#include "Medication.h"
#include <map>
#include <string>
#include <vector>

using namespace std;

class MedDatabase
{
	public:
		MedDatabase();
		void addMedication(Medication medToAdd);
		vector<Medication> getMedication(string identifier);
	private:
		map<int, map<int, Medication>> NDCBasedDatabase;	//Map of manufacturers with a map of products per manuf.
		map<string, vector<Medication>> GenericNameBasedDatabase;		//Map based on generic name.
		map<string, vector<Medication>> BrandNameBasedDatabase;			//Map based on brand name.
};