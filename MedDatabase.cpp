#pragma once
// Written by Dyllin Black.
// This project is not meant for actual use as pharmacy management software for a number of reasons,
// it is just a personal practice project.

#include "MedDatabase.h"

using namespace std;

MedDatabase::MedDatabase()
{

}

void MedDatabase::addMedication(Medication medToAdd)
{
	//First handle adding the medication to the NDCBasedDatabase.
	//TODO: Fix shortened NDCs. Probably switch to strings.
	int medManufCode = medToAdd.getManufacturerCode();
	int medProductCode = medToAdd.getProductCode();
	NDCBasedDatabase[medManufCode][medProductCode] = medToAdd;

	//Then handle adding the medication to the GenericNameBasedDatabase.
	string medGenericName = medToAdd.getGenericName();
	if (GenericNameBasedDatabase.count(medGenericName) == 0)
	{
		vector<Medication> newVector;
		GenericNameBasedDatabase[medGenericName] = newVector;
		GenericNameBasedDatabase[medGenericName].push_back(medToAdd);
	}
	else
	{
		GenericNameBasedDatabase[medGenericName].push_back(medToAdd);
	}

	//Then finally handle adding the medication to the BrandNameBasedDatabase.
	string medBrandName = medToAdd.getBrandName();
	if (BrandNameBasedDatabase.count(medGenericName) == 0)
	{
		vector<Medication> newVector;
		BrandNameBasedDatabase[medBrandName] = newVector;
		BrandNameBasedDatabase[medBrandName].push_back(medToAdd);
	}
	else
	{
		BrandNameBasedDatabase[medBrandName].push_back(medToAdd);
	}
}

vector<Medication> MedDatabase::getMedication(string identifier)
{
	//First determine if this is an NDC or a name-based search.
	if (isdigit(identifier.at(0)))
	{
		//This is an NDC-based search.
		int identManufCode = stoi(identifier.substr(0,5));
		int identProductCode = stoi(identifier.substr(0, 5));
	}
	else
	{
		//Otherwise, it's a name-based search.

	}
}