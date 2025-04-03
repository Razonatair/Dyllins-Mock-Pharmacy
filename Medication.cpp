#pragma once
//Written by Dyllin Black.
//This project is not meant for actual use as pharmacy management software for a number of reasons,
//it is just a personal practice project.

#include "Medication.h"

using namespace std;

Medication::Medication()
{
	NDClabelerCode = -1;
	NDCproductCode = -1;
	NDCpackageCode = "";
	DEAclass = 'N';
	manufacturer = "";
	brandName = "";
	genericName = "";
	strength = "";
	form = "";
	storageMethod = "";
	packageSize = -1;
}

Medication::Medication(	int NDClabelerCode,
						int NDCproductCode,
						string NDCpackageCode,
						char DEAclass,
						string manufacturer,
						string brandName,
						string genericName,
						string strength,
						string form,
						string storageMethod,
						int packageSize)
{
	this->NDClabelerCode = NDClabelerCode;
	this->NDCproductCode = NDCproductCode;
	this->NDCpackageCode = NDCpackageCode;
	this->DEAclass = DEAclass;
	this->manufacturer = manufacturer;
	this->brandName = brandName;
	this->genericName = genericName;
	this->strength = strength;
	this->form = form;
	this->storageMethod = storageMethod;
	this->packageSize = packageSize;
}

//Most drug information can be derived from the NDC.
Medication::Medication(	int NDClabelerCode,
						int NDCproductCode,
						string NDCpackageCodeNDC)
{
	// TODO: Write code to derive other drug information based on NDC.
	this->NDClabelerCode = NDClabelerCode;
	this->NDCproductCode = NDCproductCode;
	this->NDCpackageCode = NDCpackageCode;
	DEAclass = 'N';
	manufacturer = "";
	brandName = "";
	genericName = "";
	strength = "";
	form = "";
	storageMethod = "";
	packageSize = -1;
}